/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be checked.
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */
int print_sign(int n)
{
	return (n > 0 ? (_putchar('+'), 1) :
			(n == 0 ? (_putchar('0'), 0) :
			(_putchar('-'), -1)));
}

