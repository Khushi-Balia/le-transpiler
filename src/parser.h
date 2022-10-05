/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Skeleton interface for Bison GLR parsers in C

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

#ifndef YY_YY_HOME_ADMIN1_DESKTOP_KHUSHI_CODES_TASK1_SRC_PARSER_H_INCLUDED
# define YY_YY_HOME_ADMIN1_DESKTOP_KHUSHI_CODES_TASK1_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LBRACE = 258,
    RBRACE = 259,
    LPAREN = 260,
    RPAREN = 261,
    LSQUARE = 262,
    RSQUARE = 263,
    OPR_LGL_OR = 264,
    OPR_LGL_AND = 265,
    OPR_EQ = 266,
    OPR_NE = 267,
    OPR_GT = 268,
    OPR_LT = 269,
    OPR_GE = 270,
    OPR_LE = 271,
    OPR_BW_LFT = 272,
    OPR_ADD = 273,
    OPR_SUB = 274,
    OPR_MUL = 275,
    OPR_DIV = 276,
    OPR_MOD = 277,
    OPR_LGL_NOT = 278,
    OPR_ASSIGNMENT = 279,
    DT_INT = 280,
    DT_INT_P = 281,
    DT_BOOL = 282,
    DT_VOID = 283,
    DT_CHAR = 284,
    DT_FLOAT = 285,
    DT_COMP = 286,
    DT_UNDEF = 287,
    MT_SQUARE = 288,
    MT_EXP = 289,
    MT_SIN = 290,
    MT_COS = 291,
    MT_TAN = 292,
    MT_LOG = 293,
    MT_COMP = 294,
    AMP = 295,
    COLON = 296,
    COMMA = 297,
    KW_IF = 298,
    KW_ELIF = 299,
    KW_ELSE = 300,
    KW_FOR = 301,
    KW_IN = 302,
    KW_WHILE = 303,
    KW_BREAK = 304,
    KW_CONTINUE = 305,
    KW_RETURN = 306,
    KW_DEF = 307,
    KW_PRINT = 308,
    CONST_INT = 309,
    CONST_CHAR = 310,
    CONST_FLOAT = 311,
    CONST_BOOL = 312,
    CONST_STRING = 313,
    IDENTIFIER = 314,
    INT_IDENTIFIER = 315,
    BOOL_IDENTIFIER = 316,
    CHAR_IDENTIFIER = 317,
    FLOAT_IDENTIFIER = 318,
    COMP_IDENTIFIER = 319,
    VOID_IDENTIFIER = 320,
    INT_ARR_IDENTIFIER = 321,
    CHAR_ARR_IDENTIFIER = 322,
    BOOL_ARR_IDENTIFIER = 323,
    INT_P_IDENTIFIER = 324
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "src/parser.y"

    int integer;
    int boolean;
    float floatn;
    char* string;
    char* strings;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_compound_statement *compound_statement;
    struct ast_node_declaration *declaration;
    struct ast_node_array_declaration *array_declaration;
    struct ast_node_assignment *assignment;
    struct ast_node_array_assignment *array_assignment;
    struct ast_node_array_access *array_access;
    struct ast_node_constant *constant;
    struct ast_node_variable *variable;
    struct ast_node_expression *expression;
    struct ast_node_range_expression *range_expression;
    struct ast_node_conditional_if *conditional_if;
    struct ast_node_function_def *function_def;
    struct ast_node_param *param;
    struct ast_node_function_call *function_call;
    struct ast_node_arguments *arguments;
    struct ast_node_conditional_else_if *conditional_else_if;
    struct ast_node_loop_for *loop_for;
    struct ast_node_loop_while *loop_while;
    struct ast_node_loop_control *loop_control;
    struct ast_node_print_string_function_call *print_string_function_call;
    struct ast_node_print_expression_int_function_call *print_expression_int_function_call;
    struct ast_node_print_expression_float_function_call *print_expression_float_function_call;
    struct ast_node_print_expression_complex_function_call *print_expression_complex_function_call;
    struct ast_node_print_expression_intp_function_call *print_expression_intp_function_call;
    

#line 159 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_ADMIN1_DESKTOP_KHUSHI_CODES_TASK1_SRC_PARSER_H_INCLUDED  */