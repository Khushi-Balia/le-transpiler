#include "code_printer.h"
#include <stdio.h>
#include <stdlib.h>
#include "ast.h"
#include "symbol_table.h"

void ast_compound_statement_printer(ast_node_compound_statement *cmpd_stmt, FILE* handle, int is_func_def)
{
    int i = 0;
    ast_node_statements *temp;

    

    fprintf(handle, "\t%s", "{\n");
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

            case AST_NODE_FUNC_CALL:
                fprintf(handle, "%s", "\t");
                ast_function_call_printer(((ast_node_statements*)temp)->child_nodes.function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;

            case AST_NODE_PRINT_STRING_FUNCTION_CALL:
                fprintf(handle, "%s", "\t");
                ast_print_string_function_call_printer(((ast_node_statements*)temp)->child_nodes.print_string_function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;

            case AST_NODE_PRINT_EXP_FUNCTION_CALL:
                fprintf(handle, "%s", "\t");
                ast_print_expression_function_call_printer(((ast_node_statements*)temp)->child_nodes.print_expression_function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;
        
        }
    }
    if (is_func_def == 0)
    {
        fprintf(handle, "\t%s", "}\n");
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
                fprintf(handle, "\t%s %s ;\n", "int", decl->symbol_entry->identifier);
            }
            else if (decl->symbol_entry->data_type == DT_CHAR_)
            {
                fprintf(handle, "\t%s %s ;\n", "char", decl->symbol_entry->identifier);
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
    if(assg != NULL && handle != NULL)
    {
        fprintf(handle, "\t%s = ", assg->symbol_entry->identifier);
        ast_expression_printer(assg->expression, handle);
        fprintf(handle, "%s", ";\n");
    }
    
}

void ast_expression_printer(ast_node_expression* node, FILE* handle)
{
    if (node != NULL && handle != NULL)
    {
        if (node->opt >= AST_OPR_BW_LFT && node->opt <= AST_OPR_LGL_OR)
        {
            fprintf(handle, "%s", "(");
            ast_expression_printer((ast_node_expression*)node->left, handle);
            switch (node->opt)
            {
                case AST_OPR_BW_LFT:
                    fprintf(handle, "%s", _OPR_LFT);
                    break;

                case AST_OPR_ADD:
                    fprintf(handle, "%s", _OPR_ADD);
                    break;     

                case AST_OPR_SUB:
                    fprintf(handle, "%s", _OPR_SUB);
                    break;     

                case AST_OPR_MUL:
                    fprintf(handle, "%s", _OPR_MUL);
                    break;     
    
                case AST_OPR_DIV:
                    fprintf(handle, "%s", _OPR_DIV);
                    break;     
                
                case AST_OPR_MOD:
                    fprintf(handle, "%s", _OPR_MOD);
                    break;

                case AST_OPR_GT:
                    fprintf(handle, "%s", _OPR_GT);
                    break;     
      
                case AST_OPR_LT:     
                    fprintf(handle, "%s", _OPR_LT);
                    break;     

                case AST_OPR_EQ:     
                    fprintf(handle, "%s", _OPR_EQ);
                    break;     

                case AST_OPR_NE:
                    fprintf(handle, "%s", _OPR_NE);
                    break;     
     
                case AST_OPR_GE: 
                    fprintf(handle, "%s", _OPR_GE);
                    break;     
    
                case AST_OPR_LE:
                    fprintf(handle, "%s", _OPR_LE);
                    break;     

                case AST_OPR_LGL_NOT: 
                    fprintf(handle, "%s", _OPR_LGL_NOT);
                    break;     

                case AST_OPR_LGL_AND: 
                    fprintf(handle, "%s", _OPR_LGL_AND);
                    break;     

                case AST_OPR_LGL_OR:  
                    fprintf(handle, "%s", _OPR_LGL_OR);
                    break;     
            }
            ast_expression_printer((ast_node_expression*)node->right, handle);
            fprintf(handle, "%s", ")");
        }

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

        if (node->opt == AST_NODE_FUNC_CALL)
        {
            ast_function_call_printer((ast_node_function_call*)node->left, handle);
        }

    }
}

void ast_conditional_if_printer(ast_node_conditional_if *node, FILE* handle)
{
    if (node != NULL && handle != NULL)
    {
        fprintf(handle, "\t%s", "if");
        ast_expression_printer(node->condition, handle);
        fprintf(handle, "\n");
        ast_compound_statement_printer(node->body, handle, 0);

        if (node->else_if != NULL)
        {
            int i;
            ast_node_conditional_if *temp;
            vec_foreach(&node->else_if->else_if, temp, i)
            {
                fprintf(handle, "\t%s", "else if");
                ast_expression_printer(temp->condition, handle);
                fprintf(handle, "\n");
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

void ast_print_expression_function_call_printer(ast_node_print_expression_function_call *pfc, FILE *handle)
{
    if (pfc != NULL && handle != NULL)
    {
        fprintf(handle, "printf(\"%%d\", ");
        ast_expression_printer(pfc->expression, handle);
        fprintf(handle, ")");
        
        if (pfc->add_newline)
        {
            fprintf(handle, "; printf(\"\\n\")");
        }
    }
}

void ast_function_call_printer(ast_node_function_call *fc, FILE* handle)
{
    if (fc != NULL && handle != NULL)
    {   
        fprintf(handle, "%s(", fc->symbol_entry->identifier);

        int iter;
        ast_node_expression *exp;
        if (fc->args != NULL)
        {
            vec_foreach(&fc->args->arguments, exp, iter)
            {
                ast_expression_printer(exp, handle);
                if (fc->args->arguments.length != iter+1)
                {
                    fprintf(handle, "%s", ",");
                }
            }
        }
        fprintf(handle, "%s", ")");
    }
}

void ast_print_string_function_call_printer(ast_node_print_string_function_call *pfc, FILE* handle)
{
    if (pfc != NULL && handle != NULL)
    {
        fprintf(handle, "printf(\"%%s\", %s)", pfc->string);
        if (pfc->add_newline)
        {
            fprintf(handle, "; printf(\"\\n\")");
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

int code_printer(ast_node* ast)
{
    FILE* handle = fopen("/tmp/temp.c","w");

    if (handle == NULL)
    {
        perror("Error");
    }    
    
    fprintf(handle, "%s", TEST);
    fprintf(handle, "\n");
    
    int i = 0;
    ast_node *temp;

     vec_foreach(&ast->child_nodes, temp, i)
    {
        if (temp->node_type == AST_NODE_FUNCTION_DEFS)
        {
            ast_function_definition((ast_node_function_def*)temp, handle);
        }
    }
    fprintf(handle, "%s", MAIN);
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

            case AST_NODE_CONDITIONAL_IF:
                ast_conditional_if_printer(((ast_node_statements*)temp)->child_nodes.if_else, handle); 
                break;

            case AST_NODE_PRINT_STRING_FUNCTION_CALL:
                fprintf(handle, "%s", "\t");
                ast_print_string_function_call_printer(((ast_node_statements*)temp)->child_nodes.print_string_function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;

            case AST_NODE_FUNC_CALL:
                fprintf(handle, "%s", "\t");
                ast_function_call_printer(((ast_node_statements*)temp)->child_nodes.function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;
            
            case AST_NODE_PRINT_EXP_FUNCTION_CALL:
                fprintf(handle, "%s", "\t");
                ast_print_expression_function_call_printer(((ast_node_statements*)temp)->child_nodes.print_expression_function_call, handle);
                fprintf(handle, "%s", ";\n");
                break;
                
        }
    }
    fprintf(handle,"%s",END);
    fclose(handle);
}