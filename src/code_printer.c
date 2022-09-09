
#include "code_printer.h"


void ast_compound_statement_printer(ast_node_compound_statement *cmpd_stmt, FILE* handle, int is_func_def)
{
    int i = 0;
    ast_node_statements *temp;

    fprintf(handle, "%s", "{\n");
    vec_foreach(&cmpd_stmt->child_nodes, temp, i)
    {
        switch(temp->node_type)
        {
            case AST_NODE_COMPOUND_STATEMENT:
                ast_compound_statement_printer(((ast_node_statements*)temp)->child_nodes.compound_statement, handle, 0);
                break;
            
            case AST_NODE_DECLARATION:
                ast_declaration_printer(((ast_node_statements*)temp)->child_nodes.declaration, handle);
                break;
            
            case AST_NODE_ASSIGNMENT:
                ast_assignment_printer(((ast_node_statements*)temp)->child_nodes.assignment, handle);
                break;
        }
    }
    if (is_func_def == 0)
    {
        fprintf(handle, "%s", "}\n");
    }
}

void ast_declaration_printer(ast_node_declaration *decl, FILE* handle)
{
    if (decl != NULL && handle != NULL)
    {
        if (decl->expression == NULL)
        {
            if (decl->symbol_entry->data_type == DT_INTEGER || decl->symbol_entry->data_type == DT_BOOLEAN)
            {
                fprintf(handle, "\t%s %s = 0;\n", "int", decl->symbol_entry->identifier);
            }
            else if (decl->symbol_entry->data_type == DT_CHAR_)
            {
                fprintf(handle, "\t%s %s = 0;\n", "char", decl->symbol_entry->identifier);
            }
        }
        else if (decl->expression != NULL)
        {
            if (decl->symbol_entry->data_type == DT_INTEGER || decl->symbol_entry->data_type == DT_BOOLEAN)
            {
                fprintf(handle, "\t%s %s = ", "int", decl->symbol_entry->identifier);
            }
            else if (decl->symbol_entry->data_type == DT_CHAR_)
            {
                fprintf(handle, "\t%s %s = ", "char", decl->symbol_entry->identifier);
            }
            ast_expression_printer(decl->expression, handle);
            fprintf(handle, "%s", ";\n");
        }
        
    }
}

void ast_assignment_printer(ast_node_assignment *assg, FILE* handle)
{
    if (assg != NULL && handle != NULL)
    {
        fprintf(handle, "\t%s = ", assg->symbol_entry->identifier);
        ast_expression_printer(assg->expression, handle);
        fprintf(handle, "%s", ";\n");
    }
    
}

void ast_expression_printer(ast_node_expression* node, FILE* handle)
{
        if (node->opt == AST_NODE_CONSTANT)
        {
            fprintf(handle, " %d ", node->value);
        }

        if (node->opt == AST_NODE_CONSTANT_CHAR)
        {
            fprintf(handle, " '%c' ", node->value);
        }

        if (node->opt == AST_NODE_VARIABLE)
        {
            if (((ast_node_variable*)node->left)->symbol_entry->is_constant == 1)
            {
                fprintf(handle, " %d ", ((ast_node_variable*)node->left)->symbol_entry->value);
            }
            else if (((ast_node_variable*)node->left)->symbol_entry->is_constant == 0)
            {
                fprintf(handle, " %s ", ((ast_node_variable*)node->left)->symbol_entry->identifier);
            }
            
        }
}

int code_printer(ast_node* ast)
{
    FILE* handle = fopen("/tmp/temp.c", "w+");

    if (handle == NULL)
    {
        fprintf(stderr, "Unable to create translated file\n");
        exit(0);
    }

    int i = 0;
    ast_node *temp;

    fprintf(handle,"%s","}\n");
    temp = NULL;
    i = 0;

    vec_foreach(&ast->child_nodes, temp, i)
    {   
        switch(temp->node_type)
        {
            case AST_NODE_COMPOUND_STATEMENT:
                ast_compound_statement_printer(((ast_node_statements*)temp)->child_nodes.compound_statement, handle, 0);
                break;
            
            case AST_NODE_DECLARATION:
                ast_declaration_printer(((ast_node_statements*)temp)->child_nodes.declaration, handle);
                break;
            
            case AST_NODE_ASSIGNMENT:
                ast_assignment_printer(((ast_node_statements*)temp)->child_nodes.assignment, handle);
                break;
        }
    }
    fprintf(handle,"%s","}\n");
    fclose(handle);
}