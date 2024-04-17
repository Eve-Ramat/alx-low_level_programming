#include "main.h"

/**
 * print_line - prints a straight line followed by a new line
 * @n: length of line to be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	for (n = n; n > 0; n--)
		_putchar(95);

	_putchar(10);
}

