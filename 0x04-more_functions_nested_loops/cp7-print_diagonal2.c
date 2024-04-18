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
		int slashes, spaces;

		for (spaces = 0; spaces < n; spaces++)
		{
			for (slashes = 0; slashes < spaces; slashes++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

