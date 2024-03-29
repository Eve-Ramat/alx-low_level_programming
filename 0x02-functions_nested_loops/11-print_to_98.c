#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}

	for (; n > 98; n--)
	{
		printf("%d, ", n);
	}

	printf("98\n");
}

