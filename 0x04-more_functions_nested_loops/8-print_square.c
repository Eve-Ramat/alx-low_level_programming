#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int row, col;	/* Declare row and col outside the for loop */

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

