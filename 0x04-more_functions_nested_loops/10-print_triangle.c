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
		int row = 1, space = 1, hash = 1;

		for (row = 1; row <= size; row++)
		{
			for (space = 1; space <= size - row; space++)
			{
				_putchar(' ');
			}

			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

