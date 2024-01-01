#include "main.h"

/**
* print_alphabet - prints alphabets in lowercase
* Return: void
*/

void print_alphabet(void)
{
	for (char alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		_putchar(alphabets);
	}
	_putchar('\n');
}
