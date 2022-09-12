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

static error_t parse_opt(int key, char *arg, struct argp_state *state)
{
    struct arguments *arguments = state->input;
    switch (key)
    {
        case ARGP_KEY_ARG:
            if (state->arg_num > 1)
            {
                fprintf(stderr, "\e[31merror:\e[0m too many input files\n");
                argp_usage(state);
            }
            snprintf(arguments->input_filename, 200, "%s", arg);
            break;
        
        case ARGP_KEY_END:
            if (state->arg_num < 1)
            {
                fprintf(stderr, "\e[31mfatal error:\e[0m no input file\n");
                argp_usage(state);
            }    
            break;

        case 'o':
            snprintf(arguments->output_filename, 200, "%s", arg);
            break;


        default:
            return ARGP_ERR_UNKNOWN;
            break;
    }

    return 0;
}

struct argp_option options[] = {
    {"output", 'o', "<file>", 0, "Place the output into <file>"},
};


int main(int argc, char** argv)
{
    struct arguments arguments;

    sprintf(arguments.input_filename, "%s", "");
    sprintf(arguments.output_filename, "%s", "a");


    struct argp argp = {options, parse_opt, args_doc, doc};   
    argp_parse(&argp, argc, argv, 0, 0, &arguments); 

    yyin = fopen(arguments.input_filename, "r");
    if (yyin == NULL)
    {
        fprintf(stderr, "\e[31mfatal error:\e[0m no valid input file\ncompilation terminated\n");
        exit(0);
    }

 
    init_symbol_table();

    while(yyparse());
    
    
    char command[700];
    
}
void yyerror (const char *s) 
{
    fprintf (stderr, "Error: Line:%d %s\n", linenumber, s);
    exit(0);
}
