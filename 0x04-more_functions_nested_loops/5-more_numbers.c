#include "main.h"

/**
 * print_multiplied_numbers - function that prints from 0 to 14, 10 times.
 * followed by a new line.
 */
void print_multiplied_numbers(void)
{
	int iteration, current_number;

	for (iteration = 1; iteration <= 10; iteration++)
	{
		for (current_number = 0; current_number <= 14; current_number++)
		{
			if (current_number >= 10)
			{
				_putchar((current_number / 10) + '0');
				_putchar((current_number % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

