# **LE TRANSPILER**
- Basic aim of our project is to convert a custom synatx to a c code using a toy compiler what is flex token generation
## What is a **TRANSPILER** ?
- Transpiler is basically a source to source translator.
------------
### Q) what is difference between a compiler and a transpiler ?
- Basically a compiler converts a high level language to low level language whereas in a transpiler , it converts a high level language to another high level language 
----------
## Working of a transpiler

-Lexal Analysis by using flex (process known as lexing)
- syntax analysis by using bison (process known as parsing )
- AST(AbstraCT  Syntax Tree)
- code generation

![](https://mukulrathi.com/static/ca3e949e7c8ee94b4d006715236ae6cf/3d189/parsing-overview.webp)

-------
### **FLEX AND BISON** 
[ FULL DETAILS ON FLEX AND BISON ](https://aquamentus.com/flex_bison.html "FLEX AND BISON")


---------------------------------------
## 1) **LEXING**
- Also known as tokenization , it converts a sequence of characters (string) to lexemes 
- These lexemes passes through lexer and it gives us tokens
- these tokens are then send forward to use in parsing 



![lexing ]( https://www.guru99.com/images/1/020819_1105_LexicalAnal1.png)


---
## 2) **PARSING**
- Tokens are passed thorugh the parser and resulting in [parse tree ](https://en.wikipedia.org/wiki/Parse_tree  " parse tree ")
- In parse tree , after getting rid of extra comment or other syntactic stuff is present it is passed through AST
----
## 3) **AST- ABSTRACT SYNTAX TREE** 
- it is an abstract representation of the source code of a language where each node in the tree represent a construct occuring in the source code .

![AST](https://vinaytech.files.wordpress.com/2008/10/img21.png " AST " )
-------
## 4) **code generation**
- it is basically the phase which we get from AST is converted into the equivalent c code which was our aim .