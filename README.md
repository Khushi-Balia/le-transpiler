<br />
<p align ="center">
  <a href="transpiler">
    <img src="/images/PYLOX-1(1).png" alt="Logo" width="400" height="400">
  </a>
</p>

# **LE TRANSPILER**
- The main aim of our project is to convert our custom syntax pylox to an equivalent C code using a toy compiler.
## What is a **TRANSPILER**?
- A transpiler is a source-to-source translator, converting one source code to another.
------------
### What is the difference between a compiler and a Transpiler?
- A compiler converts a high-level language to a low-level language whereas, a transpiler, converts a high-level language to another high-level language 
----------


---
## Table of contents 
---
- [About our project](#about-the-project)
- [Implementation details of pylox](#implementation-details-of-pylox)
  - [Lexical analyser](#lexical-analyser)
  - [Parser](#parser)
  - [Code printer](#code-printer)
  - [Language Reference](#language-reference)
  - [Third party apps used](#third-party-apps-used)
  - [Cmake](#cmake)
  - [Build](#build)
  - [Generating temp.c file](#generating-temp.c-file)
  - [Compiling through make](#compiling-through-make)
  

- [Contributors](con)
- [Acknowledgements and Resources](#acknowledgements-and-resources)
- [Detail documentation](#detail-documentation)

-----
## About the Project
>Converts custom code (PYLOX) to C code, using flex and bison, 

To put it down simply, a transpiler has the following phases
- Lexical Analysis (Lexing)
- Syntax Analysis (Parsing)
- Code generation
----
## Implementation details of transpiler
---
### 1) **LEXING**
- Also known as tokenization, it converts a sequence of characters (string) to lexemes 
- These lexemes pass through the lexer and it gives us tokens
- These tokens are then sent forward to use in parsing 
>Extention of a lex program is .l
- These tokens are defined in [lexer.l](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/lexer.l),

### THREE COMPONENTS OF LEXICAL CODE 

1) DEFINITION 
2) RULES
3) USER CODE 
___

#### GENERAL SYNTAX OF LEXICAL ANALYZES 

```
%{
    //definitions
%}
   
%%
    // rules
%%

user code section //intmain()
```

![LEXER](https://qph.cf2.quoracdn.net/main-qimg-bd68eda594e9d8d081b4deafe9b9e092-lq)
----


---

### 2) **Parsing**


- The tokens we get after lexing, are passed through the parser
- On receiving the tokens, it forms a [parse tree ](https://en.wikipedia.org/wiki/Parse_tree  " parse tree ") using it
- This parse tree is simplified, removing all the extra, syntactic stuff, to give the AST (Abstract Syntax tree)
- Thus, we can say, AST is a compact version of the parse tree
- The grammar of the code is set using bison
>Extention of a parser program is .y

- In parse tree, after getting rid of the extra comment or other syntactic stuff is present it is passed through AST
>So the conversion of the tokens to AST is called parsing
- The language grammar is defined in a bison file named [parser.y](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/parser.y).
----
>After this step, we do semantic parsing whose result is an abstract syntax tree, AST is a tree data structure that stores various tokens as its nodes, such that it can abstractly represent the code in memory. 
>
>AST is what represents our language in memory, AST related functions are defined in [ast.c](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/ast.c)
![AST](https://vinaytech.files.wordpress.com/2008/10/img21.png " AST " )

----
### Code printer
The next step in a compiler is to naturally take this AST and turn it into code. This means converting each semantic node into equivalent C code in this case. This code printer is defined in [code_printer.c](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/code_printer.c)

## Language Reference
Refer to this language reference [PYLOX](https://github.com/Khushi-Balia/le-transpiler/blob/main/Inspired%20by%20Python%20%2B%20Lox%20%2B%20JS%20language%20-%20PYLOX%20-%20Inspired%20by%20Python%20%2B%20Lox%20.pdf)
## Third-party apps used 
- klib
- vec
>More details on third-party apps are present in the resources section 
----
## CMake
CMake can generate a native build environment that will compile source code, create libraries and build executables in arbitrary combinations.
Our [cmake code](https://github.com/Khushi-Balia/le-transpiler/blob/main/CMakeLists.txt)

----
## Build
```
git clone https://github.com/Khushi-Balia/le-transpiler
```
Then make a directory named **build** 
```
mkdir build
cd build
cmake ..
```
<img src="/images/n1.png" alt="drawing" width="500"/>

```
cmake --build
make

```
<img src="/images/n2.png" alt="drawing" width="500"/>

----
## Generating temp.c file
Open a terminal in the bin folder
```
nano pylox.test
```
This will open a text editor 

<img src="/images/n5.png" alt="drawing" width="500"/>


```
cat pylox.test
```
Using this cat you can view the content you have written in the text editor 



Write your code in your syntax 
```
./le-transpiler pylox.test
```
<img src="/images/n3.png" alt="drawing" width="500"/>


A temp. c file will be generate in your tmp folder in the computer that we have specified in file handling in  [code_printer.c](https://github.com/Khushi-Balia/le-transpiler/blob/main/src/code_printer.c)

<img src="/images/n4.png" alt="drawing" width="500"/>

----
## Compiling using make 

Compile the generated source code. 
Make a ``` makefile ```  in your tmp folder
```
cd tmp 
make
>gcc -c temp.c
>gcc temp.o -o final
./final
```

<img src="/images/final2.gif" alt="drawing"/>

----
## Contributors

* [Khushi balia](https://github.com/Khushi-Balia)        * [Rajat kaushik](https://github.com/rajatkaush11)


---
## Acknowledgements and Resources
* [SRA-VJTI for providing this wonderful opportunity](https://sravjti.in/) Eklavya 2021 
* Special thanks to [Krishna Narayanan](https://github.com/Krishna-13-cyber)
- [Repo referred](https://github.com/VedantParanjape/simpPRU/tree/master/src)
- [Lexer-parser code ](https://www.youtube.com/watch?v=eF9qWbuQLuw)
- [How to use markdown file](https://youtu.be/bpdvNwvEeSE)
- [Github tut](https://youtu.be/uaeKhfhYE0U)
- [Flex and Bison theory](https://aquamentus.com/flex_bison.html)

- [Third party apps]()
    - [vec](https://github.com/rxi/vec)
    - [klib](https://github.com/attractivechaos/klib)
    - 
- [Khushi's notes](https://github.com/rajatkaush11/le-transpiler/tree/develop-khushi)

- [Rajat's notes](https://github.com/rajatkaush11/le-transpiler/tree/develop-rajat)
---
## Detail documentation

----
