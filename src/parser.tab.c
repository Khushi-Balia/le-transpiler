/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdlib.h>
#include <stdio.h>
#include "symbol_table.h"
#include "ast.h"
#include "code_printer.h"
#include "semantic.h"

extern void yyerror(const char* s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int linenumber;
extern int assignment_flag;
sym_ptr temp = NULL;
ast_node *ast = NULL;

#define YYDEBUG 1

#line 78 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;



#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX \
  (PTRDIFF_MAX < SIZE_MAX ? PTRDIFF_MAX : YY_CAST (ptrdiff_t, SIZE_MAX))

#ifdef __cplusplus
  typedef bool yybool;
# define yytrue true
# define yyfalse false
#else
  /* When we move to stdbool, get rid of the various casts to yybool.  */
  typedef signed char yybool;
# define yytrue 1
# define yyfalse 0
#endif

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify Clang and ICC.  */
# define YYLONGJMP(Env, Val)                    \
 do {                                           \
   longjmp (Env, Val);                          \
   YY_ASSERT (0);                               \
 } while (yyfalse)
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)))
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0)  \
            || 4 < __GNUC__ + (7 <= __GNUC_MINOR__)))
   /* _Noreturn works as-is.  */
# elif 2 < __GNUC__ + (8 <= __GNUC_MINOR__) || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  83
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token number (for yychar).  */
#define YYMAXUTOK   309
/* YYUNDEFTOK -- Symbol number (for yytoken) that denotes an unknown
   token.  */
#define YYUNDEFTOK  2

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                         \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   123,   123,   128,   132,   137,   140,   145,   150,   156,
     160,   163,   166,   169,   172,   175,   178,   181,   184,   187,
     190,   193,   196,   199,   202,   205,   208,   211,   214,   220,
     231,   242,   252,   262,   272,   283,   295,   307,   319,   333,
     345,   367,   389,   412,   431,   452,   471,   492,   512,   515,
     532,   535,   538,   541,   544,   547,   554,   557,   560,   565,
     568,   571,   574,   577,   582,   585,   588,   591,   594,   597,
     602,   605,   608,   613,   619,   623,   628,   632,   636,   636,
     644,   647,   650,   655,   660,   660,   684,   684,   708,   708,
     732,   732,   758,   761,   766,   769,   775,   781,   787,   795,
     798,   801,   806,   828,   850,   872,   894,   897,   901,   906,
     909,   915,   920,   923
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LBRACE", "RBRACE", "LPAREN", "RPAREN",
  "LSQUARE", "RSQUARE", "OPR_LGL_OR", "OPR_LGL_AND", "OPR_EQ", "OPR_NE",
  "OPR_GT", "OPR_LT", "OPR_GE", "OPR_LE", "OPR_BW_LFT", "OPR_ADD",
  "OPR_SUB", "OPR_MUL", "OPR_DIV", "OPR_MOD", "OPR_LGL_NOT",
  "OPR_ASSIGNMENT", "DT_INT", "DT_BOOL", "DT_VOID", "DT_CHAR", "DT_UNDEF",
  "COLON", "COMMA", "KW_IF", "KW_ELIF", "KW_ELSE", "KW_FOR", "KW_IN",
  "KW_WHILE", "KW_BREAK", "KW_CONTINUE", "KW_RETURN", "KW_DEF", "KW_PRINT",
  "CONST_INT", "CONST_CHAR", "CONST_BOOL", "CONST_STRING", "IDENTIFIER",
  "INT_IDENTIFIER", "BOOL_IDENTIFIER", "VOID_IDENTIFIER",
  "CHAR_IDENTIFIER", "INT_ARR_IDENTIFIER", "CHAR_ARR_IDENTIFIER",
  "BOOL_ARR_IDENTIFIER", "$accept", "start", "translation_unit", "program",
  "compound_statement", "statement_list", "statement", "declaration",
  "array_declaration", "declaration_assignment",
  "array_declaration_assignment", "assignment", "array_assignment",
  "arithmetic_array_access", "boolean_array_access",
  "arithmetic_expression", "boolean_expression", "relational_expression",
  "logical_expression", "conditional_statement",
  "conditional_statement_else_if", "conditional_statement_else",
  "loop_statement_for", "$@1", "range_expression", "loop_statement_while",
  "function_definition", "$@2", "$@3", "$@4", "$@5", "parameters",
  "parameter_list_def", "parameter", "return_statement",
  "int_function_call", "bool_function_call", "char_function_call",
  "void_function_call", "function_call_parameters",
  "function_call_datatypes", "print_string_call", "print_expression_call", YY_NULLPTR
};
#endif

#define YYPACT_NINF (-83)
#define YYTABLE_NINF (-59)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     106,   329,    -5,    -4,    -3,    10,   -25,   -11,   -83,   -83,
     117,   -24,    49,   -83,    17,    60,    67,   115,    76,    85,
      25,   106,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   478,   -83,   -83,   -83,   -83,   -83,   191,   -83,
     245,   -83,   -83,   -83,    94,   -83,   -35,    86,   -35,    90,
     -35,    97,    10,   -83,   113,   118,   137,   145,   146,   157,
     -83,   472,    47,   -83,   -83,   -83,   -83,   -83,   114,    10,
     472,    59,   155,   -14,    10,   -35,    10,    10,    10,    10,
     -35,   -35,   -35,   -83,   -83,   -35,   -35,   -35,   -35,   -35,
     -35,   -83,   238,   -35,   292,    10,   392,   -35,   -83,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    10,    10,
     164,   -83,    57,   147,   184,   377,   116,   472,    59,     5,
     -83,   478,    14,    59,    18,    20,   478,   398,   413,   159,
     178,   178,   -83,   -83,   -83,   149,   478,   156,    59,   167,
     299,   419,   434,   440,   478,   478,   478,   478,   478,   478,
     182,   -83,   -83,   168,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    10,   -83,   -83,   -83,   169,   194,   -83,
     -83,   201,   -83,   -83,   -83,   102,   154,   185,   205,   206,
     207,   -83,   -35,   -35,   192,    10,   217,   -83,   -35,   446,
     164,   161,   161,   161,   161,   478,   478,   -83,    61,   164,
     478,   -35,   -83,   203,   204,   214,   164,   221,   -83,   164,
     164,   164,   164,   -83,   452,   -83,   -83,   -83,   -83,   161,
     -83,   -83,   -83,   -83,   -35,   -83,   478
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    27,    28,
     101,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     2,     3,     9,     5,    10,    14,    11,    13,    12,
      15,    50,    16,    17,    18,    19,     6,    22,    23,    24,
      25,    26,    20,    21,     0,     8,     0,    29,     0,    30,
       0,    31,     0,    59,    49,     0,     0,     0,     0,     0,
      60,     0,     0,    61,    62,    57,    63,    58,     0,     0,
     100,    99,     0,     0,   108,     0,   108,     0,   108,   108,
       0,     0,     0,     1,     4,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,   109,   110,     0,
     107,    40,     0,    41,     0,     0,    42,     0,     0,    51,
      52,    53,    54,    55,    56,     0,    35,     0,    37,     0,
      36,     0,     0,     0,    66,    67,    64,    65,    68,    69,
      72,    71,    75,     0,    83,    84,    86,    90,    88,   111,
     112,   113,   102,     0,   103,   105,   104,    45,    46,    32,
      34,    33,    45,    46,    47,    77,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,    73,     0,     0,
       0,    93,    93,    93,    93,    43,    44,    39,     0,     0,
      80,     0,    79,     0,     0,     0,     0,    92,    95,     0,
       0,     0,     0,    76,    81,    96,    97,    98,    85,     0,
      87,    91,    89,    74,     0,    94,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   232,   -82,   -83,   253,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,     0,    42,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    28,   -83,    50,   -83,     6,    95,   112,   -83,   -64,
     105,   -83,   -83
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,    44,    24,    25,    26,    27,
      28,    29,    30,    31,    60,    61,   118,    63,    64,    33,
     175,   187,    34,   153,   190,    35,    36,   177,   178,   180,
     179,   206,   207,   208,    37,    65,    66,    67,    41,   119,
     120,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    32,    46,    48,    50,    68,    38,    38,    13,    52,
      70,   162,   122,    54,   124,   125,    56,    57,    58,    69,
     164,    32,    74,    72,   165,    83,   166,    38,   152,    13,
     154,    53,   114,    52,    54,    55,   163,    56,    57,    58,
      59,    75,    47,    49,    51,   163,    92,    62,    94,   163,
      96,   163,    71,    13,    73,    53,   108,   109,    54,    55,
       1,    56,    57,    58,    59,    76,   108,   109,   108,   109,
     108,   109,    78,   115,   117,   121,   117,   110,   117,   117,
     126,   127,   128,    81,    77,   129,   130,   131,   132,   133,
     134,   212,    82,   136,    98,    39,    39,   140,    91,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   202,     1,
      93,   112,    40,    40,    95,   116,    39,   213,    74,   123,
      79,    97,   161,    76,   218,   108,   109,   220,   221,   222,
     223,     2,     3,    40,     4,   185,   186,   138,     5,    80,
      52,     6,    79,     7,     8,     9,    10,    11,    12,    13,
     150,   151,    99,   100,    14,    15,    16,    17,    18,    19,
      13,   111,    53,   117,   101,    54,    55,     1,    56,    57,
      58,    59,   155,   156,   157,   158,   189,    86,    87,    88,
      89,    90,   195,   196,   188,   113,   203,   204,   200,   205,
     159,   -23,   109,   182,   -23,   -23,   169,    13,    88,    89,
      90,   214,    54,   170,   176,    56,    57,    58,   -57,   -57,
     -57,   -57,   -57,   -57,   171,   191,   -23,   -23,   183,   -23,
     209,   210,   211,   -23,   226,   184,   -23,   198,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   192,   193,   194,   197,   -23,
     -23,   -23,   -23,   -23,   -23,   -25,   135,   199,   -25,   -25,
     215,   216,   219,    84,    45,    85,    86,    87,    88,    89,
      90,   217,   -58,   -58,   -58,   -58,   -58,   -58,   181,   225,
     -25,   -25,     0,   -25,     0,     0,     0,   -25,     0,     0,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -36,
     137,     0,   -36,   -36,     0,     0,     0,     0,     0,    85,
      86,    87,    88,    89,    90,     0,    85,    86,    87,    88,
      89,    90,     0,     0,   -36,   -36,     0,   -36,     0,     0,
       0,   -36,     1,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     2,     3,     0,     4,     0,     0,
       0,     5,     0,     0,     6,     0,     7,     8,     9,    10,
       0,    12,    13,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,   160,     0,     0,     0,     0,   102,   103,
     104,   105,   106,   107,    85,    86,    87,    88,    89,    90,
     139,     0,     0,     0,     0,     0,   167,     0,     0,    85,
      86,    87,    88,    89,    90,    85,    86,    87,    88,    89,
      90,   168,     0,     0,     0,     0,     0,   172,     0,     0,
      85,    86,    87,    88,    89,    90,    85,    86,    87,    88,
      89,    90,   173,     0,     0,     0,     0,     0,   174,     0,
       0,    85,    86,    87,    88,    89,    90,    85,    86,    87,
      88,    89,    90,    85,    86,    87,    88,    89,    90,    85,
      86,    87,    88,    89,    90,     0,   201,     0,     0,     0,
       0,     0,   224,   102,   103,   104,   105,   106,   107,    85,
      86,    87,    88,    89,    90,    85,    86,    87,    88,    89,
      90
};

static const yytype_int16 yycheck[] =
{
       0,     1,     7,     7,     7,    30,     0,     1,    43,    23,
      10,     6,    76,    48,    78,    79,    51,    52,    53,    30,
       6,    21,     5,    47,     6,     0,     6,    21,   110,    43,
     112,    45,    46,    23,    48,    49,    31,    51,    52,    53,
      54,    24,    47,    47,    47,    31,    46,     5,    48,    31,
      50,    31,    10,    43,     5,    45,     9,    10,    48,    49,
       3,    51,    52,    53,    54,     5,     9,    10,     9,    10,
       9,    10,     5,    73,    74,    75,    76,    30,    78,    79,
      80,    81,    82,     7,    24,    85,    86,    87,    88,    89,
      90,    30,     7,    93,    52,     0,     1,    97,     4,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   190,     3,
      24,    69,     0,     1,    24,    73,    21,   199,     5,    77,
       5,    24,     6,     5,   206,     9,    10,   209,   210,   211,
     212,    25,    26,    21,    28,    33,    34,    95,    32,    24,
      23,    35,     5,    37,    38,    39,    40,    41,    42,    43,
     108,   109,     7,     7,    48,    49,    50,    51,    52,    53,
      43,    47,    45,   163,     7,    48,    49,     3,    51,    52,
      53,    54,    25,    26,    27,    28,   176,    18,    19,    20,
      21,    22,   182,   183,    30,    30,    25,    26,   188,    28,
       6,     0,    10,    24,     3,     4,    47,    43,    20,    21,
      22,   201,    48,    47,    36,    51,    52,    53,    17,    18,
      19,    20,    21,    22,    47,    30,    25,    26,    24,    28,
     192,   193,   194,    32,   224,    24,    35,   185,    37,    38,
      39,    40,    41,    42,    43,    30,    30,    30,    46,    48,
      49,    50,    51,    52,    53,     0,     8,    30,     3,     4,
      47,    47,    31,    21,     1,    17,    18,    19,    20,    21,
      22,    47,    17,    18,    19,    20,    21,    22,   163,   219,
      25,    26,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,     0,
       8,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    32,     3,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    25,    26,    -1,    28,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,     6,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
       8,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,    17,
      18,    19,    20,    21,    22,    17,    18,    19,    20,    21,
      22,     8,    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      17,    18,    19,    20,    21,    22,    17,    18,    19,    20,
      21,    22,     8,    -1,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    17,    18,    19,    20,    21,    22,    17,    18,    19,
      20,    21,    22,    17,    18,    19,    20,    21,    22,    17,
      18,    19,    20,    21,    22,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    30,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    17,    18,    19,    20,    21,
      22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    28,    32,    35,    37,    38,    39,
      40,    41,    42,    43,    48,    49,    50,    51,    52,    53,
      56,    57,    58,    59,    61,    62,    63,    64,    65,    66,
      67,    68,    70,    74,    77,    80,    81,    89,    90,    91,
      92,    93,    96,    97,    60,    61,     7,    47,     7,    47,
       7,    47,    23,    45,    48,    49,    51,    52,    53,    54,
      69,    70,    71,    72,    73,    90,    91,    92,    30,    30,
      70,    71,    47,     5,     5,    24,     5,    24,     5,     5,
      24,     7,     7,     0,    58,    17,    18,    19,    20,    21,
      22,     4,    70,    24,    70,    24,    70,    24,    71,     7,
       7,     7,    11,    12,    13,    14,    15,    16,     9,    10,
      30,    47,    71,    30,    46,    70,    71,    70,    71,    94,
      95,    70,    94,    71,    94,    94,    70,    70,    70,    70,
      70,    70,    70,    70,    70,     8,    70,     8,    71,     8,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    59,    78,    59,    25,    26,    27,    28,     6,
       6,     6,     6,    31,     6,     6,     6,     8,     8,    47,
      47,    47,     8,     8,     8,    75,    36,    82,    83,    85,
      84,    95,    24,    24,    24,    33,    34,    76,    30,    70,
      79,    30,    30,    30,    30,    70,    70,    46,    71,    30,
      70,    30,    59,    25,    26,    28,    86,    87,    88,    86,
      86,    86,    30,    59,    70,    47,    47,    47,    59,    31,
      59,    59,    59,    59,    30,    88,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    63,    63,    64,    64,    64,    64,    65,
      66,    66,    66,    67,    67,    68,    68,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    74,    75,    75,    76,    76,    78,    77,
      79,    79,    79,    80,    82,    81,    83,    81,    84,    81,
      85,    81,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    89,    90,    91,    92,    93,    94,    94,    94,    95,
      95,    96,    97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     5,     5,     5,     4,     4,     4,     4,     7,
       3,     3,     3,     6,     6,     4,     4,     4,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     6,     5,     0,     3,     0,     0,     7,
       2,     3,     5,     4,     0,     8,     0,     8,     0,     8,
       0,     8,     1,     0,     3,     1,     2,     2,     2,     2,
       2,     1,     4,     4,     4,     4,     3,     1,     0,     1,
       1,     4,     4,     4
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const yytype_int8 yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const yytype_int8 yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const yytype_uint8 yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     3,     5,     0,     7,     9,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,    15,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    21,     0,    23,
       0,     0,     0,    25,     0,     0,    27,     0,    29,    31,
      33,    35,    37,    39,    41,     0,     0,     0,     0,    43,
      45,    47,    49,    51,    53,    55,     0,     0,    57,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    63,     0,    65,     0,     0,     0,    67,     0,     0,
      69,     0,    71,    73,    75,    77,    79,    81,    83,     0,
       0,     0,     0,    85,    87,    89,    91,    93,    95,    97,
       0,     0,    99,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   105,     0,   107,     0,     0,
       0,   109,     0,     0,   111,     0,   113,   115,   117,   119,
     121,   123,   125,     0,     0,     0,     0,   127,   129,   131,
     133,   135,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   101,     0,   101,     0,   101,     0,   101,     0,   101,
       0,   101,     0,    57,     0,    57,     0,    57,     0,    57,
       0,    57,     0,    57,     0,    57,     0,    57,     0,    57,
       0,    57,     0,    57,     0,    57,     0,    57,     0,    57,
       0,    57,     0,    57,     0,    57,     0,    57,     0,    57,
       0,    57,     0,    57,     0,    58,     0,    58,     0,    58,
       0,    58,     0,    58,     0,    58,     0,    58,     0,    58,
       0,    58,     0,    58,     0,    58,     0,    58,     0,    58,
       0,    58,     0,    58,     0,    58,     0,    58,     0,    58,
       0,    58,     0,    58,     0,    58,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0,    38,
       0,    38,     0,    38,     0,    38,     0,    38,     0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YY_FPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_FPRINTF_

# define YY_FPRINTF_(Args)                      \
  do {                                          \
    YYFPRINTF Args;                             \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

# define YY_DPRINTF                             \
  YY_IGNORE_USELESS_CAST_BEGIN YY_DPRINTF_

# define YY_DPRINTF_(Args)                      \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
    YY_IGNORE_USELESS_CAST_END                  \
  } while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif



/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YY_FPRINTF ((stderr, "%s ", Title));                            \
        yy_symbol_print (stderr, Type, Value);        \
        YY_FPRINTF ((stderr, "\n"));                                    \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, ptrdiff_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YY_DPRINTF(Args) do {} while (yyfalse)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static ptrdiff_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      ptrdiff_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return YY_CAST (ptrdiff_t, strlen (yystr));
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers. */
typedef int yyStateNum;

/** Rule numbers. */
typedef int yyRuleNum;

/** Grammar symbol. */
typedef int yySymbol;

/** Item references. */
typedef short yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  ptrdiff_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  nonterminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  ptrdiff_t yysize;
  ptrdiff_t yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  ptrdiff_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

_Noreturn static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

_Noreturn static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  return yytoken == YYEMPTY ? "" : yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}


/** If yychar is empty, fetch the next token.  */
static inline yySymbol
yygetToken (int *yycharp)
{
  yySymbol yytoken;
  if (*yycharp == YYEMPTY)
    {
      YY_DPRINTF ((stderr, "Reading a token: "));
      *yycharp = yylex ();
    }
  if (*yycharp <= YYEOF)
    {
      *yycharp = yytoken = YYEOF;
      YY_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (*yycharp);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }
  return yytoken;
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = yystackp->yysplitPoint == YY_NULLPTR;
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, (N), yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
  case 2:
#line 123 "parser.y"
                        {
        ast = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
     }
#line 1264 "parser.tab.c"
    break;

  case 3:
#line 128 "parser.y"
                          {
                    ((*yyvalp).node) = create_translation_unit();
                    ((*yyvalp).node) = add_program_unit(((*yyvalp).node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1273 "parser.tab.c"
    break;

  case 4:
#line 132 "parser.y"
                                               {
                    ((*yyvalp).node) = add_program_unit((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1281 "parser.tab.c"
    break;

  case 5:
#line 137 "parser.y"
                   {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements);     
       }
#line 1289 "parser.tab.c"
    break;

  case 6:
#line 140 "parser.y"
                             {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_def);
       }
#line 1297 "parser.tab.c"
    break;

  case 7:
#line 145 "parser.y"
                                                 {
                    ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement);
                  }
#line 1305 "parser.tab.c"
    break;

  case 8:
#line 150 "parser.y"
                          {
                ((*yyvalp).compound_statement) = create_compound_statement_node();
                ((*yyvalp).compound_statement) = add_compound_statement_node(((*yyvalp).compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements));
              }
#line 1314 "parser.tab.c"
    break;

  case 9:
#line 156 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_COMPOUND_STATEMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
         }
#line 1322 "parser.tab.c"
    break;

  case 10:
#line 160 "parser.y"
                     {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration)); 
         }
#line 1330 "parser.tab.c"
    break;

  case 11:
#line 163 "parser.y"
                                  {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1338 "parser.tab.c"
    break;

  case 12:
#line 166 "parser.y"
                      {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.assignment));
         }
#line 1346 "parser.tab.c"
    break;

  case 13:
#line 169 "parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1354 "parser.tab.c"
    break;

  case 14:
#line 172 "parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1362 "parser.tab.c"
    break;

  case 15:
#line 175 "parser.y"
                            {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_assignment));
         }
#line 1370 "parser.tab.c"
    break;

  case 16:
#line 178 "parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_CONSTANT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
         }
#line 1378 "parser.tab.c"
    break;

  case 17:
#line 181 "parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_CONDITIONAL_IF, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.conditional_if));
         }
#line 1386 "parser.tab.c"
    break;

  case 18:
#line 184 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_FOR, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_for));
         }
#line 1394 "parser.tab.c"
    break;

  case 19:
#line 187 "parser.y"
                                {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_WHILE, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_while));
         }
#line 1402 "parser.tab.c"
    break;

  case 20:
#line 190 "parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_STRING_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_string_function_call));
         }
#line 1410 "parser.tab.c"
    break;

  case 21:
#line 193 "parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_expression_function_call));
         }
#line 1418 "parser.tab.c"
    break;

  case 22:
#line 196 "parser.y"
                           {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_RETURN, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
         }
#line 1426 "parser.tab.c"
    break;

  case 23:
#line 199 "parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1434 "parser.tab.c"
    break;

  case 24:
#line 202 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1442 "parser.tab.c"
    break;

  case 25:
#line 205 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1450 "parser.tab.c"
    break;

  case 26:
#line 208 "parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1458 "parser.tab.c"
    break;

  case 27:
#line 211 "parser.y"
                    {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_BREAK, (void*)create_loop_control_node(AST_NODE_LOOP_BREAK));
         }
#line 1466 "parser.tab.c"
    break;

  case 28:
#line 214 "parser.y"
                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_CONTINUE, (void*)create_loop_control_node(AST_NODE_LOOP_CONTINUE));
         }
#line 1474 "parser.tab.c"
    break;

  case 29:
#line 220 "parser.y"
                               { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("int %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1490 "parser.tab.c"
    break;

  case 30:
#line 231 "parser.y"
                                {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("bool %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1506 "parser.tab.c"
    break;

  case 31:
#line 242 "parser.y"
                                {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);
           }
#line 1520 "parser.tab.c"
    break;

  case 32:
#line 252 "parser.y"
                                                                            {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1535 "parser.tab.c"
    break;

  case 33:
#line 262 "parser.y"
                                                                            {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1550 "parser.tab.c"
    break;

  case 34:
#line 272 "parser.y"
                                                                            {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1565 "parser.tab.c"
    break;

  case 35:
#line 283 "parser.y"
                                                                               {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf ("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1582 "parser.tab.c"
    break;

  case 36:
#line 295 "parser.y"
                                                                      {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

                printf("%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1599 "parser.tab.c"
    break;

  case 37:
#line 307 "parser.y"
                                                                   {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf ("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1616 "parser.tab.c"
    break;

  case 38:
#line 319 "parser.y"
                                                                      {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

                printf("%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1633 "parser.tab.c"
    break;

  case 39:
#line 333 "parser.y"
                                                                                                                    {
                                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                                {
                                    yyerror("variable already defined");
                                }

                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression)->value;
                                ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.string));
                            }
#line 1648 "parser.tab.c"
    break;

  case 40:
#line 345 "parser.y"
                                                                {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }
               
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
               {
                   yyerror("identifier is a function, cannot assign value");
               }
               
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
               {
                   yyerror("identifer is a pin number constant, cannot assign value");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1675 "parser.tab.c"
    break;

  case 41:
#line 367 "parser.y"
                                                                {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }
                
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }
                
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifer is a pin number constant, cannot assign value");
                }
                
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;  
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf("%s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1702 "parser.tab.c"
    break;

  case 42:
#line 389 "parser.y"
                                                                   {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

                printf("%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1729 "parser.tab.c"
    break;

  case 43:
#line 412 "parser.y"
                                                                                                                 {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                    {
                        yyerror("identifier is a function, cannot assign value");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                    {
                        yyerror("identifier is a pin number constant, cannot assign value");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                }
#line 1753 "parser.tab.c"
    break;

  case 44:
#line 431 "parser.y"
                                                                                                                  {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                    {
                        yyerror("identifier is a function, cannot assign value");
                    }

                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                    {
                        yyerror("identifier is a pin number constant, cannot assign value");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                }
#line 1777 "parser.tab.c"
    break;

  case 45:
#line 452 "parser.y"
                                                                                  {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                 yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 1801 "parser.tab.c"
    break;

  case 46:
#line 471 "parser.y"
                                                                        {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 1825 "parser.tab.c"
    break;

  case 47:
#line 492 "parser.y"
                                                                                {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 1849 "parser.tab.c"
    break;

  case 48:
#line 512 "parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), NULL, NULL);
          }
#line 1857 "parser.tab.c"
    break;

  case 49:
#line 515 "parser.y"
                           {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_INTEGER)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_INTEGER, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_BOOLEAN)
                  {
                      yyerror("bool variable not allowed with int/char");
                  }
              }
          }
#line 1879 "parser.tab.c"
    break;

  case 50:
#line 532 "parser.y"
                                    {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 1887 "parser.tab.c"
    break;

  case 51:
#line 535 "parser.y"
                                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_LFT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1895 "parser.tab.c"
    break;

  case 52:
#line 538 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_ADD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1903 "parser.tab.c"
    break;

  case 53:
#line 541 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value - (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1911 "parser.tab.c"
    break;

  case 54:
#line 544 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MUL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value * (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1919 "parser.tab.c"
    break;

  case 55:
#line 547 "parser.y"
                                                                {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value == 0)
              {
                  yyerror("division by 0");
              }
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_DIV, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value / (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1931 "parser.tab.c"
    break;

  case 56:
#line 554 "parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MOD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value % (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 1939 "parser.tab.c"
    break;

  case 57:
#line 557 "parser.y"
                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 1947 "parser.tab.c"
    break;

  case 58:
#line 560 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 1955 "parser.tab.c"
    break;

  case 59:
#line 565 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.boolean), NULL, NULL);
          }
#line 1963 "parser.tab.c"
    break;

  case 60:
#line 568 "parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 1971 "parser.tab.c"
    break;

  case 61:
#line 571 "parser.y"
                                  {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 1979 "parser.tab.c"
    break;

  case 62:
#line 574 "parser.y"
                               {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 1987 "parser.tab.c"
    break;

  case 63:
#line 577 "parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 1995 "parser.tab.c"
    break;

  case 64:
#line 582 "parser.y"
                                                                          {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value > (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2003 "parser.tab.c"
    break;

  case 65:
#line 585 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value < (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2011 "parser.tab.c"
    break;

  case 66:
#line 588 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_EQ, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value == (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2019 "parser.tab.c"
    break;

  case 67:
#line 591 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_NE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value != (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2027 "parser.tab.c"
    break;

  case 68:
#line 594 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value >= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2035 "parser.tab.c"
    break;

  case 69:
#line 597 "parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value <= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2043 "parser.tab.c"
    break;

  case 70:
#line 602 "parser.y"
                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_NOT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value ? 0 : 1, NULL, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2051 "parser.tab.c"
    break;

  case 71:
#line 605 "parser.y"
                                                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_AND, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value & (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2059 "parser.tab.c"
    break;

  case 72:
#line 608 "parser.y"
                                                             {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_OR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value | (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2067 "parser.tab.c"
    break;

  case 73:
#line 613 "parser.y"
                                                                                                                                  {
                          printf("inside if\n");
                          ((*yyvalp).conditional_if) = create_conditional_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                     }
#line 2076 "parser.tab.c"
    break;

  case 74:
#line 619 "parser.y"
                                                                                                                 {
                                 printf("inside else if\n");
                                 ((*yyvalp).conditional_else_if) = add_else_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                             }
#line 2085 "parser.tab.c"
    break;

  case 75:
#line 623 "parser.y"
                                              {
                                 ((*yyvalp).conditional_else_if) = create_else_if_node();
                             }
#line 2093 "parser.tab.c"
    break;

  case 76:
#line 628 "parser.y"
                                                             {
                              printf("inside else\n");
                              ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement);
                          }
#line 2102 "parser.tab.c"
    break;

  case 77:
#line 632 "parser.y"
                                        {
                              ((*yyvalp).compound_statement) = NULL;
                          }
#line 2110 "parser.tab.c"
    break;

  case 78:
#line 636 "parser.y"
                                            {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;}
#line 2117 "parser.tab.c"
    break;

  case 79:
#line 638 "parser.y"
                                                              {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression)->start->value;
                      ((*yyvalp).loop_for) = create_loop_for_node(create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                  }
#line 2126 "parser.tab.c"
    break;

  case 80:
#line 644 "parser.y"
                                              {
                        ((*yyvalp).range_expression) = create_range_expression_node(NULL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2134 "parser.tab.c"
    break;

  case 81:
#line 647 "parser.y"
                                                                        {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2142 "parser.tab.c"
    break;

  case 82:
#line 650 "parser.y"
                                                                                                    {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                    }
#line 2150 "parser.tab.c"
    break;

  case 83:
#line 655 "parser.y"
                                                                           {
                      printf("inside while\n");
                      ((*yyvalp).loop_while) = create_loop_while_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                    }
#line 2159 "parser.tab.c"
    break;

  case 84:
#line 660 "parser.y"
                                                    {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_INTEGER;}
#line 2167 "parser.tab.c"
    break;

  case 85:
#line 663 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2193 "parser.tab.c"
    break;

  case 86:
#line 684 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_BOOLEAN;}
#line 2201 "parser.tab.c"
    break;

  case 87:
#line 687 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2227 "parser.tab.c"
    break;

  case 88:
#line 708 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_CHAR_;}
#line 2235 "parser.tab.c"
    break;

  case 89:
#line 711 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2261 "parser.tab.c"
    break;

  case 90:
#line 732 "parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_VOID_;}
#line 2269 "parser.tab.c"
    break;

  case 91:
#line 735 "parser.y"
                                                       {
                       if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type == AST_NODE_FUNC_RETURN)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), vec_pop(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->child_nodes.return_statement);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_VOID_)
                       {
                           ((*yyvalp).function_def) = create_function_def_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement), NULL);
                       }
                       else if (vec_last(&(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement)->child_nodes)->node_type != AST_NODE_FUNC_RETURN && (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.symbol_handle)->data_type != DT_VOID_)
                       {
                           yyerror("return statement missing in a non void function");
                       }
                       temp = NULL;
                       
                       if (check_function_definition(((*yyvalp).function_def)) == -1)
                       {
                          yyerror("return statement different from return type");
                       }
                       printf("func\n");
                   }
#line 2295 "parser.tab.c"
    break;

  case 92:
#line 758 "parser.y"
                               {
             ((*yyvalp).param) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.param); 
         }
#line 2303 "parser.tab.c"
    break;

  case 93:
#line 761 "parser.y"
                       {
             ((*yyvalp).param) = NULL;
         }
#line 2311 "parser.tab.c"
    break;

  case 94:
#line 766 "parser.y"
                                                       {
                    ((*yyvalp).param) = add_parameter_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2319 "parser.tab.c"
    break;

  case 95:
#line 769 "parser.y"
                              {
                      ((*yyvalp).param) = create_parameter_node();
                      ((*yyvalp).param) = add_parameter_node(((*yyvalp).param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2328 "parser.tab.c"
    break;

  case 96:
#line 775 "parser.y"
                             {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2339 "parser.tab.c"
    break;

  case 97:
#line 781 "parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_BOOL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2350 "parser.tab.c"
    break;

  case 98:
#line 787 "parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_CHAR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2361 "parser.tab.c"
    break;

  case 99:
#line 795 "parser.y"
                                               {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                }
#line 2369 "parser.tab.c"
    break;

  case 100:
#line 798 "parser.y"
                                                  {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                }
#line 2377 "parser.tab.c"
    break;

  case 101:
#line 801 "parser.y"
                            {
                    ((*yyvalp).expression) = NULL;
                }
#line 2385 "parser.tab.c"
    break;

  case 102:
#line 806 "parser.y"
                                                                         {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 2410 "parser.tab.c"
    break;

  case 103:
#line 828 "parser.y"
                                                                           {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }
                    
                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 2435 "parser.tab.c"
    break;

  case 104:
#line 850 "parser.y"
                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                    {
                        if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                        {
                            yyerror("not a function");
                        }

                        ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                        if(check_function_call(((*yyvalp).function_call)) == -1)
                        {
                            yyerror("wrong paramters for the function");
                        }
                    }
                    else 
                    {
                        yyerror("function not defined");
                    }
                    printf("function call\n");
                    }
#line 2460 "parser.tab.c"
    break;

  case 105:
#line 872 "parser.y"
                                                                           {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) != NULL)
                {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    ((*yyvalp).function_call) = create_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.arguments));
                    if(check_function_call(((*yyvalp).function_call)) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
#line 2485 "parser.tab.c"
    break;

  case 106:
#line 894 "parser.y"
                                                                                 {
                            ((*yyvalp).arguments) = add_argument_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 2493 "parser.tab.c"
    break;

  case 107:
#line 897 "parser.y"
                                                  {
                            ((*yyvalp).arguments) = create_argument_node();
                            ((*yyvalp).arguments) = add_argument_node(((*yyvalp).arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 2502 "parser.tab.c"
    break;

  case 108:
#line 901 "parser.y"
                                      {
                            ((*yyvalp).arguments) = NULL;
                        }
#line 2510 "parser.tab.c"
    break;

  case 109:
#line 906 "parser.y"
                                               {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 2518 "parser.tab.c"
    break;

  case 110:
#line 909 "parser.y"
                                            {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 2526 "parser.tab.c"
    break;

  case 111:
#line 915 "parser.y"
                                                        {
                        ((*yyvalp).print_string_function_call) = create_print_string_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.string), 0);
                    }
#line 2534 "parser.tab.c"
    break;

  case 112:
#line 920 "parser.y"
                                                                     {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 2542 "parser.tab.c"
    break;

  case 113:
#line 923 "parser.y"
                                                                    {
                            ((*yyvalp).print_expression_function_call) = create_print_expression_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 2550 "parser.tab.c"
    break;


#line 2554 "parser.tab.c"

      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YY_FPRINTF ((stderr, "%s unresolved", yymsg));
          else
            YY_FPRINTF ((stderr, "%s incomplete", yymsg));
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yyn) \
  0

/** The action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline int
yygetLRActions (yyStateNum yystate, yySymbol yytoken, const short** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyisDefaultedState (yystate)
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyconflicts = yyconfl;
      return -yydefact[yystate];
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return yytable[yyindex];
    }
  else
    {
      *yyconflicts = yyconfl + yyconflp[yyindex];
      return 0;
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, ptrdiff_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YY_ASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates
    = YY_CAST (yyGLRState**,
               YYMALLOC (YY_CAST (size_t, yyset->yycapacity)
                         * sizeof yyset->yystates[0]));
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds
    = YY_CAST (yybool*,
               YYMALLOC (YY_CAST (size_t, yyset->yycapacity)
                         * sizeof yyset->yylookaheadNeeds[0]));
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  memset (yyset->yylookaheadNeeds,
          0,
          YY_CAST (size_t, yyset->yycapacity) * sizeof yyset->yylookaheadNeeds[0]);
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, ptrdiff_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (size_t, yysize)
                         * sizeof yystackp->yynextFree[0]));
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE)                   \
  &((YYTOITEMS)                                                         \
    - ((YYFROMITEMS) - YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX))))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  ptrdiff_t yynewSize;
  ptrdiff_t yyn;
  ptrdiff_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems
    = YY_CAST (yyGLRStackItem*,
               YYMALLOC (YY_CAST (size_t, yynewSize)
                         * sizeof yynewItems[0]));
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*YY_REINTERPRET_CAST (yybool *, yyp0))
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YY_DPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  ptrdiff_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            YY_DPRINTF ((stderr, "Removing dead stacks.\n"));
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            YY_DPRINTF ((stderr, "Rename stack %ld -> %ld.\n",
                        YY_CAST (long, yyi), YY_CAST (long, yyj)));
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, ptrdiff_t yyk, yyStateNum yylrState,
            ptrdiff_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, ptrdiff_t yyk, yyStateNum yylrState,
                 ptrdiff_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YY_ASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
  do {                                  \
    if (yydebug)                        \
      yy_reduce_print Args;             \
  } while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (yybool yynormal, yyGLRStackItem* yyvsp, ptrdiff_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YY_FPRINTF ((stderr, "Reducing stack %ld by rule %d (line %d):\n",
               YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule]));
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YY_FPRINTF ((stderr, "   $%d = ", yyi + 1));
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval                       );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YY_FPRINTF ((stderr, " (unresolved)"));
      YY_FPRINTF ((stderr, "\n"));
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, ptrdiff_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs
        = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yytops.yystates[yyk]);
      YY_ASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((yytrue, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yyGLRState* yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      int yyi;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((yyfalse, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, ptrdiff_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  ptrdiff_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        YY_DPRINTF ((stderr,
                     "Parse on stack %ld rejected by rule %d (line %d).\n",
                     YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1]));
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      ptrdiff_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YY_ASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YY_DPRINTF ((stderr,
                   "Reduced stack %ld by rule %d (line %d); action deferred.  "
                   "Now in state %d.\n",
                   YY_CAST (long, yyk), yyrule - 1, yyrline[yyrule - 1],
                   yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YY_DPRINTF ((stderr, "Merging stack %ld into stack %ld.\n",
                                 YY_CAST (long, yyk), YY_CAST (long, yyi)));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static ptrdiff_t
yysplitStack (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YY_ASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yycapacity <= yystackp->yytops.yysize)
    {
      ptrdiff_t state_size = sizeof yystackp->yytops.yystates[0];
      ptrdiff_t half_max_capacity = YYSIZEMAX / 2 / state_size;
      if (half_max_capacity < yystackp->yytops.yycapacity)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      {
        yyGLRState** yynewStates
          = YY_CAST (yyGLRState**,
                     YYREALLOC (yystackp->yytops.yystates,
                                (YY_CAST (size_t, yystackp->yytops.yycapacity)
                                 * sizeof yynewStates[0])));
        if (yynewStates == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yystates = yynewStates;
      }

      {
        yybool* yynewLookaheadNeeds
          = YY_CAST (yybool*,
                     YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                                (YY_CAST (size_t, yystackp->yytops.yycapacity)
                                 * sizeof yynewLookaheadNeeds[0])));
        if (yynewLookaheadNeeds == YY_NULLPTR)
          yyMemoryExhausted (yystackp);
        yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
      }
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       0 < yyn;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YY_ASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, empty>\n",
                 yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1));
  else
    YY_FPRINTF ((stderr, "%*s%s -> <Rule %d, tokens %ld .. %ld>\n",
                 yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
                 yyx->yyrule - 1, YY_CAST (long, yys->yyposn + 1),
                 YY_CAST (long, yyx->yystate->yyposn)));
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YY_FPRINTF ((stderr, "%*s%s <empty>\n", yyindent+2, "",
                         yytokenName (yystos[yystates[yyi]->yylrState])));
          else
            YY_FPRINTF ((stderr, "%*s%s <tokens %ld .. %ld>\n", yyindent+2, "",
                         yytokenName (yystos[yystates[yyi]->yylrState]),
                         YY_CAST (long, yystates[yyi-1]->yyposn + 1),
                         YY_CAST (long, yystates[yyi]->yyposn)));
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YY_FPRINTF ((stderr, "Ambiguity detected.\n"));
  YY_FPRINTF ((stderr, "Option 1,\n"));
  yyreportTree (yyx0, 2);
  YY_FPRINTF ((stderr, "\nOption 2,\n"));
  yyreportTree (yyx1, 2);
  YY_FPRINTF ((stderr, "\n"));
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YY_ASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = YY_REINTERPRET_CAST (yyGLRStackItem*, yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, ptrdiff_t yyk,
                   ptrdiff_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YY_DPRINTF ((stderr, "Stack %ld Entering state %d\n",
                   YY_CAST (long, yyk), yystate));

      YY_ASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YY_DPRINTF ((stderr,
                           "Stack %ld dies "
                           "(predicate failure or explicit user error).\n",
                           YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken = yygetToken (&yychar);
          const short* yyconflicts;
          const int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              ptrdiff_t yynewStack = yysplitStack (yystackp, yyk);
              YY_DPRINTF ((stderr, "Splitting off stack %ld from %ld.\n",
                           YY_CAST (long, yynewStack), YY_CAST (long, yyk)));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yynewStack)));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YY_DPRINTF ((stderr, "Stack %ld dies.\n", YY_CAST (long, yyk)));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YY_DPRINTF ((stderr,
                               "Stack %ld dies "
                               "(predicate failure or explicit user error).\n",
                               YY_CAST (long, yyk)));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  ptrdiff_t yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      ptrdiff_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
      yysize = yysize0;
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  ptrdiff_t yysz = yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  if (YYSIZEMAX - yysize < yysz)
                    yysize_overflow = yytrue;
                  else
                    yysize += yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    ptrdiff_t yysz = YY_CAST (ptrdiff_t, strlen (yyformat)) - 2 * yycount + 1;
    if (YYSIZEMAX - yysize < yysz)
      yysize_overflow = yytrue;
    else
      yysize += yysz;
  }

  if (!yysize_overflow)
    yymsg = YY_CAST (char *, YYMALLOC (YY_CAST (size_t, yysize)));

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              ++yyp;
              ++yyformat;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        int yyj;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
            yychar = YYEMPTY;
          }
        yytoken = yygetToken (&yychar);
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  {
    ptrdiff_t yyk;
    for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
      if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
        break;
    if (yyk >= yystackp->yytops.yysize)
      yyFail (yystackp, YY_NULLPTR);
    for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
      yymarkStackDeleted (yystackp, yyk);
    yyremoveDeletes (yystackp);
    yycompressStack (yystackp);
  }

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      int yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              int yyaction = yytable[yyj];
              YY_SYMBOL_PRINT ("Shifting", yystos[yyaction],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yyaction,
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  ptrdiff_t yyposn;

  YY_DPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YY_DPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyRuleNum yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {
                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken = yygetToken (&yychar);
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          ptrdiff_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              const short* yyconflicts;
              int yyaction = yygetLRActions (yystate, yytoken_to_shift,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YY_DPRINTF ((stderr, "On stack %ld, ", YY_CAST (long, yys)));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YY_DPRINTF ((stderr, "Stack %ld now in state #%d\n",
                           YY_CAST (long, yys),
                           yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YY_DPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YY_ASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          ptrdiff_t yysize = yystack.yytops.yysize;
          ptrdiff_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YY_FPRINTF ((stderr, " -> "));
    }
  YY_FPRINTF ((stderr, "%d@%ld", yys->yylrState, YY_CAST (long, yys->yyposn)));
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YY_FPRINTF ((stderr, "<null>"));
  else
    yy_yypstack (yyst);
  YY_FPRINTF ((stderr, "\n"));
}

static void
yypstack (yyGLRStack* yystackp, ptrdiff_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

static void
yypdumpstack (yyGLRStack* yystackp)
{
#define YYINDEX(YYX)                                                    \
  YY_CAST (long,                                                        \
           ((YYX)                                                       \
            ? YY_REINTERPRET_CAST (yyGLRStackItem*, (YYX)) - yystackp->yyitems \
            : -1))

  yyGLRStackItem* yyp;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YY_FPRINTF ((stderr, "%3ld. ",
                   YY_CAST (long, yyp - yystackp->yyitems)));
      if (*YY_REINTERPRET_CAST (yybool *, yyp))
        {
          YY_ASSERT (yyp->yystate.yyisState);
          YY_ASSERT (yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Res: %d, LR State: %d, posn: %ld, pred: %ld",
                       yyp->yystate.yyresolved, yyp->yystate.yylrState,
                       YY_CAST (long, yyp->yystate.yyposn),
                       YYINDEX (yyp->yystate.yypred)));
          if (! yyp->yystate.yyresolved)
            YY_FPRINTF ((stderr, ", firstVal: %ld",
                         YYINDEX (yyp->yystate.yysemantics.yyfirstVal)));
        }
      else
        {
          YY_ASSERT (!yyp->yystate.yyisState);
          YY_ASSERT (!yyp->yyoption.yyisState);
          YY_FPRINTF ((stderr, "Option. rule: %d, state: %ld, next: %ld",
                       yyp->yyoption.yyrule - 1,
                       YYINDEX (yyp->yyoption.yystate),
                       YYINDEX (yyp->yyoption.yynext)));
        }
      YY_FPRINTF ((stderr, "\n"));
    }

  YY_FPRINTF ((stderr, "Tops:"));
  {
    ptrdiff_t yyi;
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      YY_FPRINTF ((stderr, "%ld: %ld; ", YY_CAST (long, yyi),
                   YYINDEX (yystackp->yytops.yystates[yyi])));
    YY_FPRINTF ((stderr, "\n"));
  }
#undef YYINDEX
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 931 "parser.y"
