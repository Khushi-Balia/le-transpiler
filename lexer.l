%{
    #include <studio.h>

    int assignment_flag=0;
    int for_loop_flag=0;
    int function_flag = 0;
    int inside_loop = 0;
    
%}


%%
integer              ( [0-9]+)
bool                 ("true" | "false")
char                 ("'"([ -~]|\t|\n|\r|\0)"'")
string               (\"(\\.|[^"\\])*\")
datatype             ("int"|"bool"|"char"|"float")
conditional          ("if"|"elif"|"else")
loops                ("for"|"while"|"break"|"continue")
arithmetic_operators ("+"|"-"|"*"|"/"|"%")
relational_operators (">"|">="|"<"|"<="|"=="|"!=")
print                ("out")
newline              (\n)
braces               ("{"|"}")
parenthesis          ("("|")")
squares              ("["|"]")
logical_operators    ("!"|"&&"|"||")
assignment_oper      ([=])
function             ("return"|"func")
comma                ([,])
%%

{integer}
{
    yylval.integer = strtoll(yytext, NULL, 0);
    return CONST_INT;
}
{bool}                 
{
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
{char}                  
{
  yylval.integer = (int)yytext[1];
  return CONST_CHAR;
}

{string}     
{
  yylval.string = strdup(yytext);
  return CONST_STRING;
}

{datatype}              
{
  
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
  else if (!strcmp(yytext, "float")"))
  {
    return DT_FLOAT;
  }
}
{conditional}          
{
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
{loops}            
{
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
{arithmetic_operators}  
{
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

{relational_operators}  
{
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
{logical_operators}       
{
  if (!strcmp(yytext, "!"))
  {
    return OPR_LGL_NOT;
  }
  else if (!strcmp(yytext, "&&"))
  {
    return OPR_LGL_AND;
  }
  else if (!strcmp(yytext, "or"))
  {
    return OPR_LGL_OR;
  }
}
{function}              
{
  if (!strcmp(yytext, "return"))
  {
    return KW_RETURN;
  }
  else if (!strcmp(yytext, "func"))
  {
    return DT_FUNC;
  }
  
}
{assignment_operator}   
{
  return OPR_ASSIGNMENT;  
}
{print}                
{
  if (!strcmp(yytext, "out))
  {
    return KW_OUT;
  }
}
{newline}               
{
  linenumber++;
}

{braces}                
{
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

{parenthesis}           
{
  if (!strcmp(yytext, "("))
  {
    return LPAREN;
  }
  else if (!strcmp(yytext, ")"))
  {
    return RPAREN;
  }
}

{squares}               
{
  if (!strcmp(yytext, "["))
  {
    return LSQUARE;
  }
  else if (!strcmp(yytext, "]"))
  {
    return RSQUARE;
  }
}
{comma}                 
{
  return COMMA;
}
"#"            {BEGIN(comment);                              }
<comment>"#"   {BEGIN(INITIAL);                              }
<comment>\n     {linenumber++;                                }
<comment>.      ;
%%
