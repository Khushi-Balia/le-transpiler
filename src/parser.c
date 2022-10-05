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
#line 1 "src/parser.y"

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

#line 78 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"

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

#include "parser.h"

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
#define YYFINAL  117
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   691

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  298
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYMAXUTOK -- Last valid token number (for yychar).  */
#define YYMAXUTOK   324
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   142,   142,   147,   151,   156,   159,   164,   169,   173,
     179,   183,   186,   189,   192,   195,   198,   201,   204,   207,
     210,   213,   216,   219,   222,   225,   228,   231,   234,   237,
     240,   243,   246,   251,   262,   273,   284,   295,   306,   317,
     327,   337,   349,   361,   373,   385,   397,   409,   423,   436,
     458,   480,   502,   524,   548,   567,   586,   607,   626,   647,
     668,   671,   674,   677,   694,   711,   728,   745,   762,   765,
     768,   771,   774,   777,   784,   787,   790,   793,   796,   799,
     802,   805,   808,   811,   817,   820,   837,   840,   843,   846,
     849,   854,   857,   860,   863,   866,   869,   874,   877,   880,
     885,   891,   895,   900,   904,   909,   909,   917,   920,   923,
     928,   934,   934,   958,   958,   982,   982,  1006,  1006,  1032,
    1035,  1040,  1043,  1049,  1055,  1061,  1069,  1072,  1075,  1080,
    1102,  1124,  1146,  1168,  1171,  1175,  1180,  1183,  1188,  1188,
    1207,  1212,  1215,  1219,  1224,  1229
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
  "OPR_ASSIGNMENT", "DT_INT", "DT_INT_P", "DT_BOOL", "DT_VOID", "DT_CHAR",
  "DT_FLOAT", "DT_COMP", "DT_UNDEF", "MT_SQUARE", "MT_EXP", "MT_SIN",
  "MT_COS", "MT_TAN", "MT_LOG", "MT_COMP", "AMP", "COLON", "COMMA",
  "KW_IF", "KW_ELIF", "KW_ELSE", "KW_FOR", "KW_IN", "KW_WHILE", "KW_BREAK",
  "KW_CONTINUE", "KW_RETURN", "KW_DEF", "KW_PRINT", "CONST_INT",
  "CONST_CHAR", "CONST_FLOAT", "CONST_BOOL", "CONST_STRING", "IDENTIFIER",
  "INT_IDENTIFIER", "BOOL_IDENTIFIER", "CHAR_IDENTIFIER",
  "FLOAT_IDENTIFIER", "COMP_IDENTIFIER", "VOID_IDENTIFIER",
  "INT_ARR_IDENTIFIER", "CHAR_ARR_IDENTIFIER", "BOOL_ARR_IDENTIFIER",
  "INT_P_IDENTIFIER", "$accept", "start", "translation_unit", "program",
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
  "function_call_datatypes", "pointer_expression", "print_string_call",
  "print_expression_int_call", "print_expression_float_call",
  "print_expression_complex_call", "print_expression_intp_call", YY_NULLPTR
};
#endif

#define YYPACT_NINF (-130)
#define YYTABLE_NINF (-140)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     293,   396,   -39,    -1,    25,    33,    38,    49,    30,   139,
     151,   154,   156,   170,   171,   123,   485,   125,   485,  -130,
    -130,   527,   129,   187,  -130,  -130,  -130,    17,    39,    46,
     178,   183,   213,   212,   231,   233,  -130,   237,   293,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,   450,
    -130,  -130,  -130,  -130,  -130,   160,  -130,   239,  -130,  -130,
    -130,  -130,  -130,  -130,   347,  -130,    58,   222,    72,    74,
     243,   256,   564,   564,   564,   564,   564,   564,   200,  -130,
     485,   485,  -130,   276,   278,   279,  -130,  -130,   290,   308,
     309,  -130,   594,     9,  -130,  -130,  -130,  -130,  -130,  -130,
      27,   594,   116,   280,   443,   485,   564,   485,   485,   485,
     564,   564,   564,   485,   564,   564,   564,  -130,  -130,   564,
     564,   564,   564,   564,   564,  -130,  -130,   564,   564,   564,
     564,   485,   564,   564,   564,   564,    82,   152,   292,   346,
     467,   509,   275,   133,  -130,   564,   564,   564,   564,   564,
     564,   564,   564,   564,   485,   485,   322,   287,   322,   508,
     329,    18,   331,   332,   334,   195,   363,   594,   116,    -3,
    -130,   450,     3,   116,     4,   450,   450,   450,    19,   551,
     617,   624,   473,    -9,    -9,  -130,  -130,  -130,   632,   450,
     450,   639,   116,   647,   450,   450,   450,  -130,  -130,  -130,
    -130,  -130,  -130,   307,  -130,   654,   662,   669,   450,   450,
     450,   450,   450,   450,   361,  -130,  -130,    -7,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
     485,  -130,  -130,  -130,   351,   355,   364,  -130,  -130,   365,
     385,  -130,  -130,  -130,   110,   564,   214,   322,   353,   376,
     377,   378,  -130,   564,   564,   485,   348,  -130,   485,   379,
    -130,   450,   564,  -130,    66,    66,    66,    66,   450,   450,
     116,  -130,    77,   322,   230,   333,   345,   369,   322,   382,
    -130,   322,   322,   322,   322,  -130,   564,  -130,  -130,  -130,
    -130,    66,  -130,  -130,  -130,  -130,   450,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
      22,   128,     0,     0,    60,    62,    61,    63,     0,     0,
      64,    65,     0,     0,     0,     0,    67,     0,     2,     3,
      10,     5,    11,    12,    13,    14,    15,    16,    68,    17,
      18,    19,    20,     6,    28,    29,    30,    31,    32,    23,
      24,    25,    26,    27,     0,     8,    33,    34,    37,    38,
      35,    36,     0,     0,     0,     0,     0,     0,     0,    66,
       0,     0,    84,    63,    85,     0,    64,    65,     0,     0,
       0,    86,     0,     0,    87,    88,    82,    89,    83,   105,
       0,   127,   126,     0,   138,   135,     0,   135,     0,   135,
       0,     0,     0,   135,     0,     0,     0,     1,     4,     0,
       0,     0,     0,     0,     0,     7,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,    65,    67,     0,     0,   136,   137,     0,
     134,    49,     0,    52,     0,    53,    50,    51,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    81,     0,    42,
      43,     0,    46,     0,    47,    44,    45,    74,    75,    76,
      77,    78,    79,     0,    90,     0,     0,     0,    93,    94,
      91,    92,    95,    96,    99,    98,   102,     0,   110,   111,
     113,   117,   115,   140,   141,   143,   144,   142,   145,   129,
       0,   130,   131,   132,    57,    58,     0,    39,    41,    40,
       0,    57,    58,    59,   104,     0,     0,     0,     0,     0,
       0,     0,   133,     0,     0,     0,     0,    80,     0,     0,
     100,   107,     0,   106,   120,   120,   120,   120,    54,    55,
      56,    48,     0,     0,   108,     0,     0,     0,     0,   119,
     122,     0,     0,     0,     0,   103,     0,   123,   124,   125,
     112,     0,   114,   118,   116,   101,   109,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   367,  -116,  -130,     7,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,     0,   -14,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -129,  -130,   146,  -130,     5,    14,    16,  -130,   -24,
     208,  -130,  -130,  -130,  -130,  -130,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,    39,    40,    64,    41,    42,    43,    44,
      45,    46,    47,    48,    91,    92,   168,    94,    95,    50,
     244,   260,    51,   157,   247,    52,    53,   248,   249,   251,
     250,   278,   279,   280,    54,    96,    97,    98,    58,   169,
     170,   166,    59,    60,    61,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      49,    49,    93,   229,   100,    55,    55,   102,    65,   231,
     232,   122,   123,   124,    56,    56,    57,    57,   154,   155,
      66,   101,   105,   105,   224,   233,     8,     9,    10,    11,
      12,    13,    14,    15,   245,    72,   154,   155,    49,   230,
     216,   106,   218,    55,   107,   230,   230,    24,    25,    26,
     156,   109,    56,    83,    57,    85,    86,    87,    67,    88,
      89,   230,    36,   108,    49,   127,   143,   144,   158,    55,
     110,   126,   136,   137,   138,   139,   140,   141,    56,   130,
      57,   132,   128,   172,    68,   174,   154,   155,   197,   178,
     165,   275,    69,   276,   173,   277,   131,    70,   133,   119,
     120,   121,   122,   123,   124,   167,   171,   167,    71,   167,
     175,   176,   177,   167,   179,   180,   181,   192,   284,   182,
     183,   184,   185,   186,   187,   154,   155,   188,   189,   190,
     191,   263,   193,   194,   195,   196,   281,   282,   283,   204,
     214,   215,   154,   155,    73,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   258,   259,    74,   285,   198,    75,
     -29,    76,   290,   -29,   -29,   292,   293,   294,   295,   119,
     120,   121,   122,   123,   124,    77,    78,   -82,   -82,   -82,
     -82,   -82,   -82,    79,    99,   -29,   -29,   -29,   103,   -29,
     -29,   -29,   104,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   227,   111,   -29,   154,   155,   -29,   112,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   246,   113,   114,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     167,   119,   120,   121,   122,   123,   124,   117,   115,   -31,
     116,   270,   -31,   -31,   272,   261,   129,   119,   120,   121,
     122,   123,   124,   268,   269,   262,   -83,   -83,   -83,   -83,
     -83,   -83,   274,   142,   -31,   -31,   -31,   134,   -31,   -31,
     -31,   286,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     135,   105,   -31,   107,   109,   -31,   296,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,     1,   145,   199,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   119,
     120,   121,   122,   123,   124,   146,   147,   203,     2,     3,
       4,   159,     5,     6,     7,     1,     8,     9,    10,    11,
      12,    13,    14,    15,   217,   223,    16,   225,   226,    17,
    -139,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       1,   125,   200,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   119,   120,   121,   122,   123,   124,   228,
     240,   155,     2,     3,     4,   253,     5,     6,     7,   254,
       8,     9,    10,    11,    12,    13,    14,    15,   255,   256,
      16,   257,   287,    17,   264,    18,    19,    20,    21,     1,
      23,    24,    25,    26,   288,   118,   271,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,   265,   266,   267,
     273,     2,     3,     4,   291,     5,     6,     7,   289,     8,
       9,    10,    11,    12,    13,    14,    15,   297,   252,    16,
       0,     0,    17,     0,    18,    19,    20,    21,    80,    23,
      24,    25,    26,     0,     0,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    81,   119,   120,   121,
     122,   123,   124,   201,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,   119,   120,   121,   122,   123,   124,
      80,   120,   121,   122,   123,   124,     0,    24,    25,    26,
      82,   160,     0,   161,    84,    85,   162,   163,    81,    88,
      89,    90,   164,     0,     0,   202,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,   119,   120,   121,   122,
     123,   124,    80,   219,     0,   220,   221,   222,     0,    24,
      25,    26,    82,     0,     0,    83,    84,    85,    86,    87,
      81,    88,    89,    90,    36,     0,     0,     0,     0,   234,
       8,     9,    10,    11,    12,    13,    14,    15,   119,   120,
     121,   122,   123,   124,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    82,     0,     0,    83,    84,    85,
      86,    87,     0,    88,    89,    90,    36,     8,     9,    10,
      11,    12,    13,    14,    15,   148,   149,   150,   151,   152,
     153,   119,   120,   121,   122,   123,   124,     0,    24,    25,
      26,     0,     0,     0,    83,   235,    85,    86,    87,     0,
      88,    89,   236,    36,   119,   120,   121,   122,   123,   124,
     237,   119,   120,   121,   122,   123,   124,   238,     0,   119,
     120,   121,   122,   123,   124,   239,   119,   120,   121,   122,
     123,   124,   241,     0,   119,   120,   121,   122,   123,   124,
     242,   119,   120,   121,   122,   123,   124,   243,     0,   119,
     120,   121,   122,   123,   124,     0,   119,   120,   121,   122,
     123,   124
};

static const yytype_int16 yycheck[] =
{
       0,     1,    16,     6,    18,     0,     1,    21,     1,     6,
       6,    20,    21,    22,     0,     1,     0,     1,     9,    10,
      59,    21,     5,     5,     6,     6,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     5,     9,    10,    38,    42,
     156,    24,   158,    38,     5,    42,    42,    54,    55,    56,
      41,     5,    38,    60,    38,    62,    63,    64,    59,    66,
      67,    42,    69,    24,    64,     7,    80,    81,    41,    64,
      24,    64,    72,    73,    74,    75,    76,    77,    64,     7,
      64,     7,    24,   107,    59,   109,     9,    10,     6,   113,
     104,    25,    59,    27,   108,    29,    24,    59,    24,    17,
      18,    19,    20,    21,    22,   105,   106,   107,    59,   109,
     110,   111,   112,   113,   114,   115,   116,   131,    41,   119,
     120,   121,   122,   123,   124,     9,    10,   127,   128,   129,
     130,   247,   132,   133,   134,   135,   265,   266,   267,     6,
     154,   155,     9,    10,     5,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    44,    45,     5,   273,     6,     5,
       0,     5,   278,     3,     4,   281,   282,   283,   284,    17,
      18,    19,    20,    21,    22,     5,     5,    17,    18,    19,
      20,    21,    22,    60,    59,    25,    26,    27,    59,    29,
      30,    31,     5,    33,    34,    35,    36,    37,    38,    39,
      40,     6,    24,    43,     9,    10,    46,    24,    48,    49,
      50,    51,    52,    53,    54,    55,    56,   217,     5,     7,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
     230,    17,    18,    19,    20,    21,    22,     0,     7,     0,
       7,   255,     3,     4,   258,   245,    24,    17,    18,    19,
      20,    21,    22,   253,   254,    41,    17,    18,    19,    20,
      21,    22,   262,    63,    25,    26,    27,    24,    29,    30,
      31,    41,    33,    34,    35,    36,    37,    38,    39,    40,
      24,     5,    43,     5,     5,    46,   286,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     3,     7,     6,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    17,
      18,    19,    20,    21,    22,     7,     7,    42,    25,    26,
      27,    41,    29,    30,    31,     3,    33,    34,    35,    36,
      37,    38,    39,    40,    47,     6,    43,     6,     6,    46,
       6,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,     4,     6,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    17,    18,    19,    20,    21,    22,     6,
      63,    10,    25,    26,    27,    24,    29,    30,    31,    24,
      33,    34,    35,    36,    37,    38,    39,    40,    24,    24,
      43,     6,    59,    46,    41,    48,    49,    50,    51,     3,
      53,    54,    55,    56,    59,    38,    58,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    41,    41,    41,
      41,    25,    26,    27,    42,    29,    30,    31,    59,    33,
      34,    35,    36,    37,    38,    39,    40,   291,   230,    43,
      -1,    -1,    46,    -1,    48,    49,    50,    51,     5,    53,
      54,    55,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    23,    17,    18,    19,
      20,    21,    22,     6,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    17,    18,    19,    20,    21,    22,
       5,    18,    19,    20,    21,    22,    -1,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    23,    66,
      67,    68,    69,    -1,    -1,     6,    -1,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    17,    18,    19,    20,
      21,    22,     5,    25,    -1,    27,    28,    29,    -1,    54,
      55,    56,    57,    -1,    -1,    60,    61,    62,    63,    64,
      23,    66,    67,    68,    69,    -1,    -1,    -1,    -1,     8,
      33,    34,    35,    36,    37,    38,    39,    40,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    69,    33,    34,    35,
      36,    37,    38,    39,    40,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    54,    55,
      56,    -1,    -1,    -1,    60,     8,    62,    63,    64,    -1,
      66,    67,     8,    69,    17,    18,    19,    20,    21,    22,
       8,    17,    18,    19,    20,    21,    22,     8,    -1,    17,
      18,    19,    20,    21,    22,     8,    17,    18,    19,    20,
      21,    22,     8,    -1,    17,    18,    19,    20,    21,    22,
       8,    17,    18,    19,    20,    21,    22,     8,    -1,    17,
      18,    19,    20,    21,    22,    -1,    17,    18,    19,    20,
      21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    27,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    43,    46,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    71,    72,    73,
      74,    76,    77,    78,    79,    80,    81,    82,    83,    85,
      89,    92,    95,    96,   104,   105,   106,   107,   108,   112,
     113,   114,   115,   116,    75,    76,    59,    59,    59,    59,
      59,    59,     5,     5,     5,     5,     5,     5,     5,    60,
       5,    23,    57,    60,    61,    62,    63,    64,    66,    67,
      68,    84,    85,    86,    87,    88,   105,   106,   107,    59,
      86,    85,    86,    59,     5,     5,    24,     5,    24,     5,
      24,    24,    24,     5,     7,     7,     7,     0,    73,    17,
      18,    19,    20,    21,    22,     4,    76,     7,    24,    24,
       7,    24,     7,    24,    24,    24,    85,    85,    85,    85,
      85,    85,    63,    86,    86,     7,     7,     7,    11,    12,
      13,    14,    15,    16,     9,    10,    41,    93,    41,    41,
      58,    60,    63,    64,    69,    86,   111,    85,    86,   109,
     110,    85,   109,    86,   109,    85,    85,    85,   109,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    85,    85,    85,    85,     6,     6,     6,
       6,     6,     6,    42,     6,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    74,    47,    74,    25,
      27,    28,    29,     6,     6,     6,     6,     6,     6,     6,
      42,     6,     6,     6,     8,     8,     8,     8,     8,     8,
      63,     8,     8,     8,    90,    41,    85,    94,    97,    98,
     100,    99,   110,    24,    24,    24,    24,     6,    44,    45,
      91,    85,    41,    74,    41,    41,    41,    41,    85,    85,
      86,    58,    86,    41,    85,    25,    27,    29,   101,   102,
     103,   101,   101,   101,    41,    74,    41,    59,    59,    59,
      74,    42,    74,    74,    74,    74,    85,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    80,    81,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      89,    90,    90,    91,    91,    93,    92,    94,    94,    94,
      95,    97,    96,    98,    96,    99,    96,   100,    96,   101,
     101,   102,   102,   103,   103,   103,   104,   104,   104,   105,
     106,   107,   108,   109,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     5,
       5,     5,     4,     4,     4,     4,     4,     4,     7,     3,
       3,     3,     3,     3,     6,     6,     6,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       6,     5,     0,     3,     0,     0,     6,     2,     3,     5,
       4,     0,     8,     0,     8,     0,     8,     0,     8,     1,
       0,     3,     1,     2,     2,     2,     2,     2,     1,     4,
       4,     4,     4,     3,     1,     0,     1,     1,     0,     1,
       4,     4,     4,     4,     4,     4
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
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
      41,     0,     0,    43,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    49,    51,     0,    53,
      55,    57,     0,    59,    61,    63,    65,    67,    69,    71,
      73,     0,     0,    75,     0,     0,    77,     0,    79,    81,
      83,    85,    87,    89,    91,    93,    95,     0,     0,     0,
      97,    99,   101,   103,   105,   107,   109,   111,   113,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   119,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   125,   127,     0,   129,   131,
     133,     0,   135,   137,   139,   141,   143,   145,   147,   149,
       0,     0,   151,     0,     0,   153,     0,   155,   157,   159,
     161,   163,   165,   167,   169,   171,     0,     0,     0,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   191,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     3,     5,     7,     9,    11,    13,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    19,    21,     0,     0,     0,    23,    25,    27,
      29,    31,     0,    33,    35,    37,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short yyconfl[] =
{
       0,   128,     0,   128,     0,   128,     0,   128,     0,   128,
       0,   128,     0,   128,     0,   128,     0,   128,     0,   128,
       0,   128,     0,   128,     0,   128,     0,   128,     0,   128,
       0,   128,     0,   128,     0,   128,     0,   128,     0,   128,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    82,     0,    82,
       0,    82,     0,    82,     0,    82,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0,    83,     0,    83,     0,    83,     0,    83,
       0,    83,     0
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
#line 142 "src/parser.y"
                        {
        ast = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node);
     }
#line 1373 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 3:
#line 147 "src/parser.y"
                          {
                    ((*yyvalp).node) = create_translation_unit();
                    ((*yyvalp).node) = add_program_unit(((*yyvalp).node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1382 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 4:
#line 151 "src/parser.y"
                                               {
                    ((*yyvalp).node) = add_program_unit((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.node), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.node));
                }
#line 1390 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 5:
#line 156 "src/parser.y"
                   {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements);     
       }
#line 1398 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 6:
#line 159 "src/parser.y"
                             {
        ((*yyvalp).node) = (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_def);
       }
#line 1406 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 7:
#line 164 "src/parser.y"
                                                 {
                    ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement);
                  }
#line 1414 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 8:
#line 169 "src/parser.y"
                          {
                ((*yyvalp).compound_statement) = create_compound_statement_node();
                ((*yyvalp).compound_statement) = add_compound_statement_node(((*yyvalp).compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements));
              }
#line 1423 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 9:
#line 173 "src/parser.y"
                                         {
                  ((*yyvalp).compound_statement)  = add_compound_statement_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.statements));
              }
#line 1431 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 10:
#line 179 "src/parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_COMPOUND_STATEMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
         }
#line 1439 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 11:
#line 183 "src/parser.y"
                     {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration)); 
         }
#line 1447 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 12:
#line 186 "src/parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1455 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 13:
#line 189 "src/parser.y"
                                  {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.declaration));
         }
#line 1463 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 14:
#line 192 "src/parser.y"
                                        {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_DECLARATION, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_declaration));
         }
#line 1471 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 15:
#line 195 "src/parser.y"
                      {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.assignment));
         }
#line 1479 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 16:
#line 198 "src/parser.y"
                            {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_ARRAY_ASSIGNMENT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_assignment));
         }
#line 1487 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 17:
#line 201 "src/parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_CONSTANT, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
         }
#line 1495 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 18:
#line 204 "src/parser.y"
                                 {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_CONDITIONAL_IF, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.conditional_if));
         }
#line 1503 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 19:
#line 207 "src/parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_FOR, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_for));
         }
#line 1511 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 20:
#line 210 "src/parser.y"
                                {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_WHILE, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.loop_while));
         }
#line 1519 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 21:
#line 213 "src/parser.y"
                    {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_BREAK, (void*)create_loop_control_node(AST_NODE_LOOP_BREAK));
         }
#line 1527 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 22:
#line 216 "src/parser.y"
                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_LOOP_CONTINUE, (void*)create_loop_control_node(AST_NODE_LOOP_CONTINUE));
         }
#line 1535 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 23:
#line 219 "src/parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_STRING_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_string_function_call));
         }
#line 1543 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 24:
#line 222 "src/parser.y"
                                     {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_INT_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_expression_int_function_call));
         }
#line 1551 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 25:
#line 225 "src/parser.y"
                                       {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_FLOAT_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_expression_float_function_call));
         }
#line 1559 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 26:
#line 228 "src/parser.y"
                                         {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_COMPLEX_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_expression_complex_function_call));
         }
#line 1567 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 27:
#line 231 "src/parser.y"
                                      {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_PRINT_EXP_INTP_FUNCTION_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.print_expression_intp_function_call));
         }
#line 1575 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 28:
#line 234 "src/parser.y"
                            {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_RETURN, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
         }
#line 1583 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 29:
#line 237 "src/parser.y"
                             {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1591 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 30:
#line 240 "src/parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1599 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 31:
#line 243 "src/parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1607 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 32:
#line 246 "src/parser.y"
                              {
             ((*yyvalp).statements) = create_statement_node(AST_NODE_FUNC_CALL, (void*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call));
         }
#line 1615 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 33:
#line 251 "src/parser.y"
                               { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("int %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1631 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 34:
#line 262 "src/parser.y"
                                 { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER_P;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("int* %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1647 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 35:
#line 273 "src/parser.y"
                                 { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_FLOAT_;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("float %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1663 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 36:
#line 284 "src/parser.y"
                                { 
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_COMP_;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("complex %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1679 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 37:
#line 295 "src/parser.y"
                                {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);

               printf ("bool %s ;\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->identifier);
           }
#line 1695 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 38:
#line 306 "src/parser.y"
                                {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle), NULL);
           }
#line 1709 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 39:
#line 317 "src/parser.y"
                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1724 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 40:
#line 327 "src/parser.y"
                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1739 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 41:
#line 337 "src/parser.y"
                                                                           {
                    if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                    {
                        yyerror("variable already defined");
                    }

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value;
                    ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), NULL);
                }
#line 1754 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 42:
#line 349 "src/parser.y"
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
#line 1771 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 43:
#line 361 "src/parser.y"
                                                                       {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER_P;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf ("int* %s := %d\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1788 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 44:
#line 373 "src/parser.y"
                                                                       {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_FLOAT_;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->valuef;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf ("%s := %f\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef);
            }
#line 1805 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 45:
#line 385 "src/parser.y"
                                                                      {
               if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
               {
                   yyerror("variable already defined");
               }

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_COMP_;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->valuef;
               ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf ("%s := %f\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef);
            }
#line 1822 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 46:
#line 397 "src/parser.y"
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
#line 1839 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 47:
#line 409 "src/parser.y"
                                                                      {
                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                {
                    yyerror("variable already defined");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value;
                ((*yyvalp).declaration) = create_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

                printf("*%s := %c\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->value);
            }
#line 1856 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 48:
#line 423 "src/parser.y"
                                                                                                                   {
                                if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle) == NULL)
                                {
                                    yyerror("variable already defined");
                                }

                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->array_size = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression)->value;
                                ((*yyvalp).array_declaration) = create_array_declaration_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.string));
                            }
#line 1871 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 49:
#line 436 "src/parser.y"
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
#line 1898 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 50:
#line 458 "src/parser.y"
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

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_FLOAT_;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->valuef;
               ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf("%s := %f\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef);
            }
#line 1925 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 51:
#line 480 "src/parser.y"
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

               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_COMP_;
               (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->valuef;
               ((*yyvalp).assignment) = create_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));

               printf("%s := %f\n", (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->identifier, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle)->valuef);
            }
#line 1952 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 52:
#line 502 "src/parser.y"
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
#line 1979 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 53:
#line 524 "src/parser.y"
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
#line 2006 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 54:
#line 548 "src/parser.y"
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
#line 2030 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 55:
#line 567 "src/parser.y"
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
#line 2054 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 56:
#line 586 "src/parser.y"
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

                    (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                    ((*yyvalp).array_assignment) = create_array_assignment_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                }
#line 2078 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 57:
#line 607 "src/parser.y"
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
                    yyerror("identifier is a constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INT_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2102 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 58:
#line 626 "src/parser.y"
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
                    yyerror("identifier is a constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2126 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 59:
#line 647 "src/parser.y"
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
                    yyerror("identifier is a constant, cannot assign value");
                }

                (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOL_ARR;
                ((*yyvalp).array_access) = create_array_access_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression));
            }
#line 2150 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 60:
#line 668 "src/parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), NULL, NULL);
          }
#line 2158 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 61:
#line 671 "src/parser.y"
                        {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT_F, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.floatn), NULL, NULL);
          }
#line 2166 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 62:
#line 674 "src/parser.y"
                       {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT_CHAR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), NULL, NULL);
          }
#line 2174 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 63:
#line 677 "src/parser.y"
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
#line 2196 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 64:
#line 694 "src/parser.y"
                             {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_FLOAT_)
                  {
                      ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->valuef, (ast_node*)create_variable_node(DT_FLOAT_, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
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
#line 2218 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 65:
#line 711 "src/parser.y"
                            {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_COMP_)
                  {
                      ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_COMP_, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
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
#line 2240 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 66:
#line 728 "src/parser.y"
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
#line 2262 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 67:
#line 745 "src/parser.y"
                            {
             if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_INTEGER_P)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_INTEGER_P, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
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
#line 2284 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 68:
#line 762 "src/parser.y"
                                    {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 2292 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 69:
#line 765 "src/parser.y"
                                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_BW_LFT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value << (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2300 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 70:
#line 768 "src/parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_ADD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value + (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2308 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 71:
#line 771 "src/parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value - (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2316 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 72:
#line 774 "src/parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MUL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value * (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2324 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 73:
#line 777 "src/parser.y"
                                                                {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value == 0)
              {
                  yyerror("division by 0");
              }
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_DIV, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value / (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2336 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 74:
#line 784 "src/parser.y"
                                                          {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_MT_SQUARE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->value, NULL, NULL); 
          }
#line 2344 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 75:
#line 787 "src/parser.y"
                                                       {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_MT_EXP, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->valuef, NULL, NULL); 
          }
#line 2352 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 76:
#line 790 "src/parser.y"
                                                       {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_MT_SIN, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->valuef, NULL, NULL); 
          }
#line 2360 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 77:
#line 793 "src/parser.y"
                                                       {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_MT_COS, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->valuef, NULL, NULL); 
          }
#line 2368 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 78:
#line 796 "src/parser.y"
                                                       {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_MT_TAN, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->valuef, NULL, NULL); 
          }
#line 2376 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 79:
#line 799 "src/parser.y"
                                                       {
              ((*yyvalp).expression) = create_expression_node_float(AST_NODE_ARITHMETIC_EXP, AST_MT_LOG, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression)->valuef, NULL, NULL); 
          }
#line 2384 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 80:
#line 802 "src/parser.y"
                                                                          {
            ((*yyvalp).expression) = create_expression_node_comp(AST_NODE_ARITHMETIC_EXP, AST_MT_COMP,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)->valuef,(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle)->value2, (ast_node*)create_variable_node(DT_FLOAT_, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.symbol_handle)), (ast_node*)create_variable_node(DT_FLOAT_, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle))); 
          }
#line 2392 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 81:
#line 805 "src/parser.y"
                                                                {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MOD, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value % (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2400 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 82:
#line 808 "src/parser.y"
                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2408 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 83:
#line 811 "src/parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2416 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 84:
#line 817 "src/parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_CONSTANT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.boolean), NULL, NULL);
          }
#line 2424 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 85:
#line 820 "src/parser.y"
                            {
              if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_BOOLEAN)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_BOOLEAN, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
                  }
                  else if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else
                  {
                      yyerror("int variable not allowed with bool");
                  }
              }
          }
#line 2446 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 86:
#line 837 "src/parser.y"
                                 {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_ARRAY_ACCESS, 0, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.array_access), NULL);
          }
#line 2454 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 87:
#line 840 "src/parser.y"
                                  {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 2462 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 88:
#line 843 "src/parser.y"
                               {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
          }
#line 2470 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 89:
#line 846 "src/parser.y"
                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_FUNC_CALL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call)->symbol_entry->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.function_call), NULL);
          }
#line 2478 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 90:
#line 849 "src/parser.y"
                                             {
              ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression);
          }
#line 2486 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 91:
#line 854 "src/parser.y"
                                                                          {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value > (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2494 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 92:
#line 857 "src/parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value < (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2502 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 93:
#line 860 "src/parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_EQ, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value == (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2510 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 94:
#line 863 "src/parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_NE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value != (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2518 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 95:
#line 866 "src/parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value >= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2526 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 96:
#line 869 "src/parser.y"
                                                               {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value <= (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2534 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 97:
#line 874 "src/parser.y"
                                                   {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_NOT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value ? 0 : 1, NULL, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2542 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 98:
#line 877 "src/parser.y"
                                                              {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_AND, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value & (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2550 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 99:
#line 880 "src/parser.y"
                                                             {
              ((*yyvalp).expression) = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_OR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression)->value | (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression)->value, (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (ast_node*)(YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
          }
#line 2558 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 100:
#line 885 "src/parser.y"
                                                                                                                                  {
                          printf("inside if\n");
                          ((*yyvalp).conditional_if) = create_conditional_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.compound_statement), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                     }
#line 2567 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 101:
#line 891 "src/parser.y"
                                                                                                                 {
                                 printf("inside else if\n");
                                 ((*yyvalp).conditional_else_if) = add_else_if_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.conditional_else_if), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                             }
#line 2576 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 102:
#line 895 "src/parser.y"
                                              {
                                 ((*yyvalp).conditional_else_if) = create_else_if_node();
                             }
#line 2584 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 103:
#line 900 "src/parser.y"
                                                             {
                              printf("inside else\n");
                              ((*yyvalp).compound_statement) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement);
                          }
#line 2593 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 104:
#line 904 "src/parser.y"
                                        {
                              ((*yyvalp).compound_statement) = NULL;
                          }
#line 2601 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 105:
#line 909 "src/parser.y"
                                      {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;}
#line 2608 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 106:
#line 911 "src/parser.y"
                                                              {
                      (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)->value = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression)->start->value;
                      ((*yyvalp).loop_for) = create_loop_for_node(create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.symbol_handle)), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.range_expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                  }
#line 2617 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 107:
#line 917 "src/parser.y"
                                              {
                        ((*yyvalp).range_expression) = create_range_expression_node(NULL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2625 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 108:
#line 920 "src/parser.y"
                                                                        {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression), NULL);
                    }
#line 2633 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 109:
#line 923 "src/parser.y"
                                                                                                    {
                        ((*yyvalp).range_expression) = create_range_expression_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                    }
#line 2641 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 110:
#line 928 "src/parser.y"
                                                                           {
                      printf("inside while\n");
                      ((*yyvalp).loop_while) = create_loop_while_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.expression), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.compound_statement));
                    }
#line 2650 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 111:
#line 934 "src/parser.y"
                                                    {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_INTEGER;}
#line 2658 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 112:
#line 937 "src/parser.y"
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
#line 2684 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 113:
#line 958 "src/parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_BOOLEAN;}
#line 2692 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 114:
#line 961 "src/parser.y"
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
#line 2718 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 115:
#line 982 "src/parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_CHAR_;}
#line 2726 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 116:
#line 985 "src/parser.y"
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
#line 2752 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 117:
#line 1006 "src/parser.y"
                                                     {
                       if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle) == NULL){yyerror("function name already defined");}
                       temp = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.symbol_handle); temp->data_type = DT_VOID_;}
#line 2760 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 118:
#line 1009 "src/parser.y"
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
#line 2786 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 119:
#line 1032 "src/parser.y"
                               {
             ((*yyvalp).param) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.param); 
         }
#line 2794 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 120:
#line 1035 "src/parser.y"
                       {
             ((*yyvalp).param) = NULL;
         }
#line 2802 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 121:
#line 1040 "src/parser.y"
                                                       {
                    ((*yyvalp).param) = add_parameter_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2810 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 122:
#line 1043 "src/parser.y"
                              {
                      ((*yyvalp).param) = create_parameter_node();
                      ((*yyvalp).param) = add_parameter_node(((*yyvalp).param), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.variable));
                  }
#line 2819 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 123:
#line 1049 "src/parser.y"
                             {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_INTEGER;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_INT, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2830 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 124:
#line 1055 "src/parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_BOOLEAN;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_BOOL, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2841 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 125:
#line 1061 "src/parser.y"
                              {
            (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type = DT_CHAR_;
            vec_push(&temp->params, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));

            ((*yyvalp).variable) = create_variable_node(AST_DT_CHAR, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle));
         }
#line 2852 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 126:
#line 1069 "src/parser.y"
                                               {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                }
#line 2860 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 127:
#line 1072 "src/parser.y"
                                                  {
                    ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                }
#line 2868 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 128:
#line 1075 "src/parser.y"
                            {
                    ((*yyvalp).expression) = NULL;
                }
#line 2876 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 129:
#line 1080 "src/parser.y"
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
#line 2901 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 130:
#line 1102 "src/parser.y"
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
#line 2926 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 131:
#line 1124 "src/parser.y"
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
#line 2951 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 132:
#line 1146 "src/parser.y"
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
#line 2976 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 133:
#line 1168 "src/parser.y"
                                                                                 {
                            ((*yyvalp).arguments) = add_argument_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 2984 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 134:
#line 1171 "src/parser.y"
                                                  {
                            ((*yyvalp).arguments) = create_argument_node();
                            ((*yyvalp).arguments) = add_argument_node(((*yyvalp).arguments), (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression));
                        }
#line 2993 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 135:
#line 1175 "src/parser.y"
                                      {
                            ((*yyvalp).arguments) = NULL;
                        }
#line 3001 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 136:
#line 1180 "src/parser.y"
                                               {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 3009 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 137:
#line 1183 "src/parser.y"
                                            {
                           ((*yyvalp).expression) = (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.expression);
                       }
#line 3017 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 139:
#line 1188 "src/parser.y"
                                      {
             if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle) != NULL)
              {
                  if ((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->data_type == DT_INTEGER_P)
                  {
                      ((*yyvalp).expression) = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)->value, (ast_node*)create_variable_node(DT_INTEGER_P, (YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.symbol_handle)), NULL);
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
#line 3039 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 140:
#line 1207 "src/parser.y"
                                                        {
                        ((*yyvalp).print_string_function_call) = create_print_string_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.string), 0);
                    }
#line 3047 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 141:
#line 1212 "src/parser.y"
                                                                 {
                            ((*yyvalp).print_expression_int_function_call) = create_print_expression_int_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), 0);
                        }
#line 3055 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 142:
#line 1215 "src/parser.y"
                                                                    {
                            ((*yyvalp).print_expression_int_function_call) = create_print_expression_int_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 3063 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 143:
#line 1219 "src/parser.y"
                                                                     {
                            ((*yyvalp).print_expression_float_function_call) = create_print_expression_float_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), 0);
                        }
#line 3071 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 144:
#line 1224 "src/parser.y"
                                                                      {
                            ((*yyvalp).print_expression_complex_function_call) = create_print_expression_complex_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.symbol_handle), 0);
                        }
#line 3079 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;

  case 145:
#line 1229 "src/parser.y"
                                                                      {
                            ((*yyvalp).print_expression_intp_function_call) = create_print_expression_intp_function_call_node((YY_CAST (yyGLRStackItem const *, yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.expression), 0);
                        }
#line 3087 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"
    break;


#line 3091 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.c"

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



#line 1236 "src/parser.y"

