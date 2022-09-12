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

#define TEST "#include<stdio.h>\n\nvoid start_counter()\n{\n    printf(\"start_counter called\\n\");\n}\n\nvoid stop_counter()\n{\n    printf(\"stop_counter called\\n\");\n}\n\nint read_counter()\n{\n    printf(\"read_counter called\\n\");\n    return 0;\n}\n\nvoid init()\n{\n    printf(\"init called\\n\");\n}\n\nvoid send(int data)\n{\n    printf(\"send called\\n\");\n}\n\nint receive()\n{\n    printf(\"receive_ called\\n\");\n    return 0;\n}\n"
#define BEGIN "#include<stdint.h>"
#define MAIN "int main(void)\n{\n"
#define END "\n\t return 0;\n}\n"
#define START_COUNTER "void start_counter()\n"
#define STOP_COUNTER "void stop_counter()\n"
#define READ_COUNTER "int read_counter()\n"

void ast_compound_statement_printer(ast_node_compound_statement *cmpd_stmt, FILE* handle, int is_func_def);
void ast_declaration_printer(ast_node_declaration *decl, FILE* handle);
void ast_assignment_printer(ast_node_assignment *assg, FILE* handle);
void ast_expression_printer(ast_node_expression *node, FILE* handle);
int code_printer(ast_node* ast);

#endif
