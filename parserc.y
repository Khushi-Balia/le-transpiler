%{
%}

%union
{
    int num;
}

%token EOL
%token<num> NUMBER
%type<num> exp
%token PLUS MINUS MUL DIV

%%

input: 
|    line input
;

line: 
    exp EOL{ printf("%d\n", $1); }
| EOL;

exp: 
   NUMBER { $$ = $1; }
|  exp PLUS exp { printf("Addition: "); $$ = $1 + $3; }
|  exp MINUS exp{ printf("Subtraction: "); $$ = $1 - $3; }
|  exp MUL exp { printf("Multiplication: "); $$ = $1 * $3; }
|  exp DIV exp { printf("Division: "); $$ = $1 / $3; }
;

%%

int main()
{
    yyparse();
    return 0;
}

yyerror(char *s)
{
    printf("Error: %s/n", s);
    return 0;
}