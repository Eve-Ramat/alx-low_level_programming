#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: starting number.
 */
void print_to_98(int n)
{
	while (n < 0)
	{
		_putchar('-');
		n > -10 ? (_putchar(-n + '0')) :
		(_putchar(n / 10 * -1 + '0'),
		_putchar(n % 10 * -1 + '0'));
		n != 98 ? (_putchar(','), _putchar(' ')) : 0;
		n++;
	}

	while (n <= 98 && n <= 9)
	{
		_putchar(n + '0');
		n != 98 ? (_putchar(','), _putchar(' ')) : 0;
		n++;
	}

	while (n <= 98 && n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		n != 98 ? (_putchar(','), _putchar(' ')) : 0;
		n++;
	}

	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	_putchar('\n');
}

