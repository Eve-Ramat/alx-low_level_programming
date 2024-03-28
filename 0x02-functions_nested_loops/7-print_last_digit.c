#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @number: integer value to extract last number from.
 * Return: value of last digit.
 */

int print_last_digit(int number)
{
	int last_digit = (number < 0) ? ((number % 10) * -1) : (number % 10);

	return (_putchar(48 + last_digit), last_digit);
}
