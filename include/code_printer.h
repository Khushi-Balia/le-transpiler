#ifndef CODE_PRINTER_H
#define CODE_PRINTER_H

#include "ast.h"
#include "symbol_table.h"
#include "vec/vec.h"

#include <stdio.h>
#include <stdlib.h>

#define _OPR_LFT " << "
#define _OPR_ADD " + " 
#define _OPR_SUB " - " 
#define _OPR_MUL " * " 
#define _OPR_DIV " / " 
#define _OPR_MOD " % "

#define _OPR_GT " > "  
#define _OPR_LT " < " 
#define _OPR_EQ " == " 
#define _OPR_NE " != " 
#define _OPR_GE " >= " 
#define _OPR_LE " <= " 

#define _OPR_LGL_NOT " ! " 
#define _OPR_LGL_AND " && " 
#define _OPR_LGL_OR  " || " 

#define _OPR_ASSIGNMENT " = " 

#define _DT_INT_ "int"
#define _DT_VOID_ "void"
#define _DT_BOOL_ "bool"
#define _DT_CHAR_ "char"

#define TEST "#include<stdio.h>\n"
#define BEGIN "#include <stdint.h>\n#include <stddef.h>\n"
#define MAIN "\nint main(void)\n{\n"
#define END "\n\treturn 0;\n}\n"

void ast_compound_statement_printer(ast_node_compound_statement *cmpd_stmt, FILE* handle, int is_func_def);
void ast_conditional_if_printer(ast_node_conditional_if *node, FILE* handle);
void ast_declaration_printer(ast_node_declaration *decl, FILE* handle);
void ast_assignment_printer(ast_node_assignment *assg, FILE* handle);
void ast_expression_printer(ast_node_expression *node, FILE* handle);
void ast_function_call_printer(ast_node_function_call *fc, FILE* handle);
void ast_function_definition(ast_node_function_def *def, FILE* handle);
void ast_print_string_function_call_printer(ast_node_print_string_function_call *pfc, FILE* handle);
void ast_print_expression_function_call_printer(ast_node_print_expression_function_call *pfc, FILE *handle);
int code_printer(ast_node* ast);

#endif