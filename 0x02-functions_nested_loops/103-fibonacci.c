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
	j = 1;

	for (count = 1; count <= 50; count++)
	{
		k = j + i;
		i = j;
		j = k;

		if (k % 2 == 0 && k <= 4000000)
			sum += k;
	}

	printf("%lu\n", sum);
	return (0);
}
