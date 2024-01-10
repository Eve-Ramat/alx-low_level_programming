#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the sum of even Fibonacci numbers less than 4,000,000.
 * Return: 0
 */

int main(void)
{
	unsigned long i, j, k, sum;
	int count;

	i = sum = 0;

	for (count = 1; count <= 50; count++)
	{
		i = j;
		k = j + i;
		j = k;

		if (k % 2 && k <= 4000000)
			sum += k;
	}

	printf("%lu\n", sum);
	return (0);
}
