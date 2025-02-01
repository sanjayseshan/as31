/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     STRING = 258,
     D_ORG = 259,
     D_BYTE = 260,
     D_WORD = 261,
     D_SKIP = 262,
     D_EQU = 263,
     D_FLAG = 264,
     D_END = 265,
     ACALL = 266,
     ADD = 267,
     ADDC = 268,
     AJMP = 269,
     ANL = 270,
     CJNE = 271,
     CLR = 272,
     CPL = 273,
     DA = 274,
     DEC = 275,
     DIV = 276,
     DJNZ = 277,
     INC = 278,
     JB = 279,
     JBC = 280,
     JC = 281,
     JMP = 282,
     JNB = 283,
     JNC = 284,
     JNZ = 285,
     JZ = 286,
     LCALL = 287,
     LJMP = 288,
     MOV = 289,
     MOVC = 290,
     MOVX = 291,
     NOP = 292,
     MUL = 293,
     ORL = 294,
     POP = 295,
     PUSH = 296,
     RET = 297,
     RETI = 298,
     RL = 299,
     RLC = 300,
     RR = 301,
     RRC = 302,
     SETB = 303,
     SJMP = 304,
     SUBB = 305,
     SWAP = 306,
     XCH = 307,
     XCHD = 308,
     XRL = 309,
     AB = 310,
     A = 311,
     C = 312,
     PC = 313,
     DPTR = 314,
     BITPOS = 315,
     R0 = 316,
     R1 = 317,
     R2 = 318,
     R3 = 319,
     R4 = 320,
     R5 = 321,
     R6 = 322,
     R7 = 323,
     VALUE = 324,
     SYMBOL = 325
   };
#endif
#define STRING 258
#define D_ORG 259
#define D_BYTE 260
#define D_WORD 261
#define D_SKIP 262
#define D_EQU 263
#define D_FLAG 264
#define D_END 265
#define ACALL 266
#define ADD 267
#define ADDC 268
#define AJMP 269
#define ANL 270
#define CJNE 271
#define CLR 272
#define CPL 273
#define DA 274
#define DEC 275
#define DIV 276
#define DJNZ 277
#define INC 278
#define JB 279
#define JBC 280
#define JC 281
#define JMP 282
#define JNB 283
#define JNC 284
#define JNZ 285
#define JZ 286
#define LCALL 287
#define LJMP 288
#define MOV 289
#define MOVC 290
#define MOVX 291
#define NOP 292
#define MUL 293
#define ORL 294
#define POP 295
#define PUSH 296
#define RET 297
#define RETI 298
#define RL 299
#define RLC 300
#define RR 301
#define RRC 302
#define SETB 303
#define SJMP 304
#define SUBB 305
#define SWAP 306
#define XCH 307
#define XCHD 308
#define XRL 309
#define AB 310
#define A 311
#define C 312
#define PC 313
#define DPTR 314
#define BITPOS 315
#define R0 316
#define R1 317
#define R2 318
#define R3 319
#define R4 320
#define R5 321
#define R6 322
#define R7 323
#define VALUE 324
#define SYMBOL 325




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



