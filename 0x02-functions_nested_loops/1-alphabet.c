#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar(10);
}
