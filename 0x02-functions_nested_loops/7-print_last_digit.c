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

	/* Use bitwise operations to make negative numbers positive */
	if (number < 0)
	{
		number = ~number + 1; /* Two's complement */
	}

	/* Find the last digit (which will be the remainder when divided by 10) */
	last_digit = number % 10;

	/* Print the last digit */
	_putchar('0' + last_digit);

	/* Return the last digit */
	return (last_digit);
}

