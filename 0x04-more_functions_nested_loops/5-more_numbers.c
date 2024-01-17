#include "main.h"

/**
 * more_numbers - function that prints from 0 to 14, 10 times.
 * followed by a new line.
 */

void more_numbers(void)
{
	int iteration, current_number;

	for (iteration = 1; iteration <= 10; iteration++)
	{
		for (current_number = 0; current_number <= 14; current_number++)
		{
			if (current_number >= 10)
			{
				_putchar((current_number / 10) + '0');
			}
			_putchar((current_number % 10) + '0');
		}

		_putchar('\n');
	}
}

