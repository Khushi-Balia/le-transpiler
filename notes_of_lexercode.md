## LEXING 
---
- We use **FLEX** generator to generate a lexical analyzer 

- Extention of a lex program is .l
![](https://image.slidesharecdn.com/lexicalanalysis-160516142825/85/lexical-analysis-compiler-design-8-320.jpg?cb=1463408991)
 ___

### THREE COMPONENT OF LEXICAL CODE 

1) DEFINITION 
2) RULES
3) USER CODE 
___

#### GENERAL SYNTAX OF LEXICAL ANALYZES 

```
%{
    //definitions
%}
   
%%
    // rules
%%

user code section //intmain()
```
>THIS PART OF THE CODE COMES IN lex.yy.c file after executing lex (file_name) in the terminal, which is mention below





___
#### EXAMPLE OF LEX PROGRAM :-
```
    int count = 0;
    int ctl= 0;
%}


%%

[a-z] {printf("%s lowercase \n", yytext); ctl++ ;}
[A-Z] {printf("%s upercase \n", yytext ); count++ ;}
"+"   {printf("%s PLUS \n", yytext);}
"-"   {printf("%s SUBT\n", yytext);}
"*"   {printf("%s MULPYn", yytext);}
"/"   {printf("%s DIV\n", yytext);}
"1"|"3"|"5"|"7"|"9" {printf("odd \n");}
"2"|"4"|"6"|"8"|"10" {printf("even \n");}



. {}

\n    {return 0;}
%%

yywrap()
{


}

int main(){
    
yylex();

return 0;
}
```

##### SOME BASIC TERMINOLOGY 
- yytext()- text in buffer.
- yywrap()- wraps the rule part of the code.
- yylex()- main flex function 
___

### HOW TO RUN A LEX PROGRAM 
![](https://ecomputernotes.com/images/Creating-lexical-analyzer.jpg)

``` 
lex (file_name.l) 
 ```
-which will convert .l file to c program `lex.yy.c `

```
gcc lex.yy.c
```
- which will compile lex.yy.c into ` a.out ` 
```
./a.out
```
- this will give out tokens 

___

### DIFFERENCE BETWEEN GCC AND G++ (not related to our project)

- g++ can compile any .c or .cpp files (.c /.h)but they will be treated as C++ files only but gcc can compile any .c or .cpp files but they will be treated as C and C++ . 
- g++ can link object directy into standard library whereas gcc doesn't do 
