%{
    #include "pract.tab.h"


%}


%%

[0-9]+ { yylval.num = atoi(yytext); return NUMBER; }
"+" {return PLUS; }
\n {return EOL;}


. {}

%%

yywrap() {}

