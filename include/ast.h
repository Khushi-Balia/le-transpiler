#ifndef AST_H
#define AST_H

#include "vec/vec.h"
#include "symbol_table.h"
#include <stdio.h>

#define AST_NODE                     0
#define AST_NODE_TRANSLATIONAL_UNIT  1
#define AST_NODE_STATEMENTS          2
#define AST_NODE_COMPOUND_STATEMENT  4
#define AST_NODE_DECLARATION         6
#define AST_NODE_ASSIGNMENT          7
#define AST_NODE_ARITHMETIC_EXP      8
#define AST_NODE_BOOLEAN_EXP         9
#define AST_NODE_CONSTANT            12
#define AST_NODE_CONSTANT_CHAR       10000
#define AST_NODE_VARIABLE            13

#define AST_OPR_ASSIGNMENT 44 // :=

#define AST_CONST_INT  45 // INT CONSTANT
#define AST_CONST_BOOL 46 // BOOL CONSTANT
#define AST_IDENTIFIER 47 // IDENTIFIER

#define AST_DT_INT  48 // DATA TYPE INT
#define AST_DT_BOOL 49 // DATA TYPE BOOL
#define AST_DT_VOID 50 // DATA TYPE VOID
#define AST_DT_CHAR 10001 // DATA TYPE CHAR

typedef vec_t(struct ast_node*) ast_nodes;
typedef vec_t(struct ast_node_statements*) ast_nodes_statements;
typedef vec_t(struct ast_node_variable*) ast_nodes_variables; 
typedef vec_t(struct ast_node_expression*) ast_nodes_expressions;

struct ast_node;
struct ast_node_statements;
struct ast_node_compound_statement;
struct ast_node_declaration;
struct ast_node_assignment;
struct ast_node_expression;
struct ast_node_constant;
struct ast_node_variable; 

typedef struct ast_node ast_node;
typedef struct ast_node_statements ast_node_statements;
typedef struct ast_node_compound_statement ast_node_compound_statement;
typedef struct ast_node_declaration ast_node_declaration;
typedef struct ast_node_assignment ast_node_assignment;
typedef struct ast_node_expression ast_node_expression;
typedef struct ast_node_constant ast_node_constant;
typedef struct ast_node_variable ast_node_variable;

struct ast_node 
{
    int node_type;
    ast_nodes child_nodes;
};

 struct ast_node_statements 
{
    int node_type;

    union child_nodes
    {
        ast_node_compound_statement *compound_statement;
        ast_node_declaration *declaration;
        ast_node_assignment *assignment;
    }child_nodes;
};

 struct ast_node_compound_statement
{
    int node_type;
    
    ast_nodes_statements child_nodes;
};

 struct ast_node_declaration
{
    int node_type;

    sym_ptr symbol_entry;
    ast_node_expression *expression;
};

 struct ast_node_assignment
{
    int node_type;

    sym_ptr symbol_entry;
    ast_node_expression *expression;
};

 struct ast_node_expression
{
    int node_type;
    int opt;
    int value;

    ast_node *left;
    ast_node *right;
};

 struct ast_node_constant
{
    int node_type;
    int data_type;

    int value;
};

 struct ast_node_variable
{
    int node_type;
    int data_type;

    sym_ptr symbol_entry;
}; 

ast_node *create_translation_unit();
ast_node *add_program_unit(ast_node *parent, ast_node *child);
ast_node_statements *create_statement_node(int node_type, void *child);
ast_node_compound_statement *create_compound_statement_node();
ast_node_compound_statement *add_compound_statement_node(ast_node_compound_statement *parent, ast_node_statements *child);
ast_node_declaration *create_declaration_node(sym_ptr symbol, ast_node_expression *exp);
ast_node_assignment *create_assignment_node(sym_ptr symbol, ast_node_expression *exp);
ast_node_expression *create_expression_node(int node_type, int opt, int value, ast_node *left, ast_node *right);
ast_node_constant *create_constant_node(int data_type, int value);
ast_node_variable *create_variable_node(int data_type, sym_ptr symbol); 


void ast_node_dump(ast_node* ast);
void ast_node_type(int node_type);

#endif