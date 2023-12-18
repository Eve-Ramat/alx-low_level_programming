#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * followed by new line
 * Return: 0 if (successful)
*/

int main(void)
{
	int i;

	for (i >= '0'; i <= '10'; i++)
	{
		putchar(i);
	}
	for (i >= 'A'; i <= 'F'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
