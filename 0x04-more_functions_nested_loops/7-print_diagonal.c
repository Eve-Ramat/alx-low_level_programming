#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, spaces;

		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

