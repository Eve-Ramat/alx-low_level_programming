#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)	/* Check if n is positive */
		return (_putchar('+'), 1);
	else if (n == 0)	/* Check if n is zero */
		return (_putchar('0'), 0);
	else	/* If n is negative */
		return (_putchar('-'), -1);
}

