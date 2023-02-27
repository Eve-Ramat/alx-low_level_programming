# C - Pointers, arrays and strings
***
This project led me to understand the following:
* What are pointers and how to use them
* What are arrays and how to use them
* The differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

## Tasks:
***
_**0. 98 Battery st.**_
* **Write a function that takes a pointer to an `int` as parameter and updates the value it points to `98`.**
   * Prototype: `void reset_to_98(int *n);`
   * File: [0-reset_to_98.c](./0-reset_to_98.c)
    
_**1. Don't swap horses in crossing a stream**_
* **Write a function that swaps the values of two integers.**
   * Prototype: `void swap_int(int *a, int *b);`
   * File: [1-swap.c](./1-swap.c)
   
_**2. This report, by its very length, defends itself against the risk of being read**_
* **Write a function that returns the length of a string.**
   * Prototype: `int _strlen(char *s);`
   * FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.
   * File: [2-strlen.c](./2-strlen.c)
   
_**3. I do not fear computers. I fear the lack of them**_
* **Write a function that prints a string, followed by a new line, to stdout.**
   * Prototype: `void _puts(char *str);`
   * FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.
   * File: [3-puts.c](./3-puts.c)
   
_**4. I can only go one way. I've not got a reverse gear**_
* **Write a function that prints a string, in reverse, followed by a new line.**
   * Prototype: `void print_rev(char *s);`
   * File: [4-print_rev.c](./4-print_rev.c)
   
_**5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**_
* **Write a function that reverses a string.**
   *`Prototype: `void rev_string(char *s);`
   * File: [5-rev_string.c](./5-rev_string.c)
   
_**6. Half the lies they tell about me aren't true**_
* **Write a function that prints every other character of a string, starting with the first character, followed by a new line.**
   * Prototype: `void puts2(char *str);`
   * File: [6-puts2.c](./6-puts2.c)
   
_**7. Winning is only half of it. Having fun is the other half**_
* **Write a function that prints half of a string, followed by a new line.**
   * `Prototype: void puts_half(char *str);`
   *The function should print the second half of the string
   * If the number of characters is odd, the function should print the last n characters of the string, where `n = (length_of_the_string - 1) / 2`
   * File: [7-puts_half.c](./7-puts_half.c)
   
_**8. Arrays are not pointers**_
* **Write a function that prints n elements of an array of integers, followed by a new line.**
   * Prototype: `void print_array(int *a, int n);`
   * where `n` is the number of elements of the array to be printed
   * Numbers must be separated by comma, followed by a space
   * The numbers should be displayed in the same order as they are stored in the array
   * You are allowed to use `printf`
   * File: [8-print_array.c](./8-print_array.c)
   
_**9. strcpy**
* **Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.**
   * Prototype: `char *_strcpy(char *dest, char *src);`
   * Return value: the pointer to `dest`
   * FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.
   * File: [9-strcpy.c](./9-strcpy.c)
   
_**10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**_
* **Write a function that convert a string to an integer.**
   * Prototype: `int _atoi(char *s);`
   * The number in the string can be preceded by an infinite number of characters
   * You need to take into account all the `-` and `+` signs before the number
   * If there are no numbers in the string, the function must return `0`
   * You are not allowed to use `long`
   * You are not allowed to declare new variables of “type” `array`
   * You are not allowed to hard-code special values
   * We will use the `-fsanitize=signed-integer-overflow` `gcc` flag to compile your code.
   * FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.
   * File: [100-atoi.c](./100-atoi.c)
   
_**11. Don't hate the hacker, hate the code**_
* **Create a program that generates random valid passwords for the program 101-crackme.**
   * You are allowed to use the standard library
   * You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
   * man `srand`, `rand`, `time`
   * `gdb` and `objdump` can help
   * File: [101-keygen.c](./101-keygen.c)
   
***
 * File: [main.h](./main.h) contains all my function prototypes.
 * File: [_putchar.c](./_putchar.c) writes to standard output.
