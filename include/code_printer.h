#ifndef CODE_PRINTER_H
#define CODE_PRINTER_H

#include "ast.h"
#include "symbol_table.h"
#include "vec/vec.h"

#include <stdio.h>
#include <stdlib.h>

#define _OPR_ASSIGNMENT " = " 

#define _DT_INT_ "int"
#define _DT_VOID_ "void"
#define _DT_BOOL_ "bool"
#define _DT_CHAR_ "char"

void ast_compound_statement_printer(ast_node_compound_statement *cmpd_stmt, FILE* handle, int is_func_def);
void ast_declaration_printer(ast_node_declaration *decl, FILE* handle);
void ast_assignment_printer(ast_node_assignment *assg, FILE* handle);
void ast_expression_printer(ast_node_expression *node, FILE* handle);
int code_printer(ast_node* ast);

#endif