#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			column != 0 ? (_putchar(','), _putchar(32)) : 0;

			product = row * column;

			product >= 10 ?
				(_putchar((product / 10) + '0'), _putchar((product % 10) + '0')) :
				(product < 10 && column != 0 ?
					(_putchar(32), _putchar(product + '0')) :
					_putchar(product + '0')
				);
		}
		_putchar(10);
	}
}

