#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}

