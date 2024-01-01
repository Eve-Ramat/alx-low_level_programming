#include "main.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{
	int iteration_count;
	char alphabets;

	for (iteration_count = 0; iteration_count <= 9; ++iteration_count)
	{
		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		{
			_putchar(alphabets);
		}
		_putchar('\n');
	}
}
