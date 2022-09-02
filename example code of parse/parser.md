## PARSER ##
+ BASIC STRUCTURE OF PARSE CODE IS :-
```
%{

%}

%union{
    
}

``` WE ASSIGN TOKENS HERE ```

%%
input:




%%
int main(){
    yyparse();


    return 0;
}
yyerror(char* s){
    printf("ERROR: %s\n",s);
    return 0 ;
}
```
___

+ EXAMPLE:- ADDING TWO NUMBER IN BISON 
### LEX CODE
```
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

```
> As you can know we are not using driver function `` (int main()``) here in the code , rest we can understand in parse code
### PARSING ###
```
%{

%}

%union{
    int num;
    char sym;
}

%token EOL
%token PLUS
%token<num> NUMBER
%type<num> exp

%%
input:
| line input
;


line:
     exp EOL {printf("%d\n",$1); }
|    EOL;

exp: 
    NUMBER { $$= $1; }
|   exp PLUS exp{ $$ = $1 + $3; }
;
%%
int main(){
    yyparse();


    return 0;
}
yyerror(char* s){
    printf("ERROR: %s\n",s);
    return 0 ;
}
```
>KEYWORDS
1. WE ARE USING `` yyparse() `` 
2. FOR EXECUTION 
+ FOR LEX `` flex filename.l ``
+ FOR PARSE `` bison -d -t filename.y``
>After executing this bison -d -t filename.y , two files will generate name ``filename.tab.h`` and ``filename.tab.c``,we fill put tab.h one in our lex code as you can see in our example code .

+ ``gcc filename.l filename.tab.c ``
this will compile and will generate a.out
+ ``./a.out ``
