#include "main.h"

/**
 * print_times_table - Prints the multiplication table up to n.
 * @n: The maximum value up to which the table will be printed.
 */
void print_times_table(int n)
{
	int row, column;

	if (n > 15 || n < 0)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			int product = row * column;

			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product <= 9)
					_putchar(' ');
			}

			if (product > 99)
			{
				_putchar(product / 100 + '0');
				_putchar((product / 10 % 10) + '0');
			}
			else if (product > 9)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
			}
			else
			{
				if (column != 0)
					_putchar(' ');
			}

			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
