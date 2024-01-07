#include "main.h"

/**
 * print_times_table - Prints the multiplication table up to n.
 * @n: The maximum value up to which the table will be printed.
 */
void print_times_table(int n)
{
	int column, row;

	if (n < 0 || n > 15)
		return;

	for (column = 0; column <= n; column++)
	{
		for (row = 0; row <= n; row++)
		{
			int product = column * row;

			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product <= 9)
					_putchar(' ');
			}

			if (product > 99)
			{
				_putchar(product / 10 + '0');
			}
			else if (product > 9)
			{
				_putchar(' ');
				_putchar(product / 10 + '0');
			}
			else
			{
				if (row != 0)
					_putchar(' ');
			}

			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}

