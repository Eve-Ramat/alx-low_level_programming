#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (product >= 0)
			{
				_putchar(44);
				_putchar(32);
			}

			if (product <= 9)
			{
				_putchar(32);
				_putchar(product + 48);
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
		}

		_putchar(10);
	}
}
