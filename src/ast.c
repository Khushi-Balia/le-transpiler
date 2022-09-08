#include "ast.h"

ast_node *create_translation_unit()
{
    ast_node *tu = (ast_node*)malloc(sizeof(ast_node));

    tu->node_type = AST_NODE_TRANSLATIONAL_UNIT;
    vec_init(&tu->child_nodes);

    return tu;
}

ast_node *add_program_unit(ast_node *parent, ast_node *child)
{
    vec_push(&parent->child_nodes, child);

    return parent;
}

ast_node_statements *create_statement_node(int node_type, void *child)
{
    ast_node_statements *stmt = (ast_node_statements*)malloc(sizeof(ast_node_statements));

    stmt->node_type = node_type;
    switch (node_type)
    {
        case AST_NODE_COMPOUND_STATEMENT:
            stmt->child_nodes.compound_statement = child;
            break;

        case AST_NODE_DECLARATION:
            stmt->child_nodes.declaration = child;
            break;    
        
        case AST_NODE_ASSIGNMENT:
            stmt->child_nodes.assignment = child;
            break;
    }

    return stmt;
}

ast_node_compound_statement *create_compound_statement_node()
{
    ast_node_compound_statement *cmpd_stmt = (ast_node_compound_statement*)malloc(sizeof(ast_node_compound_statement));

    cmpd_stmt->node_type = AST_NODE_COMPOUND_STATEMENT;
    vec_init(&cmpd_stmt->child_nodes);

    return cmpd_stmt;
}

ast_node_compound_statement *add_compound_statement_node(ast_node_compound_statement *parent, ast_node_statements *child)
{
    vec_push(&parent->child_nodes, child);

    return parent;
}

ast_node_declaration *create_declaration_node(sym_ptr symbol, ast_node_expression *exp)
{
    ast_node_declaration *decl = (ast_node_declaration*)malloc(sizeof(ast_node_declaration));

    decl->node_type = AST_NODE_DECLARATION;
    decl->expression = exp;
    decl->symbol_entry = symbol;

    return decl;
}

ast_node_assignment *create_assignment_node(sym_ptr symbol, ast_node_expression *exp)
{
    ast_node_assignment *assgn = (ast_node_assignment*)malloc(sizeof(ast_node_assignment));

    assgn->node_type = AST_NODE_ASSIGNMENT;
    assgn->expression = exp;
    assgn->symbol_entry = symbol;

    return assgn;
}

ast_node_expression *create_expression_node(int node_type, int opt, int value, ast_node *left, ast_node *right)
{
    ast_node_expression *exp = (ast_node_expression*)malloc(sizeof(ast_node_expression));

    exp->node_type = node_type;
    exp->opt = opt;
    exp->value = value;
    exp->left = left;
    exp->right = right;

    return exp;
}

ast_node_constant *create_constant_node(int data_type, int value)
{
    ast_node_constant *cnst = (ast_node_constant*)malloc(sizeof(ast_node_constant)); 

    cnst->node_type = AST_NODE_CONSTANT;
    cnst->data_type = data_type;
    cnst->value = value;

    return cnst;
}

ast_node_variable *create_variable_node(int data_type, sym_ptr symbol)
{
    ast_node_variable *var = (ast_node_variable*)malloc(sizeof(ast_node_variable));

    var->node_type = AST_NODE_VARIABLE;
    var->data_type = data_type;
    var->symbol_entry = symbol;

    return var;
}

void ast_node_dump(ast_node* ast)
{
    ast_node_type(ast->node_type);

    int i = 0;
    ast_node *temp;
    
    vec_foreach(&ast->child_nodes, temp, i)
    {
        ast_node_type(temp->node_type);   
    }
}

void ast_node_type(int node_type)
{
    switch (node_type)
    {
        case AST_NODE:
            printf("ast node");
            break;

        case AST_NODE_TRANSLATIONAL_UNIT:
            printf("ast translational unit");
            break;

        case AST_NODE_STATEMENTS:
            printf("ast statements");
            break;

        case AST_NODE_COMPOUND_STATEMENT:
            printf("ast compound statement");
            break;

        case AST_NODE_DECLARATION:
            printf("ast declaration");
            break;

        case AST_NODE_ASSIGNMENT:
            printf("ast assignment");
            break;

        case AST_NODE_ARITHMETIC_EXP:
            printf("ast arithmetic expression");
            break;

        case AST_NODE_BOOLEAN_EXP:
            printf("ast boolean expression");
            break;

        case AST_NODE_CONSTANT:
            printf("ast constant");
            break;

        case AST_NODE_CONSTANT_CHAR:
            printf("ast_constant_char");
            break;

        case AST_NODE_VARIABLE:
            printf("ast variable");
            break;

        default:
            printf("ast invalid");
            break;
    }
    printf("\n");
}