#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, space, hash;

		for (row = 0; row < size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}

			for (hash = 0; hash <= row; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

