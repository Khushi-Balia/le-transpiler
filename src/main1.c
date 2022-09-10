#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <argp.h>
#include "code_printer.h"
#include "symbol_table.h"
#include "ast.h"


#define VAL(str) #str
#define TOSTRING(str) VAL(str)

void yyerror(const char* s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int linenumber;
extern int columnnumber;
extern ast_node *ast;

const char *argp_program_version = TOSTRING(VERSION_NUMBER);
const char *argp_program_bug_address = "https://github.com/Khushi-Balia/le-transpiler/issues";
static char *doc = "Toy compiler";
static char args_doc[] = "FILE";

struct arguments 
{
    char output_filename[200];
    char input_filename[200];
};


int main()
{
    struct arguments arguments;
    sprintf(arguments.input_filename, "%s", "");
    sprintf(arguments.output_filename, "%s", "a");

    yyin = fopen(arguments.input_filename, "r");
    if (yyin == NULL)
    {
        fprintf(stderr, "\e[31mfatal error:\e[0m no valid input file\ncompilation terminated\n");
        exit(0);
    }

    init_symbol_table();

    while(yyparse());
    

    int is_used = code_printer(ast);
    
    char command[700];

}

void yyerror (const char *s) 
{
    fprintf (stderr, "Error: Line:%d  %s\n", linenumber, s);
    exit(0);
}