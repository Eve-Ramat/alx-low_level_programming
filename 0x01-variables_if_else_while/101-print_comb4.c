#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i <= 55)
	{
		int j = i + 1;

		while (j <= 56)
		{
			int k = j + 1;

			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 59)
				{
					putchar(44);
					putchar(32);
				}

				k++;
			}
			j++;
		}
		i++;
	}

	putchar(10); /* Print a newline */

	return (0);
}

