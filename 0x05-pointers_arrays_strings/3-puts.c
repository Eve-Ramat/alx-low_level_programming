#include "main.h"

/**
 * _puts - print a string
 * @str: the string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
		_putchar(str[index]);
	}
	_putchar('\n');
}
