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
    OPR_ASSIGNMENT = 260,
    COMMA = 261,
    DT_INT = 262,
    DT_BOOL = 263,
    DT_CHAR = 264,
    KW_IF = 265,
    KW_ELIF = 266,
    KW_ELSE = 267,
    KW_FOR = 268,
    KW_IN = 269,
    KW_WHILE = 270,
    KW_BREAK = 271,
    KW_CONTINUE = 272,
    KW_RETURN = 273,
    KW_FUNC = 274,
    CONST_INT = 275,
    CONST_CHAR = 276,
    CONST_BOOL = 277,
    CONST_STRING = 278,
    IDENTIFIER = 279,
    INT_IDENTIFIER = 280,
    BOOL_IDENTIFIER = 281,
    CHAR_IDENTIFIER = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "src/parser.y"

    int integer;
    float floatn;
    int boolean;
    char* string;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_compound_statement *compound_statement;
    struct ast_node_declaration *declaration;
    struct ast_node_assignment *assignment;
    struct ast_node_expression *expression;

#line 94 "/home/admin1/Desktop/Khushi/codes/Task1/src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_ADMIN1_DESKTOP_KHUSHI_CODES_TASK1_SRC_PARSER_H_INCLUDED  */