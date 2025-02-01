diff --git a/as31/parser.c b/as31/parser.c
index dd388a9..53a9c8f 100644
--- a/as31/parser.c
+++ b/as31/parser.c
@@ -1,30 +1,37 @@
-/* A Bison parser, made by GNU Bison 1.875d.  */
+/* A Bison parser, made by GNU Bison 2.5.  */
 
-/* Skeleton parser for Yacc-like parsing with Bison,
-   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.
-
-   This program is free software; you can redistribute it and/or modify
+/* Bison implementation for Yacc-like parsers in C
+   
+      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
+   
+   This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
-   the Free Software Foundation; either version 2, or (at your option)
-   any later version.
-
+   the Free Software Foundation, either version 3 of the License, or
+   (at your option) any later version.
+   
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
-
+   
    You should have received a copy of the GNU General Public License
-   along with this program; if not, write to the Free Software
-   Foundation, Inc., 59 Temple Place - Suite 330,
-   Boston, MA 02111-1307, USA.  */
-
-/* As a special exception, when this file is copied by Bison into a
-   Bison output file, you may use that output file without restriction.
-   This special exception was added by the Free Software Foundation
-   in version 1.24 of Bison.  */
-
-/* Written by Richard Stallman by simplifying the original so called
-   ``semantic'' parser.  */
+   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */
+
+/* As a special exception, you may create a larger work that contains
+   part or all of the Bison parser skeleton and distribute that work
+   under terms of your choice, so long as that work isn't itself a
+   parser generator using the skeleton or a modified version thereof
+   as a parser skeleton.  Alternatively, if you modify or redistribute
+   the parser skeleton itself, you may (at your option) remove this
+   special exception, which will cause the skeleton and the resulting
+   Bison output files to be licensed under the GNU General Public
+   License without this special exception.
+   
+   This special exception was added by the Free Software Foundation in
+   version 2.2 of Bison.  */
+
+/* C LALR(1) parser skeleton written by Richard Stallman, by
+   simplifying the original so-called "semantic" parser.  */
 
 /* All symbols defined below should begin with yy or YY, to avoid
    infringing on user name space.  This should be done even for local
@@ -36,17 +43,80 @@
 /* Identify Bison output.  */
 #define YYBISON 1
 
+/* Bison version.  */
+#define YYBISON_VERSION "2.5"
+
 /* Skeleton name.  */
 #define YYSKELETON_NAME "yacc.c"
 
 /* Pure parsers.  */
 #define YYPURE 0
 
+/* Push parsers.  */
+#define YYPUSH 0
+
+/* Pull parsers.  */
+#define YYPULL 1
+
 /* Using locations.  */
 #define YYLSP_NEEDED 0
 
 
 
+/* Copy the first part of user declarations.  */
+
+/* Line 268 of yacc.c  */
+#line 21 "parser.y"
+
+
+#include <stdio.h>
+#include <stdlib.h>
+
+#define NOPE
+#include "as31.h"
+#undef NOPE
+
+#define YYSTYPE union ystack
+
+static unsigned char bytebuf[1024];		/* used by dumplist() */
+static int bytecount;
+
+
+void yyerror(const char *s);
+int makeop(struct opcode * op, struct mode *m, int add);
+void inclc(int i);
+char *padline(char *line);
+void dumplist(char *txt, int show);
+void genbyte(int b);
+void genstr(const char *s);
+void genword(unsigned long w);
+
+/* ------------------------ G R A M M E R ----------------------------- */
+
+
+
+/* Line 268 of yacc.c  */
+#line 100 "y.tab.c"
+
+/* Enabling traces.  */
+#ifndef YYDEBUG
+# define YYDEBUG 0
+#endif
+
+/* Enabling verbose error messages.  */
+#ifdef YYERROR_VERBOSE
+# undef YYERROR_VERBOSE
+# define YYERROR_VERBOSE 1
+#else
+# define YYERROR_VERBOSE 0
+#endif
+
+/* Enabling the token table.  */
+#ifndef YYTOKEN_TABLE
+# define YYTOKEN_TABLE 0
+#endif
+
+
 /* Tokens.  */
 #ifndef YYTOKENTYPE
 # define YYTOKENTYPE
@@ -123,6 +193,7 @@
      SYMBOL = 325
    };
 #endif
+/* Tokens.  */
 #define STRING 258
 #define D_ORG 259
 #define D_BYTE 260
@@ -195,113 +266,184 @@
 
 
 
-/* Copy the first part of user declarations.  */
-#line 21 "parser.y"
-
-
-#include <stdio.h>
-#include <stdlib.h>
-
-#define NOPE
-#include "as31.h"
-#undef NOPE
-
-#define YYSTYPE union ystack
-
-static unsigned char bytebuf[1024];		/* used by dumplist() */
-static int bytecount;
+#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
+typedef int YYSTYPE;
+# define YYSTYPE_IS_TRIVIAL 1
+# define yystype YYSTYPE /* obsolescent; will be withdrawn */
+# define YYSTYPE_IS_DECLARED 1
+#endif
 
 
-void yyerror(const char *s);
-int makeop(struct opcode * op, struct mode *m, int add);
-void inclc(int i);
-char *padline(char *line);
-void dumplist(char *txt, int show);
-void genbyte(int b);
-void genstr(const char *s);
-void genword(unsigned long w);
+/* Copy the second part of user declarations.  */
 
-/* ------------------------ G R A M M E R ----------------------------- */
 
+/* Line 343 of yacc.c  */
+#line 282 "y.tab.c"
 
+#ifdef short
+# undef short
+#endif
 
-/* Enabling traces.  */
-#ifndef YYDEBUG
-# define YYDEBUG 0
+#ifdef YYTYPE_UINT8
+typedef YYTYPE_UINT8 yytype_uint8;
+#else
+typedef unsigned char yytype_uint8;
 #endif
 
-/* Enabling verbose error messages.  */
-#ifdef YYERROR_VERBOSE
-# undef YYERROR_VERBOSE
-# define YYERROR_VERBOSE 1
+#ifdef YYTYPE_INT8
+typedef YYTYPE_INT8 yytype_int8;
+#elif (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+typedef signed char yytype_int8;
 #else
-# define YYERROR_VERBOSE 0
+typedef short int yytype_int8;
 #endif
 
-#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
-typedef int YYSTYPE;
-# define yystype YYSTYPE /* obsolescent; will be withdrawn */
-# define YYSTYPE_IS_DECLARED 1
-# define YYSTYPE_IS_TRIVIAL 1
+#ifdef YYTYPE_UINT16
+typedef YYTYPE_UINT16 yytype_uint16;
+#else
+typedef unsigned short int yytype_uint16;
 #endif
 
+#ifdef YYTYPE_INT16
+typedef YYTYPE_INT16 yytype_int16;
+#else
+typedef short int yytype_int16;
+#endif
 
+#ifndef YYSIZE_T
+# ifdef __SIZE_TYPE__
+#  define YYSIZE_T __SIZE_TYPE__
+# elif defined size_t
+#  define YYSIZE_T size_t
+# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
+#  define YYSIZE_T size_t
+# else
+#  define YYSIZE_T unsigned int
+# endif
+#endif
 
-/* Copy the second part of user declarations.  */
+#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)
 
+#ifndef YY_
+# if defined YYENABLE_NLS && YYENABLE_NLS
+#  if ENABLE_NLS
+#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
+#   define YY_(msgid) dgettext ("bison-runtime", msgid)
+#  endif
+# endif
+# ifndef YY_
+#  define YY_(msgid) msgid
+# endif
+#endif
 
-/* Line 214 of yacc.c.  */
-#line 255 "y.tab.c"
+/* Suppress unused-variable warnings by "using" E.  */
+#if ! defined lint || defined __GNUC__
+# define YYUSE(e) ((void) (e))
+#else
+# define YYUSE(e) /* empty */
+#endif
 
-#if ! defined (yyoverflow) || YYERROR_VERBOSE
+/* Identity function, used to suppress warnings about constant conditions.  */
+#ifndef lint
+# define YYID(n) (n)
+#else
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+static int
+YYID (int yyi)
+#else
+static int
+YYID (yyi)
+    int yyi;
+#endif
+{
+  return yyi;
+}
+#endif
 
-# ifndef YYFREE
-#  define YYFREE free
-# endif
-# ifndef YYMALLOC
-#  define YYMALLOC malloc
-# endif
+#if ! defined yyoverflow || YYERROR_VERBOSE
 
 /* The parser invokes alloca or malloc; define the necessary symbols.  */
 
 # ifdef YYSTACK_USE_ALLOCA
 #  if YYSTACK_USE_ALLOCA
-#   define YYSTACK_ALLOC alloca
-#  endif
-# else
-#  if defined (alloca) || defined (_ALLOCA_H)
-#   define YYSTACK_ALLOC alloca
-#  else
 #   ifdef __GNUC__
 #    define YYSTACK_ALLOC __builtin_alloca
+#   elif defined __BUILTIN_VA_ARG_INCR
+#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
+#   elif defined _AIX
+#    define YYSTACK_ALLOC __alloca
+#   elif defined _MSC_VER
+#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
+#    define alloca _alloca
+#   else
+#    define YYSTACK_ALLOC alloca
+#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
+#     ifndef EXIT_SUCCESS
+#      define EXIT_SUCCESS 0
+#     endif
+#    endif
 #   endif
 #  endif
 # endif
 
 # ifdef YYSTACK_ALLOC
-   /* Pacify GCC's `empty if-body' warning. */
-#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
-# else
-#  if defined (__STDC__) || defined (__cplusplus)
-#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
-#   define YYSIZE_T size_t
+   /* Pacify GCC's `empty if-body' warning.  */
+#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
+#  ifndef YYSTACK_ALLOC_MAXIMUM
+    /* The OS might guarantee only one guard page at the bottom of the stack,
+       and a page size can be as small as 4096 bytes.  So we cannot safely
+       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
+       to allow for a few compiler-allocated temporary stack slots.  */
+#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
 #  endif
+# else
 #  define YYSTACK_ALLOC YYMALLOC
 #  define YYSTACK_FREE YYFREE
+#  ifndef YYSTACK_ALLOC_MAXIMUM
+#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
+#  endif
+#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
+       && ! ((defined YYMALLOC || defined malloc) \
+	     && (defined YYFREE || defined free)))
+#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
+#   ifndef EXIT_SUCCESS
+#    define EXIT_SUCCESS 0
+#   endif
+#  endif
+#  ifndef YYMALLOC
+#   define YYMALLOC malloc
+#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
+#   endif
+#  endif
+#  ifndef YYFREE
+#   define YYFREE free
+#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+void free (void *); /* INFRINGES ON USER NAME SPACE */
+#   endif
+#  endif
 # endif
-#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */
+#endif /* ! defined yyoverflow || YYERROR_VERBOSE */
 
 
-#if (! defined (yyoverflow) \
-     && (! defined (__cplusplus) \
-	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))
+#if (! defined yyoverflow \
+     && (! defined __cplusplus \
+	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))
 
 /* A type that is properly aligned for any stack member.  */
 union yyalloc
 {
-  short int yyss;
-  YYSTYPE yyvs;
-  };
+  yytype_int16 yyss_alloc;
+  YYSTYPE yyvs_alloc;
+};
 
 /* The size of the maximum gap between one aligned stack and the next.  */
 # define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)
@@ -309,74 +451,72 @@ union yyalloc
 /* The size of an array large to enough to hold all stacks, each with
    N elements.  */
 # define YYSTACK_BYTES(N) \
-     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
+     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
       + YYSTACK_GAP_MAXIMUM)
 
-/* Copy COUNT objects from FROM to TO.  The source and destination do
-   not overlap.  */
-# ifndef YYCOPY
-#  if defined (__GNUC__) && 1 < __GNUC__
-#   define YYCOPY(To, From, Count) \
-      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
-#  else
-#   define YYCOPY(To, From, Count)		\
-      do					\
-	{					\
-	  register YYSIZE_T yyi;		\
-	  for (yyi = 0; yyi < (Count); yyi++)	\
-	    (To)[yyi] = (From)[yyi];		\
-	}					\
-      while (0)
-#  endif
-# endif
+# define YYCOPY_NEEDED 1
 
 /* Relocate STACK from its old location to the new one.  The
    local variables YYSIZE and YYSTACKSIZE give the old and new number of
    elements in the stack, and YYPTR gives the new location of the
    stack.  Advance YYPTR to a properly aligned location for the next
    stack.  */
-# define YYSTACK_RELOCATE(Stack)					\
+# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
     do									\
       {									\
 	YYSIZE_T yynewbytes;						\
-	YYCOPY (&yyptr->Stack, Stack, yysize);				\
-	Stack = &yyptr->Stack;						\
+	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
+	Stack = &yyptr->Stack_alloc;					\
 	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
 	yyptr += yynewbytes / sizeof (*yyptr);				\
       }									\
-    while (0)
+    while (YYID (0))
 
 #endif
 
-#if defined (__STDC__) || defined (__cplusplus)
-   typedef signed char yysigned_char;
-#else
-   typedef short int yysigned_char;
-#endif
+#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
+/* Copy COUNT objects from FROM to TO.  The source and destination do
+   not overlap.  */
+# ifndef YYCOPY
+#  if defined __GNUC__ && 1 < __GNUC__
+#   define YYCOPY(To, From, Count) \
+      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
+#  else
+#   define YYCOPY(To, From, Count)		\
+      do					\
+	{					\
+	  YYSIZE_T yyi;				\
+	  for (yyi = 0; yyi < (Count); yyi++)	\
+	    (To)[yyi] = (From)[yyi];		\
+	}					\
+      while (YYID (0))
+#  endif
+# endif
+#endif /* !YYCOPY_NEEDED */
 
-/* YYFINAL -- State number of the termination state. */
+/* YYFINAL -- State number of the termination state.  */
 #define YYFINAL  155
 /* YYLAST -- Last index in YYTABLE.  */
 #define YYLAST   599
 
-/* YYNTOKENS -- Number of terminals. */
+/* YYNTOKENS -- Number of terminals.  */
 #define YYNTOKENS  89
-/* YYNNTS -- Number of nonterminals. */
+/* YYNNTS -- Number of nonterminals.  */
 #define YYNNTS  35
-/* YYNRULES -- Number of rules. */
+/* YYNRULES -- Number of rules.  */
 #define YYNRULES  165
-/* YYNRULES -- Number of states. */
+/* YYNRULES -- Number of states.  */
 #define YYNSTATES  316
 
 /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
 #define YYUNDEFTOK  2
 #define YYMAXUTOK   325
 
-#define YYTRANSLATE(YYX) 						\
+#define YYTRANSLATE(YYX)						\
   ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)
 
 /* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
-static const unsigned char yytranslate[] =
+static const yytype_uint8 yytranslate[] =
 {
        0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       81,     2,     2,     2,     2,     2,     2,     2,     2,     2,
@@ -416,7 +556,7 @@ static const unsigned char yytranslate[] =
 #if YYDEBUG
 /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
    YYRHS.  */
-static const unsigned short int yyprhs[] =
+static const yytype_uint16 yyprhs[] =
 {
        0,     0,     3,     5,     8,    10,    14,    16,    19,    22,
       24,    25,    29,    33,    37,    41,    45,    51,    57,    60,
@@ -437,8 +577,8 @@ static const unsigned short int yyprhs[] =
      551,   553,   555,   557,   559,   561
 };
 
-/* YYRHS -- A `-1'-separated list of the rules' RHS. */
-static const yysigned_char yyrhs[] =
+/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
+static const yytype_int8 yyrhs[] =
 {
       90,     0,    -1,    91,    -1,    91,    92,    -1,    92,    -1,
       99,    80,    93,    -1,    93,    -1,    95,    81,    -1,   103,
@@ -500,7 +640,7 @@ static const yysigned_char yyrhs[] =
 };
 
 /* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
-static const unsigned short int yyrline[] =
+static const yytype_uint16 yyrline[] =
 {
        0,   126,   126,   131,   132,   135,   145,   148,   153,   159,
      164,   164,   183,   190,   191,   192,   195,   204,   210,   213,
@@ -522,9 +662,9 @@ static const unsigned short int yyrline[] =
 };
 #endif
 
-#if YYDEBUG || YYERROR_VERBOSE
-/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
-   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
+#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
+/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
+   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
 static const char *const yytname[] =
 {
   "$end", "error", "$undefined", "STRING", "D_ORG", "D_BYTE", "D_WORD",
@@ -537,7 +677,7 @@ static const char *const yytname[] =
   "R5", "R6", "R7", "VALUE", "SYMBOL", "'+'", "'-'", "'*'", "'/'", "'%'",
   "'|'", "'&'", "'>'", "'<'", "':'", "'\\n'", "'.'", "','", "'('", "')'",
   "'@'", "'#'", "'!'", "$accept", "program", "linelist", "line",
-  "linerest", "@1", "directive", "defexpr", "flag", "flagv", "undefsym",
+  "linerest", "$@1", "directive", "defexpr", "flag", "flagv", "undefsym",
   "blist", "wlist", "expr", "instr", "two_op1", "two_op2", "two_op3",
   "two_op4", "two_op5", "two_op6", "single_op1", "single_op2", "three_op1",
   "rel", "rel2", "bit", "bitv", "reg", "regi", "data8", "data16", "addr11",
@@ -548,7 +688,7 @@ static const char *const yytname[] =
 # ifdef YYPRINT
 /* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
    token YYLEX-NUM.  */
-static const unsigned short int yytoknum[] =
+static const yytype_uint16 yytoknum[] =
 {
        0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
@@ -563,7 +703,7 @@ static const unsigned short int yytoknum[] =
 # endif
 
 /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
-static const unsigned char yyr1[] =
+static const yytype_uint8 yyr1[] =
 {
        0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
       94,    93,    95,    95,    95,    95,    95,    95,    95,    96,
@@ -585,7 +725,7 @@ static const unsigned char yyr1[] =
 };
 
 /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
-static const unsigned char yyr2[] =
+static const yytype_uint8 yyr2[] =
 {
        0,     2,     1,     2,     1,     3,     1,     2,     2,     1,
        0,     3,     3,     3,     3,     3,     5,     5,     2,     1,
@@ -606,10 +746,10 @@ static const unsigned char yyr2[] =
        1,     1,     1,     1,     1,     1
 };
 
-/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
-   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
+/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
+   Performed when YYTABLE doesn't specify something else to do.  Zero
    means the default is an error.  */
-static const unsigned char yydefact[] =
+static const yytype_uint8 yydefact[] =
 {
        0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
@@ -645,8 +785,8 @@ static const unsigned char yydefact[] =
      137,    97,    95,    98,    96,   138
 };
 
-/* YYDEFGOTO[NTERM-NUM]. */
-static const short int yydefgoto[] =
+/* YYDEFGOTO[NTERM-NUM].  */
+static const yytype_int16 yydefgoto[] =
 {
       -1,    49,    50,    51,    52,    56,    53,   203,   297,   298,
       54,   206,   208,    69,    55,    65,    71,    72,   106,   101,
@@ -657,7 +797,7 @@ static const short int yydefgoto[] =
 /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    STATE-NUM.  */
 #define YYPACT_NINF -239
-static const short int yypact[] =
+static const yytype_int16 yypact[] =
 {
      370,  -239,   139,   -24,   -24,   139,   120,    70,    15,    15,
      -19,   470,   -12,   292,   441,    23,    23,   139,   -45,    23,
@@ -694,7 +834,7 @@ static const short int yypact[] =
 };
 
 /* YYPGOTO[NTERM-NUM].  */
-static const short int yypgoto[] =
+static const yytype_int16 yypgoto[] =
 {
     -239,  -239,  -239,   214,   107,  -239,  -239,   116,  -239,  -239,
      114,  -239,  -239,    -2,  -239,    21,    33,   238,    26,  -239,
@@ -704,10 +844,9 @@ static const short int yypgoto[] =
 
 /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
    positive, shift that token.  If negative, reduce the rule which
-   number is the opposite.  If zero, do what YYDEFACT says.
-   If YYTABLE_NINF, syntax error.  */
+   number is the opposite.  If YYTABLE_NINF, syntax error.  */
 #define YYTABLE_NINF -3
-static const short int yytable[] =
+static const yytype_int16 yytable[] =
 {
       62,   107,   107,    62,   242,   107,    85,   205,   277,   232,
      197,   187,   102,   291,    99,   109,   103,    99,   109,   109,
@@ -771,7 +910,13 @@ static const short int yytable[] =
      169,   170,   171,   165,   166,   167,   168,   169,   170,   171
 };
 
-static const short int yycheck[] =
+#define yypact_value_is_default(yystate) \
+  ((yystate) == (-239))
+
+#define yytable_value_is_error(yytable_value) \
+  YYID (0)
+
+static const yytype_int16 yycheck[] =
 {
        2,    15,    16,     5,   190,    19,     7,     3,   246,    56,
       60,    96,    13,     3,    11,    17,    13,    14,    20,    21,
@@ -837,7 +982,7 @@ static const short int yycheck[] =
 
 /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    symbol of state STATE-NUM.  */
-static const unsigned char yystos[] =
+static const yytype_uint8 yystos[] =
 {
        0,     1,    11,    12,    13,    14,    15,    16,    17,    18,
       19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
@@ -873,22 +1018,6 @@ static const unsigned char yystos[] =
      113,    58,    59,    56,    56,   113
 };
 
-#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
-# define YYSIZE_T __SIZE_TYPE__
-#endif
-#if ! defined (YYSIZE_T) && defined (size_t)
-# define YYSIZE_T size_t
-#endif
-#if ! defined (YYSIZE_T)
-# if defined (__STDC__) || defined (__cplusplus)
-#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
-#  define YYSIZE_T size_t
-# endif
-#endif
-#if ! defined (YYSIZE_T)
-# define YYSIZE_T unsigned int
-#endif
-
 #define yyerrok		(yyerrstatus = 0)
 #define yyclearin	(yychar = YYEMPTY)
 #define YYEMPTY		(-2)
@@ -901,9 +1030,18 @@ static const unsigned char yystos[] =
 
 /* Like YYERROR except do call yyerror.  This remains here temporarily
    to ease the transition to the new meaning of YYERROR, for GCC.
-   Once GCC version 2 has supplanted version 1, this can go.  */
+   Once GCC version 2 has supplanted version 1, this can go.  However,
+   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
+   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
+   discussed.  */
 
 #define YYFAIL		goto yyerrlab
+#if defined YYFAIL
+  /* This is here to suppress warnings from the GCC cpp's
+     -Wunused-macros.  Normally we don't worry about that warning, but
+     some users do, and we want to make it easy for users to remove
+     YYFAIL uses, which will produce warnings from Bison 2.5.  */
+#endif
 
 #define YYRECOVERING()  (!!yyerrstatus)
 
@@ -913,31 +1051,54 @@ do								\
     {								\
       yychar = (Token);						\
       yylval = (Value);						\
-      yytoken = YYTRANSLATE (yychar);				\
-      YYPOPSTACK;						\
+      YYPOPSTACK (1);						\
       goto yybackup;						\
     }								\
   else								\
-    { 								\
-      yyerror ("syntax error: cannot back up");\
+    {								\
+      yyerror (YY_("syntax error: cannot back up")); \
       YYERROR;							\
     }								\
-while (0)
+while (YYID (0))
+
 
 #define YYTERROR	1
 #define YYERRCODE	256
 
-/* YYLLOC_DEFAULT -- Compute the default location (before the actions
-   are run).  */
 
+/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
+   If N is 0, then set CURRENT to the empty location which ends
+   the previous symbol: RHS[0] (always defined).  */
+
+#define YYRHSLOC(Rhs, K) ((Rhs)[K])
 #ifndef YYLLOC_DEFAULT
-# define YYLLOC_DEFAULT(Current, Rhs, N)		\
-   ((Current).first_line   = (Rhs)[1].first_line,	\
-    (Current).first_column = (Rhs)[1].first_column,	\
-    (Current).last_line    = (Rhs)[N].last_line,	\
-    (Current).last_column  = (Rhs)[N].last_column)
+# define YYLLOC_DEFAULT(Current, Rhs, N)				\
+    do									\
+      if (YYID (N))                                                    \
+	{								\
+	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
+	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
+	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
+	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
+	}								\
+      else								\
+	{								\
+	  (Current).first_line   = (Current).last_line   =		\
+	    YYRHSLOC (Rhs, 0).last_line;				\
+	  (Current).first_column = (Current).last_column =		\
+	    YYRHSLOC (Rhs, 0).last_column;				\
+	}								\
+    while (YYID (0))
+#endif
+
+
+/* This macro is provided for backward compatibility. */
+
+#ifndef YY_LOCATION_PRINT
+# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
 #endif
 
+
 /* YYLEX -- calling `yylex' with the right arguments.  */
 
 #ifdef YYLEX_PARAM
@@ -958,43 +1119,100 @@ while (0)
 do {						\
   if (yydebug)					\
     YYFPRINTF Args;				\
-} while (0)
+} while (YYID (0))
 
-# define YYDSYMPRINT(Args)			\
-do {						\
-  if (yydebug)					\
-    yysymprint Args;				\
-} while (0)
+# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
+do {									  \
+  if (yydebug)								  \
+    {									  \
+      YYFPRINTF (stderr, "%s ", Title);					  \
+      yy_symbol_print (stderr,						  \
+		  Type, Value); \
+      YYFPRINTF (stderr, "\n");						  \
+    }									  \
+} while (YYID (0))
 
-# define YYDSYMPRINTF(Title, Token, Value, Location)		\
-do {								\
-  if (yydebug)							\
-    {								\
-      YYFPRINTF (stderr, "%s ", Title);				\
-      yysymprint (stderr, 					\
-                  Token, Value);	\
-      YYFPRINTF (stderr, "\n");					\
-    }								\
-} while (0)
+
+/*--------------------------------.
+| Print this symbol on YYOUTPUT.  |
+`--------------------------------*/
+
+/*ARGSUSED*/
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+static void
+yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
+#else
+static void
+yy_symbol_value_print (yyoutput, yytype, yyvaluep)
+    FILE *yyoutput;
+    int yytype;
+    YYSTYPE const * const yyvaluep;
+#endif
+{
+  if (!yyvaluep)
+    return;
+# ifdef YYPRINT
+  if (yytype < YYNTOKENS)
+    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
+# else
+  YYUSE (yyoutput);
+# endif
+  switch (yytype)
+    {
+      default:
+	break;
+    }
+}
+
+
+/*--------------------------------.
+| Print this symbol on YYOUTPUT.  |
+`--------------------------------*/
+
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+static void
+yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
+#else
+static void
+yy_symbol_print (yyoutput, yytype, yyvaluep)
+    FILE *yyoutput;
+    int yytype;
+    YYSTYPE const * const yyvaluep;
+#endif
+{
+  if (yytype < YYNTOKENS)
+    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
+  else
+    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);
+
+  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
+  YYFPRINTF (yyoutput, ")");
+}
 
 /*------------------------------------------------------------------.
 | yy_stack_print -- Print the state stack from its BOTTOM up to its |
 | TOP (included).                                                   |
 `------------------------------------------------------------------*/
 
-#if defined (__STDC__) || defined (__cplusplus)
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 static void
-yy_stack_print (short int *bottom, short int *top)
+yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
 #else
 static void
-yy_stack_print (bottom, top)
-    short int *bottom;
-    short int *top;
+yy_stack_print (yybottom, yytop)
+    yytype_int16 *yybottom;
+    yytype_int16 *yytop;
 #endif
 {
   YYFPRINTF (stderr, "Stack now");
-  for (/* Nothing. */; bottom <= top; ++bottom)
-    YYFPRINTF (stderr, " %d", *bottom);
+  for (; yybottom <= yytop; yybottom++)
+    {
+      int yybot = *yybottom;
+      YYFPRINTF (stderr, " %d", yybot);
+    }
   YYFPRINTF (stderr, "\n");
 }
 
@@ -1002,45 +1220,52 @@ yy_stack_print (bottom, top)
 do {								\
   if (yydebug)							\
     yy_stack_print ((Bottom), (Top));				\
-} while (0)
+} while (YYID (0))
 
 
 /*------------------------------------------------.
 | Report that the YYRULE is going to be reduced.  |
 `------------------------------------------------*/
 
-#if defined (__STDC__) || defined (__cplusplus)
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 static void
-yy_reduce_print (int yyrule)
+yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
 #else
 static void
-yy_reduce_print (yyrule)
+yy_reduce_print (yyvsp, yyrule)
+    YYSTYPE *yyvsp;
     int yyrule;
 #endif
 {
+  int yynrhs = yyr2[yyrule];
   int yyi;
-  unsigned int yylno = yyrline[yyrule];
-  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
-             yyrule - 1, yylno);
-  /* Print the symbols being reduced, and their result.  */
-  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
-    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
-  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
+  unsigned long int yylno = yyrline[yyrule];
+  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
+	     yyrule - 1, yylno);
+  /* The symbols being reduced.  */
+  for (yyi = 0; yyi < yynrhs; yyi++)
+    {
+      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
+      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
+		       &(yyvsp[(yyi + 1) - (yynrhs)])
+		       		       );
+      YYFPRINTF (stderr, "\n");
+    }
 }
 
 # define YY_REDUCE_PRINT(Rule)		\
 do {					\
   if (yydebug)				\
-    yy_reduce_print (Rule);		\
-} while (0)
+    yy_reduce_print (yyvsp, Rule); \
+} while (YYID (0))
 
 /* Nonzero means print parse trace.  It is left uninitialized so that
    multiple parsers can coexist.  */
 int yydebug;
 #else /* !YYDEBUG */
 # define YYDPRINTF(Args)
-# define YYDSYMPRINT(Args)
-# define YYDSYMPRINTF(Title, Token, Value, Location)
+# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
 # define YY_STACK_PRINT(Bottom, Top)
 # define YY_REDUCE_PRINT(Rule)
 #endif /* !YYDEBUG */
@@ -1055,61 +1280,58 @@ int yydebug;
    if the built-in stack extension method is used).
 
    Do not make this value too large; the results are undefined if
-   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
+   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
    evaluated with infinite-precision integer arithmetic.  */
 
-#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
-# undef YYMAXDEPTH
-#endif
-
 #ifndef YYMAXDEPTH
 # define YYMAXDEPTH 10000
 #endif
 
-
 
 #if YYERROR_VERBOSE
 
 # ifndef yystrlen
-#  if defined (__GLIBC__) && defined (_STRING_H)
+#  if defined __GLIBC__ && defined _STRING_H
 #   define yystrlen strlen
 #  else
 /* Return the length of YYSTR.  */
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 static YYSIZE_T
-#   if defined (__STDC__) || defined (__cplusplus)
 yystrlen (const char *yystr)
-#   else
+#else
+static YYSIZE_T
 yystrlen (yystr)
-     const char *yystr;
-#   endif
+    const char *yystr;
+#endif
 {
-  register const char *yys = yystr;
-
-  while (*yys++ != '\0')
+  YYSIZE_T yylen;
+  for (yylen = 0; yystr[yylen]; yylen++)
     continue;
-
-  return yys - yystr - 1;
+  return yylen;
 }
 #  endif
 # endif
 
 # ifndef yystpcpy
-#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
+#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
 #   define yystpcpy stpcpy
 #  else
 /* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
    YYDEST.  */
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 static char *
-#   if defined (__STDC__) || defined (__cplusplus)
 yystpcpy (char *yydest, const char *yysrc)
-#   else
+#else
+static char *
 yystpcpy (yydest, yysrc)
-     char *yydest;
-     const char *yysrc;
-#   endif
+    char *yydest;
+    const char *yysrc;
+#endif
 {
-  register char *yyd = yydest;
-  register const char *yys = yysrc;
+  char *yyd = yydest;
+  const char *yys = yysrc;
 
   while ((*yyd++ = *yys++) != '\0')
     continue;
@@ -1119,84 +1341,232 @@ yystpcpy (yydest, yysrc)
 #  endif
 # endif
 
-#endif /* !YYERROR_VERBOSE */
+# ifndef yytnamerr
+/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
+   quotes and backslashes, so that it's suitable for yyerror.  The
+   heuristic is that double-quoting is unnecessary unless the string
+   contains an apostrophe, a comma, or backslash (other than
+   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
+   null, do not copy; instead, return the length of what the result
+   would have been.  */
+static YYSIZE_T
+yytnamerr (char *yyres, const char *yystr)
+{
+  if (*yystr == '"')
+    {
+      YYSIZE_T yyn = 0;
+      char const *yyp = yystr;
+
+      for (;;)
+	switch (*++yyp)
+	  {
+	  case '\'':
+	  case ',':
+	    goto do_not_strip_quotes;
+
+	  case '\\':
+	    if (*++yyp != '\\')
+	      goto do_not_strip_quotes;
+	    /* Fall through.  */
+	  default:
+	    if (yyres)
+	      yyres[yyn] = *yyp;
+	    yyn++;
+	    break;
+
+	  case '"':
+	    if (yyres)
+	      yyres[yyn] = '\0';
+	    return yyn;
+	  }
+    do_not_strip_quotes: ;
+    }
 
-
+  if (! yyres)
+    return yystrlen (yystr);
 
-#if YYDEBUG
-/*--------------------------------.
-| Print this symbol on YYOUTPUT.  |
-`--------------------------------*/
+  return yystpcpy (yyres, yystr) - yyres;
+}
+# endif
 
-#if defined (__STDC__) || defined (__cplusplus)
-static void
-yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
-#else
-static void
-yysymprint (yyoutput, yytype, yyvaluep)
-    FILE *yyoutput;
-    int yytype;
-    YYSTYPE *yyvaluep;
-#endif
+/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
+   about the unexpected token YYTOKEN for the state stack whose top is
+   YYSSP.
+
+   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
+   not large enough to hold the message.  In that case, also set
+   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
+   required number of bytes is too large to store.  */
+static int
+yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
+                yytype_int16 *yyssp, int yytoken)
 {
-  /* Pacify ``unused variable'' warnings.  */
-  (void) yyvaluep;
+  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
+  YYSIZE_T yysize = yysize0;
+  YYSIZE_T yysize1;
+  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
+  /* Internationalized format string. */
+  const char *yyformat = 0;
+  /* Arguments of yyformat. */
+  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
+  /* Number of reported tokens (one for the "unexpected", one per
+     "expected"). */
+  int yycount = 0;
+
+  /* There are many possibilities here to consider:
+     - Assume YYFAIL is not used.  It's too flawed to consider.  See
+       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
+       for details.  YYERROR is fine as it does not invoke this
+       function.
+     - If this state is a consistent state with a default action, then
+       the only way this function was invoked is if the default action
+       is an error action.  In that case, don't check for expected
+       tokens because there are none.
+     - The only way there can be no lookahead present (in yychar) is if
+       this state is a consistent state with a default action.  Thus,
+       detecting the absence of a lookahead is sufficient to determine
+       that there is no unexpected or expected token to report.  In that
+       case, just report a simple "syntax error".
+     - Don't assume there isn't a lookahead just because this state is a
+       consistent state with a default action.  There might have been a
+       previous inconsistent state, consistent state with a non-default
+       action, or user semantic action that manipulated yychar.
+     - Of course, the expected token list depends on states to have
+       correct lookahead information, and it depends on the parser not
+       to perform extra reductions after fetching a lookahead from the
+       scanner and before detecting a syntax error.  Thus, state merging
+       (from LALR or IELR) and default reductions corrupt the expected
+       token list.  However, the list is correct for canonical LR with
+       one exception: it will still contain any token that will not be
+       accepted due to an error action in a later state.
+  */
+  if (yytoken != YYEMPTY)
+    {
+      int yyn = yypact[*yyssp];
+      yyarg[yycount++] = yytname[yytoken];
+      if (!yypact_value_is_default (yyn))
+        {
+          /* Start YYX at -YYN if negative to avoid negative indexes in
+             YYCHECK.  In other words, skip the first -YYN actions for
+             this state because they are default actions.  */
+          int yyxbegin = yyn < 0 ? -yyn : 0;
+          /* Stay within bounds of both yycheck and yytname.  */
+          int yychecklim = YYLAST - yyn + 1;
+          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
+          int yyx;
+
+          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
+            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
+                && !yytable_value_is_error (yytable[yyx + yyn]))
+              {
+                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
+                  {
+                    yycount = 1;
+                    yysize = yysize0;
+                    break;
+                  }
+                yyarg[yycount++] = yytname[yyx];
+                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
+                if (! (yysize <= yysize1
+                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
+                  return 2;
+                yysize = yysize1;
+              }
+        }
+    }
 
-  if (yytype < YYNTOKENS)
-    {
-      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
-# ifdef YYPRINT
-      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
-# endif
+  switch (yycount)
+    {
+# define YYCASE_(N, S)                      \
+      case N:                               \
+        yyformat = S;                       \
+      break
+      YYCASE_(0, YY_("syntax error"));
+      YYCASE_(1, YY_("syntax error, unexpected %s"));
+      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
+      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
+      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
+      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
+# undef YYCASE_
     }
-  else
-    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);
 
-  switch (yytype)
+  yysize1 = yysize + yystrlen (yyformat);
+  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
+    return 2;
+  yysize = yysize1;
+
+  if (*yymsg_alloc < yysize)
     {
-      default:
-        break;
+      *yymsg_alloc = 2 * yysize;
+      if (! (yysize <= *yymsg_alloc
+             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
+        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
+      return 1;
     }
-  YYFPRINTF (yyoutput, ")");
+
+  /* Avoid sprintf, as that infringes on the user's name space.
+     Don't have undefined behavior even if the translation
+     produced a string with the wrong number of "%s"s.  */
+  {
+    char *yyp = *yymsg;
+    int yyi = 0;
+    while ((*yyp = *yyformat) != '\0')
+      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
+        {
+          yyp += yytnamerr (yyp, yyarg[yyi++]);
+          yyformat += 2;
+        }
+      else
+        {
+          yyp++;
+          yyformat++;
+        }
+  }
+  return 0;
 }
+#endif /* YYERROR_VERBOSE */
 
-#endif /* ! YYDEBUG */
 /*-----------------------------------------------.
 | Release the memory associated to this symbol.  |
 `-----------------------------------------------*/
 
-#if defined (__STDC__) || defined (__cplusplus)
+/*ARGSUSED*/
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 static void
-yydestruct (int yytype, YYSTYPE *yyvaluep)
+yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
 #else
 static void
-yydestruct (yytype, yyvaluep)
+yydestruct (yymsg, yytype, yyvaluep)
+    const char *yymsg;
     int yytype;
     YYSTYPE *yyvaluep;
 #endif
 {
-  /* Pacify ``unused variable'' warnings.  */
-  (void) yyvaluep;
+  YYUSE (yyvaluep);
+
+  if (!yymsg)
+    yymsg = "Deleting";
+  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);
 
   switch (yytype)
     {
 
       default:
-        break;
+	break;
     }
 }
-
 
-/* Prevent warnings from -Wmissing-prototypes.  */
 
+/* Prevent warnings from -Wmissing-prototypes.  */
 #ifdef YYPARSE_PARAM
-# if defined (__STDC__) || defined (__cplusplus)
+#if defined __STDC__ || defined __cplusplus
 int yyparse (void *YYPARSE_PARAM);
-# else
+#else
 int yyparse ();
-# endif
+#endif
 #else /* ! YYPARSE_PARAM */
-#if defined (__STDC__) || defined (__cplusplus)
+#if defined __STDC__ || defined __cplusplus
 int yyparse (void);
 #else
 int yyparse ();
@@ -1204,7 +1574,6 @@ int yyparse ();
 #endif /* ! YYPARSE_PARAM */
 
 
-
 /* The lookahead symbol.  */
 int yychar;
 
@@ -1215,20 +1584,23 @@ YYSTYPE yylval;
 int yynerrs;
 
 
-
 /*----------.
 | yyparse.  |
 `----------*/
 
 #ifdef YYPARSE_PARAM
-# if defined (__STDC__) || defined (__cplusplus)
-int yyparse (void *YYPARSE_PARAM)
-# else
-int yyparse (YYPARSE_PARAM)
-  void *YYPARSE_PARAM;
-# endif
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
+int
+yyparse (void *YYPARSE_PARAM)
+#else
+int
+yyparse (YYPARSE_PARAM)
+    void *YYPARSE_PARAM;
+#endif
 #else /* ! YYPARSE_PARAM */
-#if defined (__STDC__) || defined (__cplusplus)
+#if (defined __STDC__ || defined __C99__FUNC__ \
+     || defined __cplusplus || defined _MSC_VER)
 int
 yyparse (void)
 #else
@@ -1238,64 +1610,69 @@ yyparse ()
 #endif
 #endif
 {
-  
-  register int yystate;
-  register int yyn;
-  int yyresult;
-  /* Number of tokens to shift before error messages enabled.  */
-  int yyerrstatus;
-  /* Lookahead token as an internal (translated) token number.  */
-  int yytoken = 0;
+    int yystate;
+    /* Number of tokens to shift before error messages enabled.  */
+    int yyerrstatus;
 
-  /* Three stacks and their tools:
-     `yyss': related to states,
-     `yyvs': related to semantic values,
-     `yyls': related to locations.
+    /* The stacks and their tools:
+       `yyss': related to states.
+       `yyvs': related to semantic values.
 
-     Refer to the stacks thru separate pointers, to allow yyoverflow
-     to reallocate them elsewhere.  */
+       Refer to the stacks thru separate pointers, to allow yyoverflow
+       to reallocate them elsewhere.  */
 
-  /* The state stack.  */
-  short int yyssa[YYINITDEPTH];
-  short int *yyss = yyssa;
-  register short int *yyssp;
+    /* The state stack.  */
+    yytype_int16 yyssa[YYINITDEPTH];
+    yytype_int16 *yyss;
+    yytype_int16 *yyssp;
 
-  /* The semantic value stack.  */
-  YYSTYPE yyvsa[YYINITDEPTH];
-  YYSTYPE *yyvs = yyvsa;
-  register YYSTYPE *yyvsp;
+    /* The semantic value stack.  */
+    YYSTYPE yyvsa[YYINITDEPTH];
+    YYSTYPE *yyvs;
+    YYSTYPE *yyvsp;
 
+    YYSIZE_T yystacksize;
 
-
-#define YYPOPSTACK   (yyvsp--, yyssp--)
-
-  YYSIZE_T yystacksize = YYINITDEPTH;
-
+  int yyn;
+  int yyresult;
+  /* Lookahead token as an internal (translated) token number.  */
+  int yytoken;
   /* The variables used to return semantic value and location from the
      action routines.  */
   YYSTYPE yyval;
 
+#if YYERROR_VERBOSE
+  /* Buffer for error messages, and its allocated size.  */
+  char yymsgbuf[128];
+  char *yymsg = yymsgbuf;
+  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
+#endif
+
+#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))
 
-  /* When reducing, the number of symbols on the RHS of the reduced
-     rule.  */
-  int yylen;
+  /* The number of symbols on the RHS of the reduced rule.
+     Keep to zero when no symbol should be popped.  */
+  int yylen = 0;
+
+  yytoken = 0;
+  yyss = yyssa;
+  yyvs = yyvsa;
+  yystacksize = YYINITDEPTH;
 
   YYDPRINTF ((stderr, "Starting parse\n"));
 
   yystate = 0;
   yyerrstatus = 0;
   yynerrs = 0;
-  yychar = YYEMPTY;		/* Cause a token to be read.  */
+  yychar = YYEMPTY; /* Cause a token to be read.  */
 
   /* Initialize stack pointers.
      Waste one element of value and location stack
      so that they stay on the same level as the state stack.
      The wasted elements are never initialized.  */
-
   yyssp = yyss;
   yyvsp = yyvs;
 
-
   goto yysetstate;
 
 /*------------------------------------------------------------.
@@ -1303,8 +1680,7 @@ yyparse ()
 `------------------------------------------------------------*/
  yynewstate:
   /* In all cases, when you get here, the value and location stacks
-     have just been pushed. so pushing a state here evens the stacks.
-     */
+     have just been pushed.  So pushing a state here evens the stacks.  */
   yyssp++;
 
  yysetstate:
@@ -1317,21 +1693,19 @@ yyparse ()
 
 #ifdef yyoverflow
       {
-	/* Give user a chance to reallocate the stack. Use copies of
+	/* Give user a chance to reallocate the stack.  Use copies of
 	   these so that the &'s don't force the real ones into
 	   memory.  */
 	YYSTYPE *yyvs1 = yyvs;
-	short int *yyss1 = yyss;
-
+	yytype_int16 *yyss1 = yyss;
 
 	/* Each stack pointer address is followed by the size of the
 	   data in use in that stack, in bytes.  This used to be a
 	   conditional around just the two extra args, but that might
 	   be undefined if yyoverflow is a macro.  */
-	yyoverflow ("parser stack overflow",
+	yyoverflow (YY_("memory exhausted"),
 		    &yyss1, yysize * sizeof (*yyssp),
 		    &yyvs1, yysize * sizeof (*yyvsp),
-
 		    &yystacksize);
 
 	yyss = yyss1;
@@ -1339,24 +1713,23 @@ yyparse ()
       }
 #else /* no yyoverflow */
 # ifndef YYSTACK_RELOCATE
-      goto yyoverflowlab;
+      goto yyexhaustedlab;
 # else
       /* Extend the stack our own way.  */
       if (YYMAXDEPTH <= yystacksize)
-	goto yyoverflowlab;
+	goto yyexhaustedlab;
       yystacksize *= 2;
       if (YYMAXDEPTH < yystacksize)
 	yystacksize = YYMAXDEPTH;
 
       {
-	short int *yyss1 = yyss;
+	yytype_int16 *yyss1 = yyss;
 	union yyalloc *yyptr =
 	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
 	if (! yyptr)
-	  goto yyoverflowlab;
-	YYSTACK_RELOCATE (yyss);
-	YYSTACK_RELOCATE (yyvs);
-
+	  goto yyexhaustedlab;
+	YYSTACK_RELOCATE (yyss_alloc, yyss);
+	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
 #  undef YYSTACK_RELOCATE
 	if (yyss1 != yyssa)
 	  YYSTACK_FREE (yyss1);
@@ -1367,7 +1740,6 @@ yyparse ()
       yyssp = yyss + yysize - 1;
       yyvsp = yyvs + yysize - 1;
 
-
       YYDPRINTF ((stderr, "Stack size increased to %lu\n",
 		  (unsigned long int) yystacksize));
 
@@ -1377,6 +1749,9 @@ yyparse ()
 
   YYDPRINTF ((stderr, "Entering state %d\n", yystate));
 
+  if (yystate == YYFINAL)
+    YYACCEPT;
+
   goto yybackup;
 
 /*-----------.
@@ -1384,14 +1759,12 @@ yyparse ()
 `-----------*/
 yybackup:
 
-/* Do appropriate processing given the current state.  */
-/* Read a lookahead token if we need one and don't already have one.  */
-/* yyresume: */
+  /* Do appropriate processing given the current state.  Read a
+     lookahead token if we need one and don't already have one.  */
 
   /* First try to decide what to do without reference to lookahead token.  */
-
   yyn = yypact[yystate];
-  if (yyn == YYPACT_NINF)
+  if (yypact_value_is_default (yyn))
     goto yydefault;
 
   /* Not known => get a lookahead token if don't already have one.  */
@@ -1411,7 +1784,7 @@ yybackup:
   else
     {
       yytoken = YYTRANSLATE (yychar);
-      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
+      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
     }
 
   /* If the proper action on seeing token YYTOKEN is to reduce or to
@@ -1422,31 +1795,26 @@ yybackup:
   yyn = yytable[yyn];
   if (yyn <= 0)
     {
-      if (yyn == 0 || yyn == YYTABLE_NINF)
-	goto yyerrlab;
+      if (yytable_value_is_error (yyn))
+        goto yyerrlab;
       yyn = -yyn;
       goto yyreduce;
     }
 
-  if (yyn == YYFINAL)
-    YYACCEPT;
-
-  /* Shift the lookahead token.  */
-  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));
-
-  /* Discard the token being shifted unless it is eof.  */
-  if (yychar != YYEOF)
-    yychar = YYEMPTY;
-
-  *++yyvsp = yylval;
-
-
   /* Count tokens shifted since error; after three, turn off error
      status.  */
   if (yyerrstatus)
     yyerrstatus--;
 
+  /* Shift the lookahead token.  */
+  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
+
+  /* Discard the shifted token.  */
+  yychar = YYEMPTY;
+
   yystate = yyn;
+  *++yyvsp = yylval;
+
   goto yynewstate;
 
 
@@ -1482,58 +1850,72 @@ yyreduce:
   switch (yyn)
     {
         case 2:
+
+/* Line 1806 of yacc.c  */
 #line 127 "parser.y"
     {
 }
     break;
 
   case 5:
+
+/* Line 1806 of yacc.c  */
 #line 136 "parser.y"
     {
 	if (abort_asap) {YYABORT;}
 	if( pass1 ) {
-		yyvsp[-2].sym->type = LABEL;
-		yyvsp[-2].sym->value = lc;
+		(yyvsp[(1) - (3)]).sym->type = LABEL;
+		(yyvsp[(1) - (3)]).sym->value = lc;
 	}
-	inclc(yyvsp[0].value);
+	inclc((yyvsp[(3) - (3)]).value);
 	bytecount = 0;
 }
     break;
 
   case 6:
+
+/* Line 1806 of yacc.c  */
 #line 145 "parser.y"
-    { inclc(yyvsp[0].value); bytecount = 0; }
+    { inclc((yyvsp[(1) - (1)]).value); bytecount = 0; }
     break;
 
   case 7:
+
+/* Line 1806 of yacc.c  */
 #line 148 "parser.y"
     {
-						yyval.value = yyvsp[-1].value;
+						(yyval).value = (yyvsp[(1) - (2)]).value;
 						if( dashl && pass2 )
-							dumplist(yyvsp[0].str,1);
+							dumplist((yyvsp[(2) - (2)]).str,1);
 					}
     break;
 
   case 8:
+
+/* Line 1806 of yacc.c  */
 #line 153 "parser.y"
     {
-						yyval.value = yyvsp[-1].value;
+						(yyval).value = (yyvsp[(1) - (2)]).value;
 						if( dashl && pass2 )
-							dumplist(yyvsp[0].str,1);
+							dumplist((yyvsp[(2) - (2)]).str,1);
 
 					}
     break;
 
   case 9:
+
+/* Line 1806 of yacc.c  */
 #line 159 "parser.y"
     {
-						yyval.value = 0;
+						(yyval).value = 0;
 						if( dashl && pass2 )
-							dumplist(yyvsp[0].str,0);
+							dumplist((yyvsp[(1) - (1)]).str,0);
 					}
     break;
 
   case 10:
+
+/* Line 1806 of yacc.c  */
 #line 164 "parser.y"
     {
 						seek_eol();
@@ -1541,987 +1923,1249 @@ yyreduce:
     break;
 
   case 11:
+
+/* Line 1806 of yacc.c  */
 #line 167 "parser.y"
     {
-						yyval.value = 0;
+						(yyval).value = 0;
 						if( dashl && pass2 )
-							dumplist(yyvsp[-2].str,0);
+							dumplist((yyvsp[(1) - (3)]).str,0);
 					}
     break;
 
   case 12:
+
+/* Line 1806 of yacc.c  */
 #line 184 "parser.y"
     {
-	lc = yyvsp[0].val.v;
+	lc = (yyvsp[(3) - (3)]).val.v;
 	if( pass2 ) emitaddr(lc);
 	bytecount = 0;
-	yyval.value = 0;
+	(yyval).value = 0;
 }
     break;
 
   case 13:
+
+/* Line 1806 of yacc.c  */
 #line 190 "parser.y"
-    { yyval.value = yyvsp[0].value; }
+    { (yyval).value = (yyvsp[(3) - (3)]).value; }
     break;
 
   case 14:
+
+/* Line 1806 of yacc.c  */
 #line 191 "parser.y"
-    { yyval.value = yyvsp[0].value; }
+    { (yyval).value = (yyvsp[(3) - (3)]).value; }
     break;
 
   case 15:
+
+/* Line 1806 of yacc.c  */
 #line 192 "parser.y"
-    { yyval.value = yyvsp[0].val.v;
+    { (yyval).value = (yyvsp[(3) - (3)]).val.v;
 					  if( pass2 )
-						emitaddr(lc+yyval.value); }
+						emitaddr(lc+(yyval).value); }
     break;
 
   case 16:
+
+/* Line 1806 of yacc.c  */
 #line 196 "parser.y"
     {
-	if( yyvsp[0].val.d == 0 )
+	if( (yyvsp[(5) - (5)]).val.d == 0 )
 		warn("Expression is undefined in pass 1");
-	yyvsp[-2].sym->type = LABEL;
-	yyvsp[-2].sym->value = yyvsp[0].val.v;
-	yyval.value = 0;
+	(yyvsp[(3) - (5)]).sym->type = LABEL;
+	(yyvsp[(3) - (5)]).sym->value = (yyvsp[(5) - (5)]).val.v;
+	(yyval).value = 0;
 }
     break;
 
   case 17:
+
+/* Line 1806 of yacc.c  */
 #line 205 "parser.y"
     {
-	yyvsp[-2].sym->type = LABEL;
-	yyvsp[-2].sym->value = yyvsp[0].value;
-	yyval.value = 0;
+	(yyvsp[(3) - (5)]).sym->type = LABEL;
+	(yyvsp[(3) - (5)]).sym->value = (yyvsp[(5) - (5)]).value;
+	(yyval).value = 0;
 }
     break;
 
   case 18:
+
+/* Line 1806 of yacc.c  */
 #line 210 "parser.y"
-    { yyval.value = 0; }
+    { (yyval).value = 0; }
     break;
 
   case 19:
+
+/* Line 1806 of yacc.c  */
 #line 214 "parser.y"
     {
-		if( yyvsp[0].val.d == 0 )
+		if( (yyvsp[(1) - (1)]).val.d == 0 )
 			warn("Expression is undefined in pass 1");
-		if( !(isbit16(yyvsp[0].val.v)) )
+		if( !(isbit16((yyvsp[(1) - (1)]).val.v)) )
 			warn("Value greater than 16-bits");
-		yyval.value = yyvsp[0].val.v;
+		(yyval).value = (yyvsp[(1) - (1)]).val.v;
 }
     break;
 
   case 20:
+
+/* Line 1806 of yacc.c  */
 #line 224 "parser.y"
     {
-	if( !isbit8(yyvsp[-1].value) )
+	if( !isbit8((yyvsp[(1) - (2)]).value) )
 		warn("Bit address exceeds 8-bits");
-	if( isbmram(yyvsp[-1].value) )
-		yyval.value = (yyvsp[-1].value-0x20)*8+ yyvsp[0].value;
-	else if( isbmsfr(yyvsp[-1].value) )
-		yyval.value = yyvsp[-1].value + yyvsp[0].value;
+	if( isbmram((yyvsp[(1) - (2)]).value) )
+		(yyval).value = ((yyvsp[(1) - (2)]).value-0x20)*8+ (yyvsp[(2) - (2)]).value;
+	else if( isbmsfr((yyvsp[(1) - (2)]).value) )
+		(yyval).value = (yyvsp[(1) - (2)]).value + (yyvsp[(2) - (2)]).value;
 	else
 		warn("Invalid bit addressable RAM location");
 }
     break;
 
   case 21:
+
+/* Line 1806 of yacc.c  */
 #line 237 "parser.y"
     {
-	if( yyvsp[0].sym->type == UNDEF )
-		warn("Symbol %s must be defined in pass 1",yyvsp[0].sym->name);
-	yyval.value = yyvsp[0].sym->value;
+	if( (yyvsp[(1) - (1)]).sym->type == UNDEF )
+		warn("Symbol %s must be defined in pass 1",(yyvsp[(1) - (1)]).sym->name);
+	(yyval).value = (yyvsp[(1) - (1)]).sym->value;
 }
     break;
 
   case 22:
+
+/* Line 1806 of yacc.c  */
 #line 242 "parser.y"
-    { yyval.value = yyvsp[0].value; }
+    { (yyval).value = (yyvsp[(1) - (1)]).value; }
     break;
 
   case 23:
+
+/* Line 1806 of yacc.c  */
 #line 247 "parser.y"
     {
-	if( yyvsp[0].sym->type != UNDEF && pass1)
-		warn("Attempt to redefine symbol: %s",yyvsp[0].sym->name);
-	yyval.sym = yyvsp[0].sym;
+	if( (yyvsp[(1) - (1)]).sym->type != UNDEF && pass1)
+		warn("Attempt to redefine symbol: %s",(yyvsp[(1) - (1)]).sym->name);
+	(yyval).sym = (yyvsp[(1) - (1)]).sym;
 }
     break;
 
   case 24:
+
+/* Line 1806 of yacc.c  */
 #line 255 "parser.y"
     {
-	if( pass2 ) genbyte(yyvsp[0].value);
-	yyval.value = yyvsp[-2].value + 1;
+	if( pass2 ) genbyte((yyvsp[(3) - (3)]).value);
+	(yyval).value = (yyvsp[(1) - (3)]).value + 1;
 }
     break;
 
   case 25:
+
+/* Line 1806 of yacc.c  */
 #line 260 "parser.y"
     {
 	if( pass1 )
-		yyval.value = yyvsp[-2].value + yyvsp[0].value;
+		(yyval).value = (yyvsp[(1) - (3)]).value + (yyvsp[(3) - (3)]).value;
 	else {
-		yyval.value = yyvsp[-2].value + strlen(yyvsp[0].str);
-		genstr(yyvsp[0].str);
+		(yyval).value = (yyvsp[(1) - (3)]).value + strlen((yyvsp[(3) - (3)]).str);
+		genstr((yyvsp[(3) - (3)]).str);
 		
-		free(yyvsp[0].str);
+		free((yyvsp[(3) - (3)]).str);
 	}
 }
     break;
 
   case 26:
+
+/* Line 1806 of yacc.c  */
 #line 271 "parser.y"
     {
-	if( pass2 ) genbyte(yyvsp[0].value);
-	yyval.value = 1;
+	if( pass2 ) genbyte((yyvsp[(1) - (1)]).value);
+	(yyval).value = 1;
 }
     break;
 
   case 27:
+
+/* Line 1806 of yacc.c  */
 #line 276 "parser.y"
     {
 	if( pass1 )
-		yyval.value = yyvsp[0].value;
+		(yyval).value = (yyvsp[(1) - (1)]).value;
 	else {
-		yyval.value = strlen(yyvsp[0].str);
-		genstr(yyvsp[0].str);
-		free(yyvsp[0].str);
+		(yyval).value = strlen((yyvsp[(1) - (1)]).str);
+		genstr((yyvsp[(1) - (1)]).str);
+		free((yyvsp[(1) - (1)]).str);
 	}
 }
     break;
 
   case 28:
+
+/* Line 1806 of yacc.c  */
 #line 288 "parser.y"
     {
-	if( pass2 ) genword(yyvsp[0].value);
-	yyval.value = yyvsp[-2].value + 2;
+	if( pass2 ) genword((yyvsp[(3) - (3)]).value);
+	(yyval).value = (yyvsp[(1) - (3)]).value + 2;
 }
     break;
 
   case 29:
+
+/* Line 1806 of yacc.c  */
 #line 293 "parser.y"
     {
-	if( pass2 ) genword(yyvsp[0].value);
-	yyval.value = 2;
+	if( pass2 ) genword((yyvsp[(1) - (1)]).value);
+	(yyval).value = 2;
 }
     break;
 
   case 30:
+
+/* Line 1806 of yacc.c  */
 #line 306 "parser.y"
-    { yyval.val.v = lc;
-					  yyval.val.d = 1; }
+    { (yyval).val.v = lc;
+					  (yyval).val.d = 1; }
     break;
 
   case 31:
+
+/* Line 1806 of yacc.c  */
 #line 309 "parser.y"
-    { yyval.val.v = yyvsp[-1].val.v;
-					  yyval.val.d = yyvsp[-1].val.d; }
+    { (yyval).val.v = (yyvsp[(2) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(2) - (3)]).val.d; }
     break;
 
   case 32:
+
+/* Line 1806 of yacc.c  */
 #line 312 "parser.y"
-    { yyval.val.v = -yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[0].val.d;  }
+    { (yyval).val.v = -(yyvsp[(2) - (2)]).val.v;
+					  (yyval).val.d = (yyvsp[(2) - (2)]).val.d;  }
     break;
 
   case 33:
+
+/* Line 1806 of yacc.c  */
 #line 315 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v | yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v | (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 34:
+
+/* Line 1806 of yacc.c  */
 #line 318 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v & yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v & (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 35:
+
+/* Line 1806 of yacc.c  */
 #line 321 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v * yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v * (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 36:
+
+/* Line 1806 of yacc.c  */
 #line 324 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v / yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v / (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 37:
+
+/* Line 1806 of yacc.c  */
 #line 327 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v % yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v % (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 38:
+
+/* Line 1806 of yacc.c  */
 #line 330 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v - yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v - (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 39:
+
+/* Line 1806 of yacc.c  */
 #line 333 "parser.y"
-    { yyval.val.v = yyvsp[-2].val.v + yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (3)]).val.v + (yyvsp[(3) - (3)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (3)]).val.d && (yyvsp[(3) - (3)]).val.d; }
     break;
 
   case 40:
+
+/* Line 1806 of yacc.c  */
 #line 336 "parser.y"
-    { yyval.val.v = yyvsp[-3].val.v >> yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-3].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (4)]).val.v >> (yyvsp[(4) - (4)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d; }
     break;
 
   case 41:
+
+/* Line 1806 of yacc.c  */
 #line 339 "parser.y"
-    { yyval.val.v = yyvsp[-3].val.v << yyvsp[0].val.v;
-					  yyval.val.d = yyvsp[-3].val.d && yyvsp[0].val.d; }
+    { (yyval).val.v = (yyvsp[(1) - (4)]).val.v << (yyvsp[(4) - (4)]).val.v;
+					  (yyval).val.d = (yyvsp[(1) - (4)]).val.d && (yyvsp[(4) - (4)]).val.d; }
     break;
 
   case 42:
+
+/* Line 1806 of yacc.c  */
 #line 342 "parser.y"
     {
 	if( pass1 ) {
-		yyval.val.v = yyvsp[0].sym->value;
-		yyval.val.d = (yyvsp[0].sym->type != UNDEF);
+		(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
+		(yyval).val.d = ((yyvsp[(1) - (1)]).sym->type != UNDEF);
 	}
 	else {
-		if( yyvsp[0].sym->type == UNDEF )
-			warn("Undefined symbol %s",yyvsp[0].sym->name);
-		yyval.val.v = yyvsp[0].sym->value;
-		yyval.val.d = 1;
+		if( (yyvsp[(1) - (1)]).sym->type == UNDEF )
+			warn("Undefined symbol %s",(yyvsp[(1) - (1)]).sym->name);
+		(yyval).val.v = (yyvsp[(1) - (1)]).sym->value;
+		(yyval).val.d = 1;
 	}
 }
     break;
 
   case 43:
+
+/* Line 1806 of yacc.c  */
 #line 354 "parser.y"
-    { yyval.val.v = yyvsp[0].val.v; yyval.val.d=1; }
+    { (yyval).val.v = (yyvsp[(1) - (1)]).val.v; (yyval).val.d=1; }
     break;
 
   case 44:
+
+/* Line 1806 of yacc.c  */
 #line 367 "parser.y"
-    { yyval.value = makeop(yyvsp[0].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); }
     break;
 
   case 45:
+
+/* Line 1806 of yacc.c  */
 #line 369 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 46:
+
+/* Line 1806 of yacc.c  */
 #line 371 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 47:
+
+/* Line 1806 of yacc.c  */
 #line 373 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 48:
+
+/* Line 1806 of yacc.c  */
 #line 375 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 49:
+
+/* Line 1806 of yacc.c  */
 #line 377 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 50:
+
+/* Line 1806 of yacc.c  */
 #line 379 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 51:
+
+/* Line 1806 of yacc.c  */
 #line 381 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); }
     break;
 
   case 52:
+
+/* Line 1806 of yacc.c  */
 #line 383 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 53:
+
+/* Line 1806 of yacc.c  */
 #line 385 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); }
     break;
 
   case 54:
+
+/* Line 1806 of yacc.c  */
 #line 387 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); }
     break;
 
   case 55:
+
+/* Line 1806 of yacc.c  */
 #line 389 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 56:
+
+/* Line 1806 of yacc.c  */
 #line 391 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); }
     break;
 
   case 57:
+
+/* Line 1806 of yacc.c  */
 #line 393 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); }
     break;
 
   case 58:
+
+/* Line 1806 of yacc.c  */
 #line 395 "parser.y"
-    { if( get_md(yyvsp[0].mode) == 3 )
+    { if( get_md((yyvsp[(2) - (2)]).mode) == 3 )
 					warn("Immediate mode is illegal");
-				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0);
+				  (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0);
 				}
     break;
 
   case 59:
+
+/* Line 1806 of yacc.c  */
 #line 400 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 60:
+
+/* Line 1806 of yacc.c  */
 #line 402 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,4); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,4); }
     break;
 
   case 61:
+
+/* Line 1806 of yacc.c  */
 #line 404 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 62:
+
+/* Line 1806 of yacc.c  */
 #line 406 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 63:
+
+/* Line 1806 of yacc.c  */
 #line 408 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 64:
+
+/* Line 1806 of yacc.c  */
 #line 410 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,0); }
     break;
 
   case 65:
+
+/* Line 1806 of yacc.c  */
 #line 412 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,0); }
     break;
 
   case 66:
+
+/* Line 1806 of yacc.c  */
 #line 414 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 67:
+
+/* Line 1806 of yacc.c  */
 #line 416 "parser.y"
-    { yyval.value = makeop(yyvsp[0].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); }
     break;
 
   case 68:
+
+/* Line 1806 of yacc.c  */
 #line 418 "parser.y"
-    { yyval.value = makeop(yyvsp[0].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (1)]).op,NULL,0); }
     break;
 
   case 69:
+
+/* Line 1806 of yacc.c  */
 #line 420 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 70:
+
+/* Line 1806 of yacc.c  */
 #line 422 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 71:
+
+/* Line 1806 of yacc.c  */
 #line 424 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 72:
+
+/* Line 1806 of yacc.c  */
 #line 426 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 73:
+
+/* Line 1806 of yacc.c  */
 #line 428 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,NULL,0); }
     break;
 
   case 74:
+
+/* Line 1806 of yacc.c  */
 #line 430 "parser.y"
-    { if( get_md(yyvsp[0].mode) != 2 )
+    { if( get_md((yyvsp[(2) - (2)]).mode) != 2 )
 					warn("Invalid addressing mode");
-				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,-2); }
+				  (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,-2); }
     break;
 
   case 75:
+
+/* Line 1806 of yacc.c  */
 #line 434 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 76:
+
+/* Line 1806 of yacc.c  */
 #line 436 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 77:
+
+/* Line 1806 of yacc.c  */
 #line 438 "parser.y"
-    { if( get_md(yyvsp[0].mode) == 0 )
+    { if( get_md((yyvsp[(2) - (2)]).mode) == 0 )
 					warn("Invalid addressing mode");
-				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,-1); }
+				  (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,-1); }
     break;
 
   case 78:
+
+/* Line 1806 of yacc.c  */
 #line 442 "parser.y"
     {
 				   struct mode tmp;
 					set_md(tmp,0);
 					set_ov(tmp,0);
 					set_sz(tmp,1);
-					set_b1(tmp,yyvsp[0].value);
-					yyval.value = makeop(yyvsp[-1].op,&tmp,0);
+					set_b1(tmp,(yyvsp[(2) - (2)]).value);
+					(yyval).value = makeop((yyvsp[(1) - (2)]).op,&tmp,0);
 				}
     break;
 
   case 79:
+
+/* Line 1806 of yacc.c  */
 #line 451 "parser.y"
     {
 				   struct mode tmp;
 					set_md(tmp,0);
 					set_ov(tmp,0);
 					set_sz(tmp,1);
-					set_b1(tmp,yyvsp[0].value);
-					yyval.value = makeop(yyvsp[-1].op,&tmp,0);
+					set_b1(tmp,(yyvsp[(2) - (2)]).value);
+					(yyval).value = makeop((yyvsp[(1) - (2)]).op,&tmp,0);
 				}
     break;
 
   case 80:
+
+/* Line 1806 of yacc.c  */
 #line 460 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 81:
+
+/* Line 1806 of yacc.c  */
 #line 462 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 82:
+
+/* Line 1806 of yacc.c  */
 #line 464 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 83:
+
+/* Line 1806 of yacc.c  */
 #line 466 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 84:
+
+/* Line 1806 of yacc.c  */
 #line 468 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 85:
+
+/* Line 1806 of yacc.c  */
 #line 470 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 86:
+
+/* Line 1806 of yacc.c  */
 #line 472 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 87:
+
+/* Line 1806 of yacc.c  */
 #line 474 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 88:
+
+/* Line 1806 of yacc.c  */
 #line 476 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 89:
+
+/* Line 1806 of yacc.c  */
 #line 478 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 90:
+
+/* Line 1806 of yacc.c  */
 #line 480 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 91:
+
+/* Line 1806 of yacc.c  */
 #line 482 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 92:
+
+/* Line 1806 of yacc.c  */
 #line 484 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,0); }
     break;
 
   case 93:
+
+/* Line 1806 of yacc.c  */
 #line 486 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,4); }
     break;
 
   case 94:
+
+/* Line 1806 of yacc.c  */
 #line 488 "parser.y"
-    { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
+    { (yyval).value = makeop((yyvsp[(1) - (2)]).op,&(yyvsp[(2) - (2)]).mode,6); }
     break;
 
   case 95:
+
+/* Line 1806 of yacc.c  */
 #line 492 "parser.y"
-    { yyval.value = makeop(yyvsp[-6].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,0); }
     break;
 
   case 96:
+
+/* Line 1806 of yacc.c  */
 #line 494 "parser.y"
-    { yyval.value = makeop(yyvsp[-6].op,NULL,0); }
+    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,0); }
     break;
 
   case 97:
+
+/* Line 1806 of yacc.c  */
 #line 496 "parser.y"
-    { yyval.value = makeop(yyvsp[-6].op,NULL,1); }
+    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,1); }
     break;
 
   case 98:
+
+/* Line 1806 of yacc.c  */
 #line 498 "parser.y"
-    { yyval.value = makeop(yyvsp[-6].op,NULL,1); }
+    { (yyval).value = makeop((yyvsp[(1) - (7)]).op,NULL,1); }
     break;
 
   case 99:
+
+/* Line 1806 of yacc.c  */
 #line 501 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,yyvsp[0].value); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,(yyvsp[(5) - (5)]).value); }
     break;
 
   case 100:
+
+/* Line 1806 of yacc.c  */
 #line 503 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,2); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,2); }
     break;
 
   case 101:
+
+/* Line 1806 of yacc.c  */
 #line 505 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,yyvsp[-2].value+3); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,(yyvsp[(3) - (5)]).value+3); }
     break;
 
   case 102:
+
+/* Line 1806 of yacc.c  */
 #line 507 "parser.y"
-    { yyval.value = makeop(yyvsp[-4].op,NULL,5); }
+    { (yyval).value = makeop((yyvsp[(1) - (5)]).op,NULL,5); }
     break;
 
   case 103:
+
+/* Line 1806 of yacc.c  */
 #line 519 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode, yyvsp[0].value);
-					set_sz(yyval.mode, 0);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode, (yyvsp[(3) - (3)]).value);
+					set_sz((yyval).mode, 0);
 				}
     break;
 
   case 104:
+
+/* Line 1806 of yacc.c  */
 #line 525 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 105:
+
+/* Line 1806 of yacc.c  */
 #line 532 "parser.y"
     {
-					set_md(yyval.mode,2);
-					set_ov(yyval.mode,yyvsp[0].value);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,2);
+					set_ov((yyval).mode,(yyvsp[(4) - (4)]).value);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 106:
+
+/* Line 1806 of yacc.c  */
 #line 538 "parser.y"
     {
-					set_md(yyval.mode,3);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,3);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 107:
+
+/* Line 1806 of yacc.c  */
 #line 547 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[-2].value);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
 				}
     break;
 
   case 108:
+
+/* Line 1806 of yacc.c  */
 #line 554 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-3].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(1) - (4)]).value);
+					set_b2((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 109:
+
+/* Line 1806 of yacc.c  */
 #line 564 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 110:
+
+/* Line 1806 of yacc.c  */
 #line 571 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 111:
+
+/* Line 1806 of yacc.c  */
 #line 578 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 112:
+
+/* Line 1806 of yacc.c  */
 #line 587 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
+					set_b2((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 113:
+
+/* Line 1806 of yacc.c  */
 #line 597 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,yyvsp[-2].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 114:
+
+/* Line 1806 of yacc.c  */
 #line 604 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
+					set_b2((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 115:
+
+/* Line 1806 of yacc.c  */
 #line 614 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,yyvsp[-2].value);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 116:
+
+/* Line 1806 of yacc.c  */
 #line 620 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,yyvsp[-2].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,(yyvsp[(1) - (3)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 117:
+
+/* Line 1806 of yacc.c  */
 #line 627 "parser.y"
     {
-					set_md(yyval.mode,2);
-					set_ov(yyval.mode,yyvsp[-3].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,2);
+					set_ov((yyval).mode,(yyvsp[(1) - (4)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 118:
+
+/* Line 1806 of yacc.c  */
 #line 634 "parser.y"
     {
-					set_md(yyval.mode,3);
-					set_ov(yyval.mode,yyvsp[0].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[-2].value);
+					set_md((yyval).mode,3);
+					set_ov((yyval).mode,(yyvsp[(3) - (3)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
 				}
     break;
 
   case 119:
+
+/* Line 1806 of yacc.c  */
 #line 641 "parser.y"
     {
-					set_md(yyval.mode,4);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[0].value);
-					set_b2(yyval.mode,yyvsp[-2].value);
+					set_md((yyval).mode,4);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
+					set_b2((yyval).mode,(yyvsp[(1) - (3)]).value);
 				}
     break;
 
   case 120:
+
+/* Line 1806 of yacc.c  */
 #line 649 "parser.y"
     {
-					set_md(yyval.mode,5);
-					set_ov(yyval.mode,yyvsp[0].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[-3].value);
+					set_md((yyval).mode,5);
+					set_ov((yyval).mode,(yyvsp[(4) - (4)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (4)]).value);
 				}
     break;
 
   case 121:
+
+/* Line 1806 of yacc.c  */
 #line 656 "parser.y"
     {
-					set_md(yyval.mode,6);
-					set_ov(yyval.mode,yyvsp[-2].value);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,6);
+					set_ov((yyval).mode,(yyvsp[(2) - (4)]).value);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 122:
+
+/* Line 1806 of yacc.c  */
 #line 662 "parser.y"
     {
-					set_md(yyval.mode,7);
-					set_ov(yyval.mode,yyvsp[-2].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,7);
+					set_ov((yyval).mode,(yyvsp[(2) - (4)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(4) - (4)]).value);
 				}
     break;
 
   case 123:
+
+/* Line 1806 of yacc.c  */
 #line 669 "parser.y"
     {
-					set_md(yyval.mode,8);
-					set_ov(yyval.mode,yyvsp[-3].value);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,8);
+					set_ov((yyval).mode,(yyvsp[(2) - (5)]).value);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(5) - (5)]).value);
 				}
     break;
 
   case 124:
+
+/* Line 1806 of yacc.c  */
 #line 676 "parser.y"
     {
-				set_md(yyval.mode,9);
-				set_ov(yyval.mode,0);
-				set_sz(yyval.mode,2);
-				set_b1(yyval.mode, (yyvsp[0].value & 0xff00) >> 8 );
-				set_b2(yyval.mode, (yyvsp[0].value & 0x00ff) );
+				set_md((yyval).mode,9);
+				set_ov((yyval).mode,0);
+				set_sz((yyval).mode,2);
+				set_b1((yyval).mode, ((yyvsp[(4) - (4)]).value & 0xff00) >> 8 );
+				set_b2((yyval).mode, ((yyvsp[(4) - (4)]).value & 0x00ff) );
 			}
     break;
 
   case 125:
+
+/* Line 1806 of yacc.c  */
 #line 684 "parser.y"
     {
-					set_md(yyval.mode,10);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,10);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(3) - (3)]).value);
 				}
     break;
 
   case 126:
+
+/* Line 1806 of yacc.c  */
 #line 700 "parser.y"
     {
-					set_md(yyval.mode,11);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[-2].value);
+					set_md((yyval).mode,11);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (3)]).value);
 				}
     break;
 
   case 127:
+
+/* Line 1806 of yacc.c  */
 #line 707 "parser.y"
     {
 	if( pass2 ) {
-		if( !isbit8(yyvsp[-3].value) )
+		if( !isbit8((yyvsp[(1) - (4)]).value) )
 			warn("Bit address exceeds 8-bits");
-		if( isbmram(yyvsp[-3].value) )
-			set_b1(yyval.mode, (yyvsp[-3].value-0x20)*8+ yyvsp[-2].value );
-		else if( isbmsfr(yyvsp[-3].value) )
-			set_b1(yyval.mode, yyvsp[-3].value + yyvsp[-2].value );
+		if( isbmram((yyvsp[(1) - (4)]).value) )
+			set_b1((yyval).mode, ((yyvsp[(1) - (4)]).value-0x20)*8+ (yyvsp[(2) - (4)]).value );
+		else if( isbmsfr((yyvsp[(1) - (4)]).value) )
+			set_b1((yyval).mode, (yyvsp[(1) - (4)]).value + (yyvsp[(2) - (4)]).value );
 		else
 			warn("Invalid bit addressable RAM location");
 	}
-	set_md(yyval.mode,11);
-	set_ov(yyval.mode,0);
-	set_sz(yyval.mode,1);
+	set_md((yyval).mode,11);
+	set_ov((yyval).mode,0);
+	set_sz((yyval).mode,1);
 }
     break;
 
   case 128:
+
+/* Line 1806 of yacc.c  */
 #line 726 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 129:
+
+/* Line 1806 of yacc.c  */
 #line 733 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,yyvsp[0].value);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,(yyvsp[(1) - (1)]).value);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 130:
+
+/* Line 1806 of yacc.c  */
 #line 739 "parser.y"
     {
-					set_md(yyval.mode,2);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,2);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (1)]).value);
 				}
     break;
 
   case 131:
+
+/* Line 1806 of yacc.c  */
 #line 746 "parser.y"
     {
-					set_md(yyval.mode,3);
-					set_ov(yyval.mode,yyvsp[0].value);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,3);
+					set_ov((yyval).mode,(yyvsp[(2) - (2)]).value);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 132:
+
+/* Line 1806 of yacc.c  */
 #line 754 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 133:
+
+/* Line 1806 of yacc.c  */
 #line 760 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,0);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,0);
 				}
     break;
 
   case 134:
+
+/* Line 1806 of yacc.c  */
 #line 766 "parser.y"
     {
-					set_md(yyval.mode,2);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,1);
-					set_b1(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,2);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,1);
+					set_b1((yyval).mode,(yyvsp[(1) - (1)]).value);
 				}
     break;
 
   case 135:
+
+/* Line 1806 of yacc.c  */
 #line 775 "parser.y"
     {
-					set_md(yyval.mode,0);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,0);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(3) - (5)]).value);
+					set_b2((yyval).mode,(yyvsp[(5) - (5)]).value);
 				}
     break;
 
   case 136:
+
+/* Line 1806 of yacc.c  */
 #line 783 "parser.y"
     {
-					set_md(yyval.mode,1);
-					set_ov(yyval.mode,0);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,1);
+					set_ov((yyval).mode,0);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(4) - (6)]).value);
+					set_b2((yyval).mode,(yyvsp[(6) - (6)]).value);
 				}
     break;
 
   case 137:
+
+/* Line 1806 of yacc.c  */
 #line 791 "parser.y"
     {
-					set_md(yyval.mode,2);
-					set_ov(yyval.mode,yyvsp[-5].value);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,2);
+					set_ov((yyval).mode,(yyvsp[(1) - (6)]).value);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(4) - (6)]).value);
+					set_b2((yyval).mode,(yyvsp[(6) - (6)]).value);
 				}
     break;
 
   case 138:
+
+/* Line 1806 of yacc.c  */
 #line 799 "parser.y"
     {
-					set_md(yyval.mode,3);
-					set_ov(yyval.mode,yyvsp[-5].value);
-					set_sz(yyval.mode,2);
-					set_b1(yyval.mode,yyvsp[-2].value);
-					set_b2(yyval.mode,yyvsp[0].value);
+					set_md((yyval).mode,3);
+					set_ov((yyval).mode,(yyvsp[(2) - (7)]).value);
+					set_sz((yyval).mode,2);
+					set_b1((yyval).mode,(yyvsp[(5) - (7)]).value);
+					set_b2((yyval).mode,(yyvsp[(7) - (7)]).value);
 				}
     break;
 
   case 139:
+
+/* Line 1806 of yacc.c  */
 #line 809 "parser.y"
     {
 		long offset;
 		if( pass2 ) {
-			offset = yyvsp[0].val.v - (lc+3);
+			offset = (yyvsp[(1) - (1)]).val.v - (lc+3);
 			if( offset > 127 || offset < -128 )
 			   warn("Relative offset exceeds -128 / +127");
-			yyval.value = offset;
+			(yyval).value = offset;
 		}
 }
     break;
 
   case 140:
+
+/* Line 1806 of yacc.c  */
 #line 826 "parser.y"
     {
 		long offset;
 		if( pass2 ) {
-			offset = yyvsp[0].val.v - (lc+2); /* different! */
+			offset = (yyvsp[(1) - (1)]).val.v - (lc+2); /* different! */
 			if( offset > 127 || offset < -128 )
 			   warn("Relative offset exceeds -128 / +127");
-			yyval.value = offset;
+			(yyval).value = offset;
 		}
 }
     break;
 
   case 141:
+
+/* Line 1806 of yacc.c  */
 #line 839 "parser.y"
     {
 	if( pass2 ) {
-		if( !isbit8(yyvsp[-1].value) )
+		if( !isbit8((yyvsp[(1) - (2)]).value) )
 			warn("Bit address exceeds 8-bits");
-		if( isbmram(yyvsp[-1].value) )
-			yyval.value = (yyvsp[-1].value-0x20)*8+yyvsp[0].value;
-		else if( isbmsfr(yyvsp[-1].value) )
-			yyval.value = yyvsp[-1].value + yyvsp[0].value;
+		if( isbmram((yyvsp[(1) - (2)]).value) )
+			(yyval).value = ((yyvsp[(1) - (2)]).value-0x20)*8+(yyvsp[(2) - (2)]).value;
+		else if( isbmsfr((yyvsp[(1) - (2)]).value) )
+			(yyval).value = (yyvsp[(1) - (2)]).value + (yyvsp[(2) - (2)]).value;
 		else
 			warn("Invalid bit addressable RAM location");
 	}
@@ -2529,201 +3173,259 @@ yyreduce:
     break;
 
   case 142:
+
+/* Line 1806 of yacc.c  */
 #line 852 "parser.y"
     {
 	if( pass2 ) {
-		if( !isbit8(yyvsp[0].value) )
+		if( !isbit8((yyvsp[(1) - (1)]).value) )
 			warn("Bit address exceeds 8-bits");
-		yyval.value = yyvsp[0].value;
+		(yyval).value = (yyvsp[(1) - (1)]).value;
 	}
 }
     break;
 
   case 143:
+
+/* Line 1806 of yacc.c  */
 #line 862 "parser.y"
     {
-	if( yyvsp[0].sym->type == UNDEF && pass2 )
-		warn("Symbol %s undefined",yyvsp[0].sym->name);
-	yyval.value = yyvsp[0].sym->value;
+	if( (yyvsp[(1) - (1)]).sym->type == UNDEF && pass2 )
+		warn("Symbol %s undefined",(yyvsp[(1) - (1)]).sym->name);
+	(yyval).value = (yyvsp[(1) - (1)]).sym->value;
 }
     break;
 
   case 144:
+
+/* Line 1806 of yacc.c  */
 #line 867 "parser.y"
-    { yyval.value = yyvsp[0].value; }
+    { (yyval).value = (yyvsp[(1) - (1)]).value; }
     break;
 
   case 145:
+
+/* Line 1806 of yacc.c  */
 #line 870 "parser.y"
-    { yyval.value = 0; }
+    { (yyval).value = 0; }
     break;
 
   case 146:
+
+/* Line 1806 of yacc.c  */
 #line 871 "parser.y"
-    { yyval.value = 1; }
+    { (yyval).value = 1; }
     break;
 
   case 147:
+
+/* Line 1806 of yacc.c  */
 #line 872 "parser.y"
-    { yyval.value = 2; }
+    { (yyval).value = 2; }
     break;
 
   case 148:
+
+/* Line 1806 of yacc.c  */
 #line 873 "parser.y"
-    { yyval.value = 3; }
+    { (yyval).value = 3; }
     break;
 
   case 149:
+
+/* Line 1806 of yacc.c  */
 #line 874 "parser.y"
-    { yyval.value = 4; }
+    { (yyval).value = 4; }
     break;
 
   case 150:
+
+/* Line 1806 of yacc.c  */
 #line 875 "parser.y"
-    { yyval.value = 5; }
+    { (yyval).value = 5; }
     break;
 
   case 151:
+
+/* Line 1806 of yacc.c  */
 #line 876 "parser.y"
-    { yyval.value = 6; }
+    { (yyval).value = 6; }
     break;
 
   case 152:
+
+/* Line 1806 of yacc.c  */
 #line 877 "parser.y"
-    { yyval.value = 7; }
+    { (yyval).value = 7; }
     break;
 
   case 153:
+
+/* Line 1806 of yacc.c  */
 #line 880 "parser.y"
-    { yyval.value = 0; }
+    { (yyval).value = 0; }
     break;
 
   case 154:
+
+/* Line 1806 of yacc.c  */
 #line 881 "parser.y"
-    { yyval.value = 1; }
+    { (yyval).value = 1; }
     break;
 
   case 155:
+
+/* Line 1806 of yacc.c  */
 #line 883 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r2"); }
     break;
 
   case 156:
+
+/* Line 1806 of yacc.c  */
 #line 886 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r3"); }
     break;
 
   case 157:
+
+/* Line 1806 of yacc.c  */
 #line 889 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r4"); }
     break;
 
   case 158:
+
+/* Line 1806 of yacc.c  */
 #line 892 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r5"); }
     break;
 
   case 159:
+
+/* Line 1806 of yacc.c  */
 #line 895 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r6"); }
     break;
 
   case 160:
+
+/* Line 1806 of yacc.c  */
 #line 898 "parser.y"
-    { yyval.value = 0;
+    { (yyval).value = 0;
 				  warn("Illegal indirect register: @r7"); }
     break;
 
   case 161:
+
+/* Line 1806 of yacc.c  */
 #line 903 "parser.y"
     {
 	if( pass2 ) {
-		if( !isbit8(yyvsp[0].val.v) )
+		if( !isbit8((yyvsp[(1) - (1)]).val.v) )
 			warn("Expression greater than 8-bits");
 	}
-	yyval.value = yyvsp[0].val.v;
+	(yyval).value = (yyvsp[(1) - (1)]).val.v;
 }
     break;
 
   case 162:
+
+/* Line 1806 of yacc.c  */
 #line 913 "parser.y"
     {
 	if( pass2 ) {
-		if( !isbit16(yyvsp[0].val.v) )
+		if( !isbit16((yyvsp[(1) - (1)]).val.v) )
 			warn("Expression greater than 16-bits");
 	}
-	yyval.value = yyvsp[0].val.v;
+	(yyval).value = (yyvsp[(1) - (1)]).val.v;
 }
     break;
 
   case 163:
+
+/* Line 1806 of yacc.c  */
 #line 923 "parser.y"
     {
 		if( pass2 ) {
-			if( !isbit16(yyvsp[0].val.v)  )
+			if( !isbit16((yyvsp[(1) - (1)]).val.v)  )
 				warn("Address greater than 16-bits");
-			if( (yyvsp[0].val.v & size11) != ((lc+2) & size11) )
+			if( ((yyvsp[(1) - (1)]).val.v & size11) != ((lc+2) & size11) )
 				warn("Address outside current 2K page");
 		}
-		set_md(yyval.mode,0);
-		set_ov(yyval.mode, (yyvsp[0].val.v&0x0700)>>3 );
-		set_sz(yyval.mode,1);
-		set_b1(yyval.mode,yyvsp[0].val.v&0x00ff);
+		set_md((yyval).mode,0);
+		set_ov((yyval).mode, ((yyvsp[(1) - (1)]).val.v&0x0700)>>3 );
+		set_sz((yyval).mode,1);
+		set_b1((yyval).mode,(yyvsp[(1) - (1)]).val.v&0x00ff);
 }
     break;
 
   case 164:
+
+/* Line 1806 of yacc.c  */
 #line 938 "parser.y"
     {
 		if( pass2 ) {
-			if( !isbit16(yyvsp[0].val.v)  )
+			if( !isbit16((yyvsp[(1) - (1)]).val.v)  )
 				warn("Address greater than 16-bits");
 		}
-		set_md(yyval.mode,0);
-		set_ov(yyval.mode, 0 );
-		set_sz(yyval.mode,2);
-		set_b1(yyval.mode, (yyvsp[0].val.v & 0xff00 ) >> 8 );
-		set_b2(yyval.mode, (yyvsp[0].val.v & 0x00ff ) );
+		set_md((yyval).mode,0);
+		set_ov((yyval).mode, 0 );
+		set_sz((yyval).mode,2);
+		set_b1((yyval).mode, ((yyvsp[(1) - (1)]).val.v & 0xff00 ) >> 8 );
+		set_b2((yyval).mode, ((yyvsp[(1) - (1)]).val.v & 0x00ff ) );
 }
     break;
 
   case 165:
+
+/* Line 1806 of yacc.c  */
 #line 952 "parser.y"
     {
 		long offset=0;
 		if( pass2 ) {
-			offset = yyvsp[0].val.v - (lc+2);
+			offset = (yyvsp[(1) - (1)]).val.v - (lc+2);
 			if( offset>127 || offset<-128 )
 			   warn("Relative offset exceeds -128 / +127");
 		}
-		set_md(yyval.mode,0);
-		set_ov(yyval.mode,0);
-		set_sz(yyval.mode,1);
-		set_b1(yyval.mode,offset);
+		set_md((yyval).mode,0);
+		set_ov((yyval).mode,0);
+		set_sz((yyval).mode,1);
+		set_b1((yyval).mode,offset);
 
 }
     break;
 
 
-    }
-
-/* Line 1010 of yacc.c.  */
-#line 2717 "y.tab.c"
-
-  yyvsp -= yylen;
-  yyssp -= yylen;
-
 
+/* Line 1806 of yacc.c  */
+#line 3408 "y.tab.c"
+      default: break;
+    }
+  /* User semantic actions sometimes alter yychar, and that requires
+     that yytoken be updated with the new translation.  We take the
+     approach of translating immediately before every use of yytoken.
+     One alternative is translating here after every semantic action,
+     but that translation would be missed if the semantic action invokes
+     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
+     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
+     incorrect destructor might then be invoked immediately.  In the
+     case of YYERROR or YYBACKUP, subsequent parser actions might lead
+     to an incorrect destructor call or verbose syntax error message
+     before the lookahead is translated.  */
+  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);
+
+  YYPOPSTACK (yylen);
+  yylen = 0;
   YY_STACK_PRINT (yyss, yyssp);
 
   *++yyvsp = yyval;
 
-
   /* Now `shift' the result of the reduction.  Determine what state
      that goes to, based on the state we popped back to and the rule
      number reduced by.  */
@@ -2743,70 +3445,48 @@ yyreduce:
 | yyerrlab -- here on detecting error |
 `------------------------------------*/
 yyerrlab:
+  /* Make sure we have latest lookahead translation.  See comments at
+     user semantic actions for why this is necessary.  */
+  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
+
   /* If not already recovering from an error, report this error.  */
   if (!yyerrstatus)
     {
       ++yynerrs;
-#if YYERROR_VERBOSE
-      yyn = yypact[yystate];
-
-      if (YYPACT_NINF < yyn && yyn < YYLAST)
-	{
-	  YYSIZE_T yysize = 0;
-	  int yytype = YYTRANSLATE (yychar);
-	  const char* yyprefix;
-	  char *yymsg;
-	  int yyx;
-
-	  /* Start YYX at -YYN if negative to avoid negative indexes in
-	     YYCHECK.  */
-	  int yyxbegin = yyn < 0 ? -yyn : 0;
-
-	  /* Stay within bounds of both yycheck and yytname.  */
-	  int yychecklim = YYLAST - yyn;
-	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
-	  int yycount = 0;
-
-	  yyprefix = ", expecting ";
-	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
-	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
-	      {
-		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
-		yycount += 1;
-		if (yycount == 5)
-		  {
-		    yysize = 0;
-		    break;
-		  }
-	      }
-	  yysize += (sizeof ("syntax error, unexpected ")
-		     + yystrlen (yytname[yytype]));
-	  yymsg = (char *) YYSTACK_ALLOC (yysize);
-	  if (yymsg != 0)
-	    {
-	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
-	      yyp = yystpcpy (yyp, yytname[yytype]);
-
-	      if (yycount < 5)
-		{
-		  yyprefix = ", expecting ";
-		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
-		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
-		      {
-			yyp = yystpcpy (yyp, yyprefix);
-			yyp = yystpcpy (yyp, yytname[yyx]);
-			yyprefix = " or ";
-		      }
-		}
-	      yyerror (yymsg);
-	      YYSTACK_FREE (yymsg);
-	    }
-	  else
-	    yyerror ("syntax error; also virtual memory exhausted");
-	}
-      else
-#endif /* YYERROR_VERBOSE */
-	yyerror ("syntax error");
+#if ! YYERROR_VERBOSE
+      yyerror (YY_("syntax error"));
+#else
+# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
+                                        yyssp, yytoken)
+      {
+        char const *yymsgp = YY_("syntax error");
+        int yysyntax_error_status;
+        yysyntax_error_status = YYSYNTAX_ERROR;
+        if (yysyntax_error_status == 0)
+          yymsgp = yymsg;
+        else if (yysyntax_error_status == 1)
+          {
+            if (yymsg != yymsgbuf)
+              YYSTACK_FREE (yymsg);
+            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
+            if (!yymsg)
+              {
+                yymsg = yymsgbuf;
+                yymsg_alloc = sizeof yymsgbuf;
+                yysyntax_error_status = 2;
+              }
+            else
+              {
+                yysyntax_error_status = YYSYNTAX_ERROR;
+                yymsgp = yymsg;
+              }
+          }
+        yyerror (yymsgp);
+        if (yysyntax_error_status == 2)
+          goto yyexhaustedlab;
+      }
+# undef YYSYNTAX_ERROR
+#endif
     }
 
 
@@ -2817,25 +3497,16 @@ yyerrlab:
 	 error, discard it.  */
 
       if (yychar <= YYEOF)
-        {
-          /* If at end of input, pop the error token,
-	     then the rest of the stack, then return failure.  */
+	{
+	  /* Return failure if at end of input.  */
 	  if (yychar == YYEOF)
-	     for (;;)
-	       {
-		 YYPOPSTACK;
-		 if (yyssp == yyss)
-		   YYABORT;
-		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
-		 yydestruct (yystos[*yyssp], yyvsp);
-	       }
-        }
+	    YYABORT;
+	}
       else
 	{
-	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
-	  yydestruct (yytoken, &yylval);
+	  yydestruct ("Error: discarding",
+		      yytoken, &yylval);
 	  yychar = YYEMPTY;
-
 	}
     }
 
@@ -2849,15 +3520,17 @@ yyerrlab:
 `---------------------------------------------------*/
 yyerrorlab:
 
-#ifdef __GNUC__
-  /* Pacify GCC when the user code never invokes YYERROR and the label
-     yyerrorlab therefore never appears in user code.  */
-  if (0)
+  /* Pacify compilers like GCC when the user code never invokes
+     YYERROR and the label yyerrorlab therefore never appears in user
+     code.  */
+  if (/*CONSTCOND*/ 0)
      goto yyerrorlab;
-#endif
 
-  yyvsp -= yylen;
-  yyssp -= yylen;
+  /* Do not reclaim the symbols of the rule which action triggered
+     this YYERROR.  */
+  YYPOPSTACK (yylen);
+  yylen = 0;
+  YY_STACK_PRINT (yyss, yyssp);
   yystate = *yyssp;
   goto yyerrlab1;
 
@@ -2871,7 +3544,7 @@ yyerrlab1:
   for (;;)
     {
       yyn = yypact[yystate];
-      if (yyn != YYPACT_NINF)
+      if (!yypact_value_is_default (yyn))
 	{
 	  yyn += YYTERROR;
 	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
@@ -2886,21 +3559,20 @@ yyerrlab1:
       if (yyssp == yyss)
 	YYABORT;
 
-      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
-      yydestruct (yystos[yystate], yyvsp);
-      YYPOPSTACK;
+
+      yydestruct ("Error: popping",
+		  yystos[yystate], yyvsp);
+      YYPOPSTACK (1);
       yystate = *yyssp;
       YY_STACK_PRINT (yyss, yyssp);
     }
 
-  if (yyn == YYFINAL)
-    YYACCEPT;
-
-  YYDPRINTF ((stderr, "Shifting error token, "));
-
   *++yyvsp = yylval;
 
 
+  /* Shift the error token.  */
+  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);
+
   yystate = yyn;
   goto yynewstate;
 
@@ -2919,25 +3591,50 @@ yyabortlab:
   yyresult = 1;
   goto yyreturn;
 
-#ifndef yyoverflow
-/*----------------------------------------------.
-| yyoverflowlab -- parser overflow comes here.  |
-`----------------------------------------------*/
-yyoverflowlab:
-  yyerror ("parser stack overflow");
+#if !defined(yyoverflow) || YYERROR_VERBOSE
+/*-------------------------------------------------.
+| yyexhaustedlab -- memory exhaustion comes here.  |
+`-------------------------------------------------*/
+yyexhaustedlab:
+  yyerror (YY_("memory exhausted"));
   yyresult = 2;
   /* Fall through.  */
 #endif
 
 yyreturn:
+  if (yychar != YYEMPTY)
+    {
+      /* Make sure we have latest lookahead translation.  See comments at
+         user semantic actions for why this is necessary.  */
+      yytoken = YYTRANSLATE (yychar);
+      yydestruct ("Cleanup: discarding lookahead",
+                  yytoken, &yylval);
+    }
+  /* Do not reclaim the symbols of the rule which action triggered
+     this YYABORT or YYACCEPT.  */
+  YYPOPSTACK (yylen);
+  YY_STACK_PRINT (yyss, yyssp);
+  while (yyssp != yyss)
+    {
+      yydestruct ("Cleanup: popping",
+		  yystos[*yyssp], yyvsp);
+      YYPOPSTACK (1);
+    }
 #ifndef yyoverflow
   if (yyss != yyssa)
     YYSTACK_FREE (yyss);
 #endif
-  return yyresult;
+#if YYERROR_VERBOSE
+  if (yymsg != yymsgbuf)
+    YYSTACK_FREE (yymsg);
+#endif
+  /* Make sure YYID is used.  */
+  return YYID (yyresult);
 }
 
 
+
+/* Line 2067 of yacc.c  */
 #line 967 "parser.y"
 
 
@@ -2991,13 +3688,13 @@ int makeop(struct opcode * op, struct mode *m, int add)
  *
  */
 
-#define indx(a) ( (a)/(sizeof(long)*8) )
-#define bit(a)	( 1 << ((a)%(sizeof(long)*8)) )
+#define indx(a) ( (a)/(32) )
+#define bit(a)	( 1 << ((a)%(32)) )
 
 #define getloc(a) (regions[indx(a)] & bit(a))
 #define setloc(a) (regions[indx(a)] |= bit(a))
 
-static unsigned long regions[ 0x10000/(sizeof(long)*8) ];
+static unsigned long regions[ 0x10000/(32) ];
 
 void inclc(int i)
 {
@@ -3101,4 +3798,3 @@ void genword(unsigned long w)
 }
 
 
-
