%{
  #include <stdio.h>
  #include "parser.h"
  #include "symbol_table.h"

  int linenumber = 1;
  int assignment_flag = 0;
  int for_loop_flag = 0;
  int function_flag = 0;
  int inside_loop = 0;
  int brackets = 0;

  void yyerror(char* s);
  int yylex();
%}

%option noyywrap
%x comment

braces               ("{"|"}")
parenthesis          ("("|")")
squares              ("["|"]")
datatype             ("int"|"bool"|"char"|"float")
math                 ("root"|"exponent"|"sin"|"cos"|"tan"|"log")
integer              ([0-9]+)
floatn               ([0-9]*"."[0-9]+)
char                 ("'"([ -~]|\t|\n|\r|\0)"'")
string               (\"(\\.|[^"\\])*\")
bool                 ("true"|"false")
identifier           ([a-zA-Z_][a-zA-Z0-9_]*)
relational_operators (">"|">="|"<"|"<="|"=="|"!=")
logical_operators    ("and"|"or"|"not")
bitwise_operators    ("~"|"&"|"|"|"^"|">>"|"<<")
arithmetic_operators ("+"|"-"|"*"|"/"|"%")
loops                ("for"|"while"|"break"|"continue"|"in")
function             ("return"|"func"|"void")
conditional          ("if"|"elif"|"else")
print                ("out")
comma                ([,])
assignment_operator  ([=])
colon                ([:])

%%

{braces}                {
  if (!strcmp(yytext, "{"))
  {
    if (for_loop_flag == -1)
    {
      for_loop_flag = 0;
    }
    else if (function_flag == -1)
    {
      function_flag = 0;
    }
    else if (for_loop_flag == 0)
    {
      increment_scope();
    }

    if (inside_loop)
    {
      brackets += 1;
    }
  
    return LBRACE;
  }
  else if (!strcmp(yytext, "}"))
  {
    decrement_scope();

    if (inside_loop)
    {
      brackets -= 1;
      if (brackets == 0)
      {
        inside_loop = 0;
      }
    }

    return RBRACE;
  }
}

{parenthesis}           {
  if (!strcmp(yytext, "("))
  {
    return LPAREN;
  }
  else if (!strcmp(yytext, ")"))
  {
    return RPAREN;
  }
}

{squares}               {
  if (!strcmp(yytext, "["))
  {
    return LSQUARE;
  }
  else if (!strcmp(yytext, "]"))
  {
    return RSQUARE;
  }
}

{loops}            {
  if (!strcmp(yytext, "for"))
  {
    for_loop_flag = 1;
    inside_loop = 1;
    increment_scope();

    return KW_FOR;
  }
  else if (!strcmp(yytext, "while"))
  {
    inside_loop = 1;
    return KW_WHILE;
  }
  else if (!strcmp(yytext, "in"))
  {
    return KW_IN;
  }
  else if (!strcmp(yytext, "break"))
  {
    if (!inside_loop)
    {
      yyerror("cannot call break outside loops");
    }
    return KW_BREAK;
  }
  else if (!strcmp(yytext, "continue"))
  {
    if (!inside_loop)
    {
      yyerror("cannot call break outside loops");
    }
    return KW_CONTINUE;
  }
}

{datatype}              {
  assignment_flag = 1;

  if (!strcmp(yytext, "int"))
  {
    return DT_INT;
  }
  else if (!strcmp(yytext, "bool"))
  {
    return DT_BOOL;
  }
  else if (!strcmp(yytext, "char"))
  {
    return DT_CHAR;
  }
  else if (!strcmp(yytext, "float"))
  {
    return DT_FLOAT;
  }
  else
  {
    return DT_UNDEF;
  }
}

{math}               {
  if (!strcmp(yytext, "root"))
  {
    return MT_SQUARE;
  }
  else if (!strcmp(yytext, "exponent"))
  {
    return MT_EXP;
  }
  else if (!strcmp(yytext, "sin"))
  {
    return MT_SIN;
  }
    else if (!strcmp(yytext, "cos"))
  {
    return MT_COS;
  }
    else if (!strcmp(yytext, "tan"))
  {
    return MT_TAN;
  }
    else if (!strcmp(yytext, "log"))
  {
    return MT_LOG;
  }
}

{integer}               {
  yylval.integer = strtoll(yytext, NULL, 0);
  return CONST_INT;
}

{floatn}               {
  yylval.floatn = strtof(yytext,NULL);
  return CONST_FLOAT;
}

{bool}                  {
  if (!strcmp(yytext, "true"))
  {
    yylval.boolean = 1;
  }
  else if (!strcmp(yytext, "false"))
  {
    yylval.boolean = 0;
  }

  return CONST_BOOL;
}

{char}                  {
  yylval.integer = (int)yytext[1];
  return CONST_CHAR;
}

{string}                {
  yylval.string = strdup(yytext);
  return CONST_STRING;
}

{assignment_operator}   {
  return OPR_ASSIGNMENT;  
}

{relational_operators}  {
  if (!strcmp(yytext,">"))
  {
    return OPR_GT;
  } 
  else if (!strcmp(yytext, ">="))
  {
    return OPR_GE;
  }
  else if (!strcmp(yytext,"<"))
  {
    return OPR_LT;
  }
  else if (!strcmp(yytext, "<="))
  {
    return OPR_LE;
  }
  else if (!strcmp(yytext,"=="))
  {
    return OPR_EQ;
  }
  else if (!strcmp(yytext, "!="))
  {
    return OPR_NE;
  }
}

{arithmetic_operators}  {
  if (!strcmp(yytext,"+"))
  {
    return OPR_ADD;
  }
  else if (!strcmp(yytext,"-"))
  {
    return OPR_SUB;
  }
  else if (!strcmp(yytext,"*"))
  {
    return OPR_MUL;
  }
  else if (!strcmp(yytext,"/"))
  {
    return OPR_DIV;
  }
  else if (!strcmp(yytext, "%"))
  {
    return OPR_MOD;
  }
}

{logical_operators}       {
  if (!strcmp(yytext, "not"))
  {
    return OPR_LGL_NOT;
  }
  else if (!strcmp(yytext, "and"))
  {
    return OPR_LGL_AND;
  }
  else if (!strcmp(yytext, "or"))
  {
    return OPR_LGL_OR;
  }
}

{bitwise_operators}       {
  if (!strcmp(yytext, "<<"))
  {
    return OPR_BW_LFT;
  }
 }

{conditional}          {
  if (!strcmp(yytext, "if"))
  {
    return KW_IF;
  }
  else if (!strcmp(yytext, "elif"))
  {
    return KW_ELIF;
  }
  else if (!strcmp(yytext, "else"))
  {
    return KW_ELSE; 
  }
}

{function}              {
  if (!strcmp(yytext, "return"))
  {
    return KW_RETURN;
  }
  else if (!strcmp(yytext, "func"))
  {
    function_flag = 1;

    return KW_DEF;
  }
  else if (!strcmp(yytext, "void"))
  {
    return DT_VOID;
  }
}

{print}                 {
  if (!strcmp(yytext, "out"))
  {
    return KW_PRINT;
  }
}

{identifier}            {
  yylval.symbol_handle = NULL;

  if (function_flag == 1)
  {
    if (insert_symbol_table(yytext, DT_UNDEF, 1, 1) == 1)
    {
      yylval.symbol_handle = lookup_symbol_table(yytext, get_scope());
      vec_init(&yylval.symbol_handle->params);
    }
    function_flag = -1;
    increment_scope();
    
    return IDENTIFIER;
  }

  if (assignment_flag == 1 || for_loop_flag == 1)
  {
    if (insert_symbol_table(yytext, DT_UNDEF, 1, 0) == 1)
    {
      yylval.symbol_handle = lookup_symbol_table(yytext, get_scope());
      assignment_flag = 0;
  
      if (for_loop_flag == 1)
      {
        for_loop_flag = -1;
      }
    }
  }
  else if (assignment_flag == 0)
  {
    int temp = for_loop_flag == -1 ? -1 : 0;
    yylval.symbol_handle = lookup_symbol_table(yytext, get_scope() + temp);
    
    if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_INTEGER)
    {
      return INT_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_BOOLEAN)
    {
      return BOOL_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_FLOAT_)
    {
      return FLOAT_IDENTIFIER;
    }
     else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_VOID_)
    {
      return VOID_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_CHAR_)
    {
      return CHAR_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_INT_ARR)
    {
      return INT_ARR_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_CHAR_ARR)
    {
      return CHAR_ARR_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_BOOL_ARR)
    {
      return BOOL_ARR_IDENTIFIER;
    }
  }

  return IDENTIFIER;
}

{colon}             {
  return COLON;
}

{comma}                 {
  return COMMA;
}

%%