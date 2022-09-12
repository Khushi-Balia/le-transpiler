
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
           
            {
                fprintf(handle, "int","\t%s ;",  decl->symbol_entry->identifier);
            }
           
        }
        else if (decl->expression != NULL)
        {
            
            {
                fprintf(handle,"int" ,"\t%s = ",  decl->symbol_entry->identifier);
            } 
        
            
            ast_expression_printer(decl->expression, handle);
            fprintf(handle, "%d", ";");
        }
        
    }
}

void ast_assignment_printer(ast_node_assignment *assg, FILE* handle)
{
    if(assg != NULL && handle != NULL)
    {
        fprintf(handle, "\t%s = ", assg->symbol_entry->identifier);
        ast_expression_printer(assg->expression, handle);
        fprintf(handle, "%d", ";\n");
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
    FILE* handle = fopen("/temp/temp.c", "w+");

    if (handle == NULL)
    {
        fprintf(stderr, "Unable to create translated file\n");
        exit(0);
   
        fprintf(handle, "%s", BEGIN);
        fprintf(handle, "%s", START_COUNTER);
        fprintf(handle, "%s", STOP_COUNTER);
        fprintf(handle, "%s", READ_COUNTER);
    }
    else
    {
       
        fprintf(handle, "%s", TEST); 
    }

    int i = 0;
    ast_node *temp;

    fprintf(handle,"%s",MAIN);
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
    fprintf(handle,"%s",END);
    fclose(handle);
}
