#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: the variable pointer at str
 *
 */

void _puts(char *str)
{
int current_character;

for (current_character = 0; str[current_character] != '\0' ; current_character++)
{
_putchar(str[current_character]);
}
_putchar('\n');
}
