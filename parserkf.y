%{
#include <stdlib.h>
#include <stdio.h>

extern void yyerror(const char* s);
extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int ln;
extern int assg;
sym_ptr temp = NULL;
ast_node *ast = NULL;

#define YYDEBUG 1
%}

%define parse.error verbose
%glr-parser 

%union{
    int integer;
    int BOOL_IDENTIFIER;
    char* string;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_compound_statement *compound_statement;
    struct ast_node_declaration *declaration;
    struct ast_node_assignment *assignment;
    struct ast_node_expression *expression;
    struct ast_node_range_expression *range_expression;
    struct ast_node_constant *constant;
    struct ast_node_variable *variable;
    struct ast_node_conditional_if *conditional_if;
    struct ast_node_conditional_else_if *conditional_else_if;
    struct ast_node_loop_for *loop_for;
    struct ast_node_loop_while *loop_while;
    struct ast_node_loop_control *loop_control;
    struct ast_node_function_def *function_def;
    struct ast_node_param *param;
    struct ast_node_function_call *function_call;
    struct ast_node_arguments *arguments;
}

%left L_CURLY R_CURLY

%left L_PAREN R_PAREN

%left L_SQUARE R_SQUARE

%left O_LGL_OR
%left O_LGL_AND

%left O_EQ O_NE
%left O_GT O_LT O_GE O_LE

%left O_ADD O_SUB
%left O_MUL O_DIV O_MOD

%right O_LGL_NOT

%token O_ASSG

%token SEMICOLON COLON COMMA

%token DT_INT
%token DT_BOOL
%token DT_FLOAT
%token DT_CHAR

%token C_IF C_ELIF C_ELSE

%token L_FOR L_WHILE L_BREAK L_CONTINUE

%token F_RETURN F_FUNC

%token OUT

%token <integer> INTEGER CHAR
%token <boolean> BOOLEAN
%token <string> STRING

%token <symbol_handle> IDENTIFIER INT_IDENTIFIER BOOL_IDENTIFIER VOID_IDENTIFIER CHAR_IDENTIFIER INT_ARR_IDENTIFIER CHAR_ARR_IDENTIFIER BOOL_ARR_IDENTIFIER

%type <node> translation_unit program
%type <statements> statement
%type <compound_statement> statement_list compound_statement conditional_statement_else
%type <declaration> declaration declaration_assignment
%type <assignment> assignment
%type <expression> arithmetic_expression boolean_expression relational_expression logical_expression return_statement function_call_datatypes
%type <conditional_if> conditional_statement
%type <conditional_else_if> conditional_statement_else_if
%type <loop_for> loop_statement_for
%type <loop_while> loop_statement_while
%type <function_def> function_definition 
%type <param> parameter_list_def parameters
%type <variable> parameter
%type <function_call> int_function_call bool_function_call char_function_call void_function_call 
%type <arguments> function_call_parameters
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
       | function_definition {
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
         | empty_statement {
            $$ = create_statement_node(AST_NODE_EMPTY_STATEMENT, NULL); 
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
         | conditional_statement {
             $$ = create_statement_node(AST_NODE_CONDITIONAL_IF, (void*)$1);
         }
         | loop_statement_for {
             $$ = create_statement_node(AST_NODE_LOOP_FOR, (void*)$1);
         }
         | loop_statement_while {
             $$ = create_statement_node(AST_NODE_LOOP_WHILE, (void*)$1);
         }
         | return_statement {
             $$ = create_statement_node(AST_NODE_FUNC_RETURN, (void*)$1);
         }
         | int_function_call SEMICOLON {
             $$ = create_statement_node(AST_NODE_FUNC_CALL, (void*)$1);
         }
         | bool_function_call SEMICOLON {
             $$ = create_statement_node(AST_NODE_FUNC_CALL, (void*)$1);
         }
         | char_function_call SEMICOLON {
             $$ = create_statement_node(AST_NODE_FUNC_CALL, (void*)$1);
         }
         | void_function_call SEMICOLON {
             $$ = create_statement_node(AST_NODE_FUNC_CALL, (void*)$1);
         }
         | L_BREAK SEMICOLON {
             $$ = create_statement_node(AST_NODE_LOOP_BREAK, (void*)create_loop_control_node(AST_NODE_LOOP_BREAK));
         }
         | L_CONTINUE SEMICOLON {
             $$ = create_statement_node(AST_NODE_LOOP_CONTINUE, (void*)create_loop_control_node(AST_NODE_LOOP_CONTINUE));
         }
         ;

empty_statement: SEMICOLON {
              printf ("blank statement\n");
            }
            ;

declaration: DT_INT IDENTIFIER SEMICOLON { 
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_INTEGER;
               $$ = create_declaration_node($2, NULL);

               printf ("int %s ;\n", $2->identifier);
           }
           | DT_BOOL IDENTIFIER SEMICOLON {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_BOOLEAN;
               $$ = create_declaration_node($2, NULL);

               printf ("bool %s ;\n", $2->identifier);
           }
           | DT_CHAR IDENTIFIER SEMICOLON {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_CHAR_;
               $$ = create_declaration_node($2, NULL);
           }
           ;


declaration_assignment: DT_INT IDENTIFIER O_ASSIGNMENT arithmetic_expression SEMICOLON {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_INTEGER;
               $2->value = $4->value;
               $$ = create_declaration_node($2, $4);

               printf ("%s := %d\n", $2->identifier, $2->value);
            }
            | DT_BOOL IDENTIFIER O_ASSIGNMENT boolean_expression SEMICOLON {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_BOOLEAN;
               $2->value = $4->value;
               $$ = create_declaration_node($2, $4);

               printf ("%s := %d\n", $2->identifier, $2->value);
            }
            | DT_CHAR IDENTIFIER O_ASSIGNMENT arithmetic_expression SEMICOLON {
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

arithmetic_expression: INTEGER {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT, $1, NULL, NULL);
          }
          | CHAR {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_CONSTANT_CHAR, $1, NULL, NULL);
          }
          | int_function_call {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, $1->symbol_entry->value, (ast_node*)$1, NULL);
          }
          | char_function_call {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_NODE_FUNC_CALL, $1->symbol_entry->value, (ast_node*)$1, NULL);
          }
          | arithmetic_expression O_ADD arithmetic_expression {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_ADD, $1->value + $3->value, (ast_node*)$1, (ast_node*)$3);
          } 
          | arithmetic_expression O_SUB arithmetic_expression {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, $1->value - $3->value, (ast_node*)$1, (ast_node*)$3);
          } 
          | arithmetic_expression O_MUL arithmetic_expression {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MUL, $1->value * $3->value, (ast_node*)$1, (ast_node*)$3);
          } 
          | arithmetic_expression O_DIV arithmetic_expression {
              if ($3->value == 0)
              {
                  yyerror("division by 0");
              }
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_DIV, $1->value / $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_MOD arithmetic_expression {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_MOD, $1->value % $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | O_SUB arithmetic_expression {
              $$ = create_expression_node(AST_NODE_ARITHMETIC_EXP, AST_OPR_SUB, -1*$2->value, NULL, (ast_node*)$2);
          } 
          | LPAREN arithmetic_expression RPAREN {
              $$ = $2;
          }
          ;

boolean_expression: BOOLEAN {
              $$ = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_CONSTANT, $1, NULL, NULL);
          }
          | bool_function_call {
              $$ = create_expression_node(AST_NODE_BOOLEAN_EXP, AST_NODE_FUNC_CALL, $1->symbol_entry->value, (ast_node*)$1, NULL);
          }
          | relational_expression {
              $$ = $1;
          }
          | logical_expression {
              $$ = $1;
          }
          | LPAREN boolean_expression RPAREN {
              $$ = $2;
          }
          ;

relational_expression: arithmetic_expression O_GT arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GT, $1->value > $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_LT arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LT, $1->value < $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_EQ arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_EQ, $1->value == $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_NE arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_NE, $1->value != $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_GE arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_GE, $1->value >= $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | arithmetic_expression O_LE arithmetic_expression {
              $$ = create_expression_node(AST_NODE_RELATIONAL_EXP, AST_OPR_LE, $1->value <= $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          ;


logical_expression: O_LGL_NOT boolean_expression {
              $$ = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_NOT, $2->value ? 0 : 1, NULL, (ast_node*)$2);
          } 
          | boolean_expression O_LGL_AND boolean_expression {
              $$ = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_AND, $1->value & $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          | boolean_expression O_LGL_OR boolean_expression {
              $$ = create_expression_node(AST_NODE_LOGICAL_EXP, AST_OPR_LGL_OR, $1->value | $3->value, (ast_node*)$1, (ast_node*)$3);
          }
          ;

conditional_statement: C_IF L_PAREN boolean_expression R_PAREN compound_statement conditional_statement_else_if conditional_statement_else {
                          printf("inside if\n");
                          $$ = create_conditional_if_node($3, $4, $5, $6);
                     }
                     ;  

conditional_statement_else_if: conditional_statement_else_if C_ELIF L_PAREN boolean_expression R_PAREN compound_statement {
                                 printf("inside else if\n");
                                 $$ = add_else_if_node($1, $4, $5);
                             }
                             | /* empty */    {
                                 $$ = create_else_if_node();
                             }
                             ;

conditional_statement_else: C_ELSE compound_statement {
                              printf("inside else\n");
                              $$ = $2;
                          }
                          | /* empty */ {
                              $$ = NULL;
                          }
                          ;

loop_statement_for: L_FOR IDENTIFIER {
                      $3->data_type = DT_INTEGER;}                    
                  ;

loop_statement_while: L_WHILE L_PAREN boolean_expression R_PAREN compound_statement {
                      printf("inside while\n");
                      $$ = create_loop_while_node($3, $4);
                    }
                    ;

parameters: parameter_list_def {
             $$ = $1; 
         }
         | /* empty */ {
             $$ = NULL;
         }
         ;

parameter_list_def: parameter_list_def COMMA parameter {
                    $$ = add_parameter_node($1, $3);
                  }
                  | parameter {
                      $$ = create_parameter_node();
                      $$ = add_parameter_node($$, $1);
                  }  
                  ;

parameter: DT_INT IDENTIFIER {
            $2->data_type = DT_INTEGER;

            $$ = create_variable_node(AST_DT_INT, $2);
         }
         | DT_BOOL IDENTIFIER {
            $2->data_type = DT_BOOLEAN;

            $$ = create_variable_node(AST_DT_BOOL, $2);
         }
         | DT_CHAR IDENTIFIER {
            $2->data_type = DT_CHAR_;

            $$ = create_variable_node(AST_DT_CHAR, $2);
         }
         ;

return_statement: F_RETURN boolean_expression SEMICOLON {
                    $$ = $2;
                }
                | F_RETURN arithmetic_expression SEMICOLON {
                    $$ = $2;
                }
                | F_RETURN SEMICOLON {
                    $$ = NULL;
                }
                ;

int_function_call: INT_IDENTIFIER LPAREN function_call_parameters RPAREN {
                if ($1 != NULL)
                {
                    if ($1->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    $$ = create_function_call_node($1, $3);
                    if(check_function_call($$) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
             ;

bool_function_call: BOOL_IDENTIFIER LPAREN function_call_parameters RPAREN {
                if ($1 != NULL)
                {
                    if ($1->is_function != 1)
                    {
                        yyerror("not a function");
                    }
                    
                    $$ = create_function_call_node($1, $3);
                    if(check_function_call($$) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
             ;

char_function_call: CHAR_IDENTIFIER LPAREN function_call_parameters RPAREN {
                    if ($1 != NULL)
                    {
                        if ($1->is_function != 1)
                        {
                            yyerror("not a function");
                        }

                        $$ = create_function_call_node($1, $3);
                        if(check_function_call($$) == -1)
                        {
                            yyerror("wrong paramters for the function");
                        }
                    }
                    else 
                    {
                        yyerror("function not defined");
                    }
                    printf("function call\n");
                    }
                ;

void_function_call: VOID_IDENTIFIER LPAREN function_call_parameters RPAREN {
                if ($1 != NULL)
                {
                    if ($1->is_function != 1)
                    {
                        yyerror("not a function");
                    }

                    $$ = create_function_call_node($1, $3);
                    if(check_function_call($$) == -1)
                    {
                        yyerror("wrong paramters for the function");
                    }
                }
                else 
                {
                    yyerror("function not defined");
                }
                printf("function call\n");
             }
             ;

function_call_parameters: function_call_parameters COMMA function_call_datatypes {
                            $$ = add_argument_node($1, $3);
                        }
                        | function_call_datatypes {
                            $$ = create_argument_node();
                            $$ = add_argument_node($$, $1);
                        }
                        | /* empty */ {
                            $$ = NULL;
                        }
                        ;
                        
function_call_datatypes: arithmetic_expression {
                           $$ = $1;
                       }
                       | boolean_expression {
                           $$ = $1;
                       }
                       ;


%%