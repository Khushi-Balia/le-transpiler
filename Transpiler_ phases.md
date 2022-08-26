# Le Transpiler
## _Building a toy compiler_

>Converts custom code to C code, using flex and bison, 

To put it down simply, a transpiler has the following phases
- Lexal Analysis (Lexing)
- Syntax Analysis (Parsing)
- Code generation

## Working of a transpiler

![working](/images/working.png)

### 1) **Lexing**

- The source code given as input, is broken down into small parts called lexemes.
- The lexemes produced will be passed through the lexer 
- The lexer returns tokens
- This is done using flex

>So the conversion of stream of words(our code) to tokens is called lexical analysis

### 2) **Parsing**


- The tokens we get after lexing, are passed through the parser
- On receiving the tokens, it forms a parse tree using it
- This parse tree is simplified, removing all the extra, syntactic stuff, to give the AST (Abstract Synatx tree)
- Thus, we can say, AST is a compact version of the parse tree
- The grammar of the code is set using bison

>So the conversion of the tokens to AST is called parsing

![phases](/images/phases.jpeg)

The difference between an AST and a parse tree:

![parsing](/images/ast.png)

### 3) **Code Generation**

- The phase of taking in the AST, tranversing through the nodes and converting it into equivalent C code
 

 ---
 Example for understanding:

 ![example](/images/example.png)



