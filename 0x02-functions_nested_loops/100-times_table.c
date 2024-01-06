#include "main.h"

/**
 * print_times_table - Prints the multiplication table up to n.
 * @n: The maximum value up to which the table will be printed.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int row = 0; row <= n; row++)
	{
		for (int col = 0; col <= n; col++)
		{
			int product = row * col;

			if (product > 99)
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10 % 10) + '0');
				_putchar(product % 10 + '0');
			}
			else if (product > 9)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			else if (col != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(product + '0');
			}

			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

