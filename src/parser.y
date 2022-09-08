%{
#include <stdlib.h>
#include <stdio.h>
#include "symbol_table.h"
#include "ast.h"
#include "code_printer.h"

extern void yyerror(const char* s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int linenumber;
extern int assignment_flag;
sym_ptr temp = NULL;
ast_node *ast = NULL;

#define YYDEBUG 1
%}

%define parse.error verbose
%glr-parser 

%union{
    int integer;
    int boolean;
    char* string;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_compound_statement *compound_statement;
    struct ast_node_declaration *declaration;
    struct ast_node_assignment *assignment;
    struct ast_node_expression *expression;
}

%left LBRACE RBRACE

%token OPR_ASSIGNMENT

%token COMMA

%token DT_INT
%token DT_BOOL
%token DT_CHAR

%token KW_IF KW_ELIF KW_ELSE

%token KW_FOR KW_IN KW_WHILE KW_BREAK KW_CONTINUE

%token KW_RETURN KW_FUNC

%token <integer> CONST_INT CONST_CHAR
%token <boolean> CONST_BOOL
%token <string> CONST_STRING

%token <symbol_handle> IDENTIFIER INT_IDENTIFIER BOOL_IDENTIFIER CHAR_IDENTIFIER

%type <node> translation_unit program
%type <statements> statement
%type <compound_statement> statement_list compound_statement 
%type <declaration> declaration declaration_assignment
%type <assignment> assignment
%type <expression> arithmetic_expression boolean_expression 
%start start
%%

start: translation_unit {
        ast = $1;
     }
     ;

translation_unit: program {
                    $$ = create_translation_unit();
                    $$ = add_program_unit($$, $1);
                }
	            | translation_unit program {
                    $$ = add_program_unit($1, $2);
                }
	            ;

program: statement {
        $$ = (ast_node*)$1;     
       }
       ;

compound_statement: LBRACE statement_list RBRACE {
                    $$ = $2;
                  }
                  ;

statement_list: statement {
                $$ = create_compound_statement_node();
                $$ = add_compound_statement_node($$, $1);
              }
              | statement_list statement {
                  $$  = add_compound_statement_node($1, $2);
              }
              ;

statement: compound_statement {
            $$ = create_statement_node(AST_NODE_COMPOUND_STATEMENT, (void*)$1);
         }
         | declaration {
             $$ = create_statement_node(AST_NODE_DECLARATION, (void*)$1); 
         }
         | declaration_assignment {
             $$ = create_statement_node(AST_NODE_DECLARATION, (void*)$1);
         }
         | assignment {
             $$ = create_statement_node(AST_NODE_ASSIGNMENT, (void*)$1);
         }
         ;

declaration: DT_INT IDENTIFIER { 
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_INTEGER;
               $$ = create_declaration_node($2, NULL);

               printf ("int %s ;\n", $2->identifier);
           }
           | DT_BOOL IDENTIFIER {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_BOOLEAN;
               $$ = create_declaration_node($2, NULL);

               printf ("bool %s ;\n", $2->identifier);
           }
           | DT_CHAR IDENTIFIER {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_CHAR_;
               $$ = create_declaration_node($2, NULL);
           }
           ;

declaration_assignment: DT_INT IDENTIFIER OPR_ASSIGNMENT arithmetic_expression {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_INTEGER;
               $2->value = $4->value;
               $$ = create_declaration_node($2, $4);

               printf ("%s := %d\n", $2->identifier, $2->value);
            }
            | DT_BOOL IDENTIFIER OPR_ASSIGNMENT boolean_expression {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_BOOLEAN;
               $2->value = $4->value;
               $$ = create_declaration_node($2, $4);

               printf ("%s := %d\n", $2->identifier, $2->value);
            }
            | DT_CHAR IDENTIFIER OPR_ASSIGNMENT arithmetic_expression {
                if ($2 == NULL)
                {
                    yyerror("variable already defined");
                }

                $2->data_type = DT_CHAR_;
                $2->value = $4->value;
                $$ = create_declaration_node($2, $4);

                printf("%s := %c\n", $2->identifier, $2->value);
            }
            ;


assignment: INT_IDENTIFIER OPR_ASSIGNMENT arithmetic_expression {
               if ($1 == NULL)
               {
                   yyerror("variable already defined");
               }
               
               if ($1->is_function == 1)
               {
                   yyerror("identifier is a function, cannot assign value");
               }
               
               if ($1->is_constant == 1)
               {
                   yyerror("identifer is a pin number constant, cannot assign value");
               }

               $1->data_type = DT_INTEGER;
               $1->value = $3->value;
               $$ = create_assignment_node($1, $3);

               printf("%s := %d\n", $1->identifier, $1->value);
            }
            | BOOL_IDENTIFIER OPR_ASSIGNMENT boolean_expression {
                if ($1 == NULL)
                {
                    yyerror("variable already defined");
                }
                
                if ($1->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }
                
                if ($1->is_constant == 1)
                {
                    yyerror("identifer is a pin number constant, cannot assign value");
                }
                
                $1->data_type = DT_BOOLEAN;  
                $1->value = $3->value;
                $$ = create_assignment_node($1, $3);

               printf("%s := %d\n", $1->identifier, $1->value);
            }
            | CHAR_IDENTIFIER OPR_ASSIGNMENT arithmetic_expression {
                if ($1 == NULL)
                {
                    yyerror("variable already defined");
                }

                if ($1->is_function == 1)
                {
                    yyerror("identifier is a function, cannot assign value");
                }

                if ($1->is_constant == 1)
                {
                    yyerror("identifier is a pin number constant, cannot assign value");
                }

                $1->data_type = DT_CHAR_;
                $1->value = $3->value;
                $$ = create_assignment_node($1, $3);

                printf("%s := %c\n", $1->identifier, $1->value);
            }
            ;

arithmetic_expression: CONST_INT {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT, $1, NULL, NULL);
          }
          | CONST_CHAR {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT_CHAR, $1, NULL, NULL);
          }
          | INT_IDENTIFIER {
              if ($1 != NULL)
              {
                  if ($1->data_type == DT_INTEGER)
                  {
                      $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, $1->value, (ast_node*)create_variable_node(DT_INTEGER, $1), NULL);
                  }
                  else if ($1->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else if ($1->data_type == DT_BOOLEAN)
                  {
                      yyerror("bool variable not allowed with int/char");
                  }
              }
          } 
          | CHAR_IDENTIFIER {
              if ($1 != NULL)
              {
                  if ($1->data_type == DT_CHAR_)
                  {
                      $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_VARIABLE, $1->value, (ast_node*)create_variable_node(DT_CHAR_, $1), NULL);
                  }
                  else if ($1->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else if ($1->data_type == DT_BOOLEAN)
                  {
                      yyerror("bool variable not allowed with int/char");
                  }
              }
          }
          ;

          boolean_expression: CONST_BOOL {
              $$ = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_CONSTANT, $1, NULL, NULL);
          }
          | BOOL_IDENTIFIER {
              if ($1 != NULL)
              {
                  if ($1->data_type == DT_BOOLEAN)
                  {
                      $$ = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_VARIABLE, $1->value, (ast_node*)create_variable_node(DT_BOOLEAN, $1), NULL);
                  }
                  else if ($1->data_type == DT_UNDEF)
                  {
                      yyerror("variable undefined");
                  }
                  else
                  {
                      yyerror("int variable not allowed with bool");
                  }
              }
          }
          ;
          %%
