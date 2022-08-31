/*khushi final lexer*/

%{
  #include <stdio.h>

  int assg = 0;
  int for_flag = 0;
  int function_flag = 0;
  int inside_loop = 0;

  void yyerror(char* s);
  int yylex();
%}

datatype             ("int"|"float"|"bool"|"char")
integer              ([0-9]+)
boolean              ("true"|"false")
char                 ("'"([ -~]|\t|\n|\r|\0)"'")
string               (\"(\\.|[^"\\])*\")
arithmetic_op        ("+"|"-"|"*"|"/"|"%")
relational_op        (">"|">="|"<"|"<="|"=="|"!=")
logical_op           ("!"|"&&"|"||")
conditional          ("if"|"elif"|"else")
loops                ("for"|"while"|"break"|"continue")
function             ("return"|"func")
print                ("out")
curly                ("{"|"}")
parenthesis          ("("|")")
squares              ("["|"]")
assignment_op        ([=])
comma                ([,])
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

{integer}               {
  yylval.integer = strtoll(yytext, NULL, 0);
  return INTEGER;
}

{boolean}                  {
  if (!strcmp(yytext, "true"))
  {
    yylval.bool = 1;
  }
  else if (!strcmp(yytext, "false"))
  {
    yylval.bool = 0;
  }

  return BOOLEAN;
}

{char}                  {
  yylval.integer = (int)yytext[1];
  return CHAR;
}

{string}                {
  yylval.string = strdup(yytext);
  return STRING;
}

{arithmetic_op}  {
  if (!strcmp(yytext,"+"))
  {
    return O_ADD;
  }
  else if (!strcmp(yytext,"-"))
  {
    return O_SUB;
  }
  else if (!strcmp(yytext,"*"))
  {
    return O_MUL;
  }
  else if (!strcmp(yytext,"/"))
  {
    return O_DIV;
  }
  else if (!strcmp(yytext, "%"))
  {
    return O_MOD;
  }
}

{relational_op}  {
  if (!strcmp(yytext,">"))
  {
    return O_GT;
  } 
  else if (!strcmp(yytext, ">="))
  {
    return O_GE;
  }
  else if (!strcmp(yytext,"<"))
  {
    return O_LT;
  }
  else if (!strcmp(yytext, "<="))
  {
    return O_LE;
  }
  else if (!strcmp(yytext,"=="))
  {
    return O_EQ;
  }
  else if (!strcmp(yytext, "!="))
  {
    return O_NE;
  }
}

{logical_op}       {
  if (!strcmp(yytext, "!"))
  {
    return O_LGL_NOT;
  }
  else if (!strcmp(yytext, "&&"))
  {
    return O_LGL_AND;
  }
  else if (!strcmp(yytext, "||"))
  {
    return O_LGL_OR;
  }
}

{conditional}          {
  if (!strcmp(yytext, "if"))
  {
    return C_IF;
  }
  else if (!strcmp(yytext, "elif"))
  {
    return C_ELIF;
  }
  else if (!strcmp(yytext, "else"))
  {
    return C_ELSE; 
  }
}

{loops}            {
  if (!strcmp(yytext, "for"))
  {
    for_flag = 1;
    inside_loop = 1;

    return L_FOR;
  }
  else if (!strcmp(yytext, "while"))
  {
    inside_loop = 1;
    return L_WHILE;
  }
  else if (!strcmp(yytext, "break"))
  {
    if (!inside_loop)
    {
      yyerror("break outside loops");
    }
    return L_BREAK;
  }
  else if (!strcmp(yytext, "continue"))
  {
    if (!inside_loop)
    {
      yyerror("continue outside loops");
    }
    return L_CONTINUE;
  }
}

{function}              {
  if (!strcmp(yytext, "return"))
  {
    return F_RETURN;
  }
  else if (!strcmp(yytext, "func"))
  {
    function_flag = 1;

    return F_DEF;
  }
}

{print}                 {
  if (!strcmp(yytext, "out"))
  {
    return OUT;
  }
}

{curly}                {
  if (!strcmp(yytext, "{"))  
  {
    return L_CURLY;
  }
  else if (!strcmp(yytext, "}"))
  {
    return R_CURLY;
  }
}

{parenthesis}           {
  if (!strcmp(yytext, "("))
  {
    return L_PAREN;
  }
  else if (!strcmp(yytext, ")"))
  {
    return R_PAREN;
  }
}

{squares}               {
  if (!strcmp(yytext, "["))
  {
    return L_SQUARE;
  }
  else if (!strcmp(yytext, "]"))
  {
    return R_SQUARE;
  }
}

{assignment_op}   {
  return O_ASSG;  
}

{comma}                 {
  return COMMA;
}

"#"            {BEGIN(comment);                              }
<comment>"#"   {BEGIN(INITIAL);                              }
<comment>.      ;

%%