%{
  
  #include "par.tab.h"
  int assg = 0;
  int for_flag = 0;
  int function_flag = 0;
  int inside_loop = 0;
  int brackets=0;
  
%}

datatype             ("int"|"float"|"bool"|"char")
char                 ("'"([ -~]|\t|\n|\r|\0)"'")
assignment_op        ([=])
identifier           ([a-zA-Z_][a-zA-Z0-9_]*)
print                ("out")
conditional          ("if"|"elif"|"else")
brace                ("{"|"}")
parenthesis          ("("|")")
squares              ("["|"]")
%%
{datatype}              {
  assg = 1;

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
}
{print}                 {
  if (!strcmp(yytext, "out"))
  {
    return OUT;
  }
}

{brace}                {
  if (!strcmp(yytext, "{"))  
  {
    return LBRACE;
  }
  else if (!strcmp(yytext, "}"))
  {
    return RBRACE;
  }
}

{assignment_op}   {
  return ASSIGN;  
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
{conditional}          {
  if (!strcmp(yytext, "if"))
  {
    return IF;
  }
  else if (!strcmp(yytext, "elif"))
  {
    return ELIF;
  }
  else if (!strcmp(yytext, "else"))
  {
    return ELSE; 
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
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_FLOAT)
    {
      return FLOAT_IDENTIFIER;
    }
    else if (yylval.symbol_handle != NULL && yylval.symbol_handle->data_type == DT_CHAR)
    {
      return CHAR_IDENTIFIER;
    }
    

  }

  return IDENTIFIER;
}
"#"            {BEGIN(comment);                              }
<comment>"#"   {BEGIN(INITIAL);                              }
<comment>.      ;

%%
yywrap() {}