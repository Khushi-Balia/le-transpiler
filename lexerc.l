/*calculator*/

%{
    #include "parserc.tab.h"
%}

%%

[0-9]+ { yylval.num = atoi(yytext); return NUMBER; }
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return MUL; }
"/" { return DIV; }
\n { return EOL; }
. {}


%%

yywrap(){}

