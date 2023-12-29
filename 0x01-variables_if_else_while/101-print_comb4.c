#include <stdio.h>

/**
 * main - prints possible outcomes of three digits
 * Return: 0 if (successful)
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i <= 54 || j <= 55 || k <= 56)
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

	putchar(10);

	return (0);
}

