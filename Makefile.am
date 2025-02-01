# Makefile for as31

INCLUDES = $(GUI_CFLAGS) $(CFLAGS)

if OPTION_GTK
AS31GTK_BIN = as31gtk
else
AS31GTK_BIN =
endif


bin_PROGRAMS = \
	as31 \
	$(AS31GTK_BIN)
	
as31_SOURCES = \
	as31.h \
	run.c \
	lexer.c \
	parser.y \
	parser.h \
	symbol.c \
	emitter.c \
	as31.c

as31gtk_SOURCES = \
	as31.h \
	run.c \
	lexer.c \
	parser.y \
	parser.h \
	symbol.c \
	emitter.c \
	as31_gtk.c

as31gtk_LDADD = $(GUI_LIBS)

man_MANS = as31.1

EXTRA_DIST = as31.1
CLEANFILES = as31gtk

