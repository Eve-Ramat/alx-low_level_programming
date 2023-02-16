**Description of the files containing my solutions to the** 
[0x00. C - Hello, World](https://github.com/Eve-Ramat/alx-low_level_programming/tree/master/0x00-hello_world) **project**

1.  * [0-preprocessor](./0-preprocessor): Bash script that runs a C file saved in the
  variable `$CFILE` through the preprocessor and saves the result in the file `c`.
2.  * [1-compiler](./1-compiler): Bash script that compiles a C file saved in the
  variable `$CFILE` that does not link; saves the result in an output file of the
  same name but with a `.o` extension.
    * Example: If the C file is `main.c`, the output is `main.o`.
3.  * [2-assembler](./2-assembler): Bash script that generates the assembly code of a
  C code saved in the variable `$CFILE`; saves the result in an output file of the
  same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the result is `main.s`.
4.  * [3-name](./3-name): Bash Script that compiles a C file saved in the variable
  `$CFILE` and creates an executable `cisfun`.
5.  * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building
  a multilingual puzzle`, followed by a new line, using the function `puts`.
6.  * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammer, but
  the outcome is a piece of art,`, followed by a new line, using the function `printf`.
7.  * [6-size.c](./6-size.c): C program that prints the size of various types on the computer
  it is compiled and run on.
8.  * [100-intel](./100-intel): Script that generates the assembly code in Intel syntax of a
  C file saved in the variable $CFILE; saves the result in an output file of the same name
  but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.
9.  * [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is
  useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error,
  without using any functions listed in the NAME sesction of the man(3) `printf` or man(3)
  `puts`.

## These are a description to the gcc options I put in my code
|Options|Description|
|:---|:---|
|-c|Stops the compilation process before linking stage|
|-E|Terminate compilation after processing|
|-o filename|Writes output to a specified file|
|-S|Stops compilation process after generating assembly code|
|-masm=intel|Creates an intel syntax of assembly code of the C file|
