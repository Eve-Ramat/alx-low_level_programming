#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 *
 * @str: the variable pointer at str
 *
 */

void _puts(char *str)
{
int index;

for (index = 0; str[index] != '\0' ; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
