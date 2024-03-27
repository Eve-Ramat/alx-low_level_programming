#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @number: integer value to extract last number from.
 * Return: value of last digit.
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (last_digit < 0)
		last_digit *= -1;

	return (last_digit);
}
