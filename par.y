%{
    #include <stdio.h>
    #include "symbol_table.h"
    #include "ast.h"
    #include "code_printer.h"
   ast_node *ast = NULL;
   smpym_ptr temp =NULL;
    
%}


%union {
    int integer;
    int boolean;
    char* string;
    struct symbol* symbol_handle;
    struct ast_node *node;
    struct ast_node_statements *statements;
    struct ast_node_conditional_if *conditional_if;
    struct ast_node_conditional_else_if *conditional_else_if;
    struct ast_node_declaration *declaration;
    struct ast_node_assignment *assignment;
    struct AST_NODE_compound_statement *compound_statement;
    struct ast_node_loop_for *loop_for;
    struct ast_node_loop_while *loop_while;
    struct ast_node_loop_control *loop_control;
}   
%left LBRACE RBRACE 
%left LPAREN RPAREN
%left LSQUARE RSQUARE

%token <str> DT_INT DT_BOOL DT_CHAR DT_FLOAT  
%token OUT exp EOL 
%token LBRACE RBRACE LPAREN RPAREN LSQUARE RSQUARE 
%token <symbol_handle> IDENTIFIER DT_INT_IDENTIFIER DT_BOOL_IDENTIFIER DT_FLOAT_IDENTIFIER DT_CHAR_IDENTIFIER

%token ASSIGN OPR_ASSIGNMENT
%token <symbol_handle> INT_IDENTIFIER BOOL_IDENTIFIER FLOAT_IDENTIFIER CHAR_IDENTIFIER

%token arithmetic_expression boolean_expression
%token CONST_STRING
%token KW_FOR KW_IN KW_WHILE KW_BREAK KW_CONTINUE
%token IF ELSE ELIF

%type <node> translation_unit program 
%type <statement> statement
%type <conditional_else_if> conditional_statement_else_if
%type <expression> arithmetic_expression boolean_expression
%type <declaration> declaration 
%type <declaration_assignment> declaration_assignment
%type <assignment> assignment 
%type <compound_statement> compound_statement
%type <statement_list > statement_list
%type <loop_for> loop_statement_for
%type <loop_while> loop_statement_while
%type <conditional_statement_else> conditional_statement_else
%type <conditional_statement> conditional_statement

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
empty_statement: {
              printf ("blank statement\n");
            }
            ;
statement: compound_statement {
        $$ = create_statement_node(AST_NODE_COMPOUND_STATEMENT, (void*)$1);
        }
        | empty_statement {
        $$ = create_statement_node(AST_NODE_EMPTY_STATEMENT, NULL); 
        }
        |declaration {
         $$ = create_statement_node(AST_NODE_DECLARATION, (void*)$1);
        }
         
        | declaration_assignment {
         $$ = create_statement_node(AST_NODE_DECLARATION, (void*)$1);
        }
         
        | assignment {
         $$ = create_statement_node(AST_NODE_ASSIGNMENT, (void*)$1)
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
           | DT_BOOL IDENTIFIER  {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_BOOLEAN;
               $$ = create_declaration_node($2, NULL);

               printf ("bool %s ;\n", $2->identifier);
           }
           | DT_FLOAT IDENTIFIER  {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_FLOAT;
               $$ = create_declaration_node($2, NULL);

               printf ("float%s ;\n", $2->identifier);
           }
           | DT_CHAR IDENTIFIER  {
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
            | DT_FLOAT IDENTIFIER OPR_ASSIGNMENT boolean_expression {
               if ($2 == NULL)
               {
                   yyerror("variable already defined");
               }

               $2->data_type = DT_FLOAT;
               $2->value = $4->value;
               $$ = create_declaration_node($2, $4);

               printf ("%s := %d\n", $2->identifier, $2->value);
            }
            | DT_CHAR IDENTIFIER OPR_ASSIGNMENT arithmetic_expression {
                if ($2 == NULL)
                {
                    yyerror("variable already defined");
                }

                $2->data_type = DT_CHAR ;
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
            | FLOAT_IDENTIFIER OPR_ASSIGNMENT boolean_expression {
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
                
                $1->data_type = DT_FLOAT;  
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
conditional_statement: IF boolean_expression compound_statement conditional_statement_else_if conditional_statement_else {
                          printf("inside if\n");
                          $$ = create_conditional_if_node($3, $4, $5);
                     }
                     ;  

conditional_statement_else_if: conditional_statement_else_if ELIF  boolean_expression compound_statement {
                                 printf("inside else if\n");
                                 $$ = add_else_if_node($1, $4);
                             }
                             | /* empty */    {
                                 $$ = create_else_if_node();
                             }
                             ;

conditional_statement_else: ELSE compound_statement {
                              printf("inside else\n");
                              $$ = $2;
                          }
                          | /* empty */ {
                              $$ = NULL;
                          }
                          ;
                          
%%