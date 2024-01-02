#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The integer whose last digit needs to be printed.
 *
 * Return: Value of the last digit.
 */

int print_last_digit(int number)
{
	int last_digit;

	if (number < 0)
	{
		number = -1 * number;
	}

	last_digit = number % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
