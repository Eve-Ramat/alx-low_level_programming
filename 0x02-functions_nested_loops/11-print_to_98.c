#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting number.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar((n > 9 || n < -9) ?
		(n / 100) + '0' : (n < 0 ? '-' :
		(n / 10) * -1 + '0'));
		_putchar((n > 9 || n < -9) ?
		(n / 10 % 10) + '0' :
		((n / 10) % 10) * -1 + '0');
		_putchar((n % 10) * (n < 0 ? -1 : 1) + '0');

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n < 98)
			n++;
		else
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

