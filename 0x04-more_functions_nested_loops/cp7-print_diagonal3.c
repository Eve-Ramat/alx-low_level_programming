#include "main.h"

/**
 * print_diagonal - Prints a diagonal line on the terminal.
 * @n: The number of times the character '\' should be printed.
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

		for (slashes = 1; slashes <= n; slashes++)
		{
			for (spaces = 1; spaces < slashes; spaces++)
			{
				_putchar(32);
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

