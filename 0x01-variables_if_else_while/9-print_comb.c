#include <stdio.h>

/**
 * main - prints all npossible numbers of single digits
 * followed by a new line
 * Return: 0 if (successful)
*/

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
