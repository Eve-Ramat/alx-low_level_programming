#include <stdio.h>

/**
 * main - prints numbers of base 16 in lowercase
 * followed by new line
 * Return: 0 if (successful)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'l'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
