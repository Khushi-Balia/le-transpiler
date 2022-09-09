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
datatype             ("int"|"bool"|"char")
identifier           ([a-zA-Z_][a-zA-Z0-9_]*)
loops                ("for"|"while"|"break"|"continue")
function             ("return"|"func")
comma                ([,])

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
  else
  {
    return DT_UNDEF;
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

    return KW_FUNC;
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
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_CHAR_)
    {
      return CHAR_IDENTIFIER;
    }
  }

  return IDENTIFIER;
}

{comma}                 {
  return COMMA;
}

%%