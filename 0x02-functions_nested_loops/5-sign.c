#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: variable to be checked.
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */

int print_sign(int n)
{
	return (n > 0 ? (_putchar('+') && 1) :
	(n == 0 ? (_putchar(48) && 0) :
	(_putchar('-') && -1)));
}
