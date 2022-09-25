# le-transpiler
Building a toy compiler with a custom language(PYLOX), transpiling it to the C code

---
## Table of contents 
---
- [About the project](#about-the-project)
- [Implementation details of pylox](#implementation-details-of-pylox)
  - [Lexical analyser](#lexical-analyser)
  - [Parser](#parser)
  - [Code printer](#code-printer)
  - [Language Reference](#language-reference)
- [Examples](#examples)
- [Building from source](#building-from-source)
  - [Dependencies](#dependencies)
  - [Build](#build)
  - [Install](#install)

- [Contributors](con)
 [Acknowledgements and Resources](#acknowledgements-and-resources)
* [License](#license)

-----
## About the Project
>Converts custom code (PYLOX) to C code, using flex and bison, 

To put it down simply, a transpiler has the following phases
- Lexal Analysis (Lexing)
- Syntax Analysis (Parsing)
- Code generation
----
## implementation details of transpiler

![working](https://mukulrathi.com/static/ca3e949e7c8ee94b4d006715236ae6cf/a7a53/parsing-overview.png)
------
---
### Lexical analyser
This is the simplest step. Given our grammar, we need to break down our input into a list of known tokens. As mentioned before, our grammar has tokens, namely, identifiers, numbers (integers and floats), the mathematical operators, parentheses, braces, keywords, etc.

This step basically reads from the input files, and generates tokens in the flex file. The tokens are defined in [lexer.l](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/lexer.l), and the actions that need to be taken after detecting a token is specified in this file itself. For example, if it finds, "int" in the input file, lexer will return a token say KW_INT to the parser.

![lexer](https://cdn1.byjus.com/wp-content/uploads/2022/01/the-architecture-of-lexical-analyzer.png)
----


---
### Parser
This is the most challenging part. We need to parse the list of tokens that we received from lexical analyzer, and evaluate these using language grammar to make sense of the tokens. The language grammar is defined in a bison file named [parser.y](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/parser.y).

After this step, we do semantic parsing whose result is an abstract syntax tree, AST is a tree data structure which stores various token as it nodes, such that it can represent the code in an abstract way in memory. AST is what represents our language in memory, AST related functions are defined in [ast.c](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/ast.c)

![parser](https://ruslanspivak.com/lsbasi-part7/lsbasi_part7_ast_01.png)
----

----
### Code printer
The next step in a compiler is to naturally take this AST and turn it into code. This means converting each semantic node into equivalent C code in this case. This code printer is defined in   [code_printer.c](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/code_printer.c)

## Language Reference
Please refer to this language reference [page](https://github.com/Khushi-Balia/le-transpiler/blob/main/Inspired%20by%20Python%20%2B%20Lox%20%2B%20JS%20language%20-%20PYLOX%20-%20Inspired%20by%20Python%20%2B%20Lox%20.pdf)

----
## Building from source
### Dependencies
* flex
* bison
### build 
### install
----
## Contributors
* [Khushi balia](https://github.com/Khushi-Balia)
* [Rajat kaushik](https://github.com/rajatkaush11)

---
## Acknowledgements and Resources
* [SRA-VJTI for providing this wonderful opportunity](https://sravjti.in/) Eklavya 2021 
* Special thanks to [Krishna Narayanan](https://github.com/Krishna-13-cyber)
- https://github.com/VedantParanjape/simpPRU/tree/master/src
- [flex and bison theory](https://aquamentus.com/flex_bison.html)
- [third party apps]()
    - [vex](https://github.com/rxi/vec)
    - [ klib](https://github.com/attractivechaos/klib)
- [Khushi's notes](https://github.com/rajatkaush11/le-transpiler/tree/develop-khushi)

- [Rajat's notes](https://github.com/rajatkaush11/le-transpiler/tree/develop-rajat)
---
## License 
