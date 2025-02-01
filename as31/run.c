#define _GNU_SOURCE
#include <stdio.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>


#include <unistd.h>		//for user stuff

#include "as31.h"


// added ".inc" command to include header files. B.Porr

/* global variables */
unsigned long lc;
char *asmfile;
int fatal=0, abort_asap=0;
int pass=0;
int dashl=0;
FILE *listing=NULL, *fin=NULL;
int incLineCount=0;



int run_as31(const char *infile, int lst, int use_stdout,
	     const char *fmt, const char *arg, const char *customoutfile)
{
	char *outfile=NULL, *lstfile=NULL;
	const char *extension;
	int has_dot_asm=0;
	int i,len, baselen, extlen;
	FILE* finPre;
	char tmpName[256];
	char *lineBuffer=NULL;
	long unsigned int sizeBuf=0;
	char *includePtr=NULL;
	char *incLineBuffer=NULL;
	long unsigned int incSizeBuf=0;
	FILE* includeFile=NULL;
	int fd;

	/* first, figure out all the file names */

	dashl = lst;
	extension = emit_extension(fmt);
	extlen = strlen(extension);

	len = baselen = strlen(infile);
	if (len >= 4 && strcasecmp(infile + len - 4, ".asm") == 0) {
		has_dot_asm = 1;
		baselen -= 4;
	}
	
	asmfile = (char *)malloc(baselen + 5);
	strcpy(asmfile, infile);

	if (dashl) {
		lstfile = (char *)malloc(baselen + 5);
		strncpy(lstfile, infile, baselen);
		strcpy(lstfile + baselen, ".lst");
	}

	if (use_stdout) {
		outfile = NULL;
	} else {
		if (customoutfile==NULL) {
			outfile = (char *)malloc(baselen + extlen + 2);
			strncpy(outfile, infile, baselen);
			*(outfile + baselen) = '.';
			strcpy(outfile + baselen + 1, extension);
		} else {
			len = strlen(customoutfile);
			outfile = (char *)malloc(len + 1);
			strncpy(outfile, customoutfile, len);
		}
	}

	/* now open the files */

        // "preprocessor"
	finPre = freopen(asmfile, "r", stdin);
	if (finPre == NULL) {
		if (!has_dot_asm) {
			strcpy(asmfile + baselen, ".asm");
			finPre = freopen(asmfile, "r", stdin);
		}
		if (finPre == NULL) {
			mesg_f("Cannot open input file: %s\n", asmfile);
			free(asmfile);
			if (outfile) free(outfile);
			if (lstfile) free(lstfile);
			return -1;
		}
	}
	
	sprintf(tmpName,"/tmp/as31-XXXXXX.asm");
	fd = mkstemps(tmpName, 4);
	if (fd == -1) {
		mesg_f("Cannot create temp file\n");
		if (outfile) free(outfile);
		if (lstfile) free(lstfile);
		return -1;
	}
	fin = fdopen(fd, "w");
	if (fin == NULL) {
		mesg_f("Cannot open temp file: %s\n",tmpName);
		close(fd);
		if (outfile) free(outfile);
		if (lstfile) free(lstfile);
		return -1;
	}

	while (!feof(finPre)) {
		if (getline(&lineBuffer,&sizeBuf,finPre) == -1)
			break;
		if ((includePtr=strstr(lineBuffer,INC_CMD))) {
			includePtr=includePtr+strlen(INC_CMD);
			while ((*includePtr==' ')||		//move includePtr to filename
			       (*includePtr==9)  ||
			       (*includePtr=='\"')||
			       (*includePtr=='\''))
				{
				includePtr++;
			}
			i=0;
			while ((includePtr[i]!=0) &&
			       (includePtr[i]!=10) &&
			       (includePtr[i]!=13) &&
			       (includePtr[i]!='\"') &&
			       (includePtr[i]!='\'')) {
				i++;
			}
			includePtr[i]=0;
			includeFile=fopen(includePtr,"r");
			mesg_f("including file: %s\n",includePtr);
			if (!includeFile) {
				mesg_f("Cannot open include file: %s\n",includePtr);
			} else {
				while (!feof(includeFile)) {
					if (getline(&incLineBuffer,&incSizeBuf,includeFile) == -1)
						break;
					fprintf(fin,"%s",incLineBuffer);
					if (strlen(incLineBuffer)) {
						incLineCount++;
					}
				}
				fclose(includeFile);
				if (incLineCount) {
					incLineCount--;
				}
			}
		} else {
			fprintf(fin,"%s",lineBuffer);
		}
	}						//.inc -files are now inserted
	free(lineBuffer);
	free(incLineBuffer);

	fclose(fin);
	fin = freopen(tmpName, "r", stdin);

	if (dashl) {
		listing = fopen(lstfile,"w");
		if( listing == NULL ) {
			mesg_f("Cannot open file: %s for writing.\n",
				lstfile);
			fclose(fin);
			free(asmfile);
			if (outfile) free(outfile);
			if (lstfile) free(lstfile);
			return -1;
		}
	}

	/* what happens if this doesn't work */
	emitopen(outfile, fmt, arg);

	syminit();
	clear_location_counter();
	fatal = abort_asap = 0;
	lineno = 1;
	pass=0;
	lc = 0;

	/*
	** P A S S    1
	*/

	if (!use_stdout) mesg_f("Begin Pass #1\n");
	yyparse();
	if (fatal) {
		mesg_f("Errors in pass1, assembly aborted\n");
	} else {

		rewind(fin);
		lineno = 1;
		pass++;
		lc = 0;
		emitaddr(lc);

		/*
		** P A S S    2
		*/
        	if (!use_stdout) mesg_f("Begin Pass #2\n");
		yyparse();
	}
	if (fatal) {
		mesg_f("Errors in pass2, assembly aborted\n");
	}

	emitclose();
	fclose(fin);
	unlink(tmpName);					//delete tmpName
	if (dashl) fclose(listing);
	free(asmfile);
	if (outfile) free(outfile);
	if (lstfile) free(lstfile);
	freesym();
	if (fatal) return -1;
	return 0;
}	


/* the parser, lexer and other stuff that actually do the */
/* assembly will call to these two functions to report any */
/* errors or warning.  error() calls exit() in the command */
/* line version, but the abort_asap flag was added, and the */
/* parser check it at the end of every line */

void error(const char *fmt, ...)
{
	va_list args;
	char buf[2048];
	int len;

	abort_asap++;
        fatal++;
	va_start(args, fmt);

	// fixme: negative line no for includes...
	len = snprintf(buf, sizeof(buf), "Error, line %d, ", lineno-incLineCount);
	len += vsnprintf(buf + len, sizeof(buf) - len, fmt, args);
	snprintf(buf + len, sizeof(buf) - len, ".\n");
	mesg(buf);
}


void warn(const char *fmt, ...)
{
	va_list args;
	char buf[2048];
	int len;

        fatal++;
	va_start(args, fmt);

	printf("incLineCount=%d\n",incLineCount);
	len = snprintf(buf, sizeof(buf), "Warning, line %d, ", lineno-incLineCount);
	len += vsnprintf(buf + len, sizeof(buf) - len, fmt, args);
	snprintf(buf + len, sizeof(buf) - len, ".\n");
	mesg(buf);
}


void mesg_f(const char *fmt, ...)
{
	va_list args;
	char buf[2048];

	va_start(args, fmt);

	vsnprintf(buf, sizeof(buf), fmt, args);
	mesg(buf);
}

