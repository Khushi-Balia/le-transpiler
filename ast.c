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
        case AST_NODE_DECLARATION:
            stmt->child_nodes.declaration = child;
            break;   
        case AST_NODE_ASSIGNMENT:
            stmt->child_nodes.assignment = child;
            break;    
        case AST_NODE_CONDITIONAL_IF:
            stmt->child_nodes.if_else = child;
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
ast_node_conditional_if *create_conditional_if_node(ast_node_expression *condition, ast_node_compound_statement *body, ast_node_conditional_else_if *else_if, ast_node_compound_statement *else_node)
{
    ast_node_conditional_if *cond_if = (ast_node_conditional_if*)malloc(sizeof(ast_node_conditional_if));

    cond_if->node_type = AST_NODE_CONDITIONAL_IF;
    cond_if->condition = condition;
    cond_if->body = body;
    cond_if->else_if = else_if;
    cond_if->else_part = else_node;

    return cond_if;
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

        case AST_NODE_EMPTY_STATEMENT:
            printf("ast empty statement");
            break;

        case AST_NODE_DECLARATION:
            printf("ast declaration");
            break;
        case AST_NODE_ASSIGNMENT:
            printf("ast assignment");
            break;
        case AST_NODE_CONDITIONAL_IF:
            printf("ast if statement");
            break;

        case AST_NODE_CONDITIONAL_ELSE_IF:
            printf("ast elseif statement");
            break;

        default:
             printf("ast invalid");
             break;
    }
    printf("\n");   
}
    