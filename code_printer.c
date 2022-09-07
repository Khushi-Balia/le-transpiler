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
            case AST_NODE_CONDITIONAL_IF:
                ast_conditional_if_printer(((ast_node_statements*)temp)->child_nodes.if_else, handle); 
                break;
        } 
    }
    if (is_func_def == 0)
    {
        fprintf(handle, "%s","}\n");
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
void ast_conditional_if_printer(ast_node_conditional_if *node, FILE* handle)
{
    if (node != NULL && handle != NULL)
    {
        fprintf(handle, "\t%s(", "if");
        ast_expression_printer(node->condition, handle);
        fprintf(handle, "%s", ")\n");
        ast_compound_statement_printer(node->body, handle, 0);

        if (node->else_if != NULL)
        {
            int i;
            ast_node_conditional_if *temp;
            vec_foreach(&node->else_if->else_if, temp, i)
            {
                fprintf(handle, "\t%s(", "else if");
                ast_expression_printer(temp->condition, handle);
                fprintf(handle, "%s", ")\n");
                ast_compound_statement_printer(temp->body, handle, 0);

            }
        }

        if (node->else_part != NULL)
        {
            fprintf(handle, "\t%s\n", "else");
            ast_compound_statement_printer(node->else_part, handle, 0);
        }
    }
}
void ast_function_definition(ast_node_function_def *def, FILE* handle)
{
    if (def != NULL && handle != NULL)
    {   
        switch(def->symbol_entry->data_type)
        {
            case DT_INTEGER:
            case DT_BOOLEAN:
                fprintf(handle, "%s ", _DT_INT_);
                break;

            case DT_CHAR_:
                fprintf(handle, "%s ", _DT_CHAR_);
                break;

            case DT_VOID_:
                fprintf(handle, "%s ", _DT_VOID_);
                break;
        }
        fprintf(handle, "%s(", def->symbol_entry->identifier);

        if (def->params != NULL)
        {
            int i;
            ast_node_variable *temp;
            vec_foreach(&def->params->variable, temp, i)
            {
                switch(temp->symbol_entry->data_type)
                {
                    case DT_INTEGER:
                    case DT_BOOLEAN:
                        fprintf(handle, "%s ", _DT_INT_);
                        break;

                    case DT_CHAR_:
                        fprintf(handle, "%s ", _DT_CHAR_);
                        break;
                }
                fprintf(handle, "%s", temp->symbol_entry->identifier);
                if (def->params->variable.length != i+1)
                {
                    fprintf(handle, "%s", ", ");
                }
            }
        }
        fprintf(handle, "%s", ")\n");
        ast_compound_statement_printer(def->body, handle, 1);
        
        if (def->return_statment != NULL)
        {
            fprintf(handle, "\t%s ", "return");
            ast_expression_printer(def->return_statment, handle);
            fprintf(handle, "%s", ";\n");
        }
        fprintf(handle, "%s", "}\n");
    }
}
