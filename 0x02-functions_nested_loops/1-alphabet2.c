#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: 0
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
