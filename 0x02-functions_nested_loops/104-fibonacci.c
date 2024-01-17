#include <stdio.h>

/**
 * main - print the first 98 Fibonacci numbers without decimal places.
 * Return: Nothing.
 */
int main(void)
{
	int count;
	double i, j, k;

	i = 0;
	j = 1;

	for (count = 1; count <= 98; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%.0f, ", k);
	}

	return (0);
}

