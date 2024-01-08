#include <stdio.h>

/**
 * main - Entry point
 * Description: Computes the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int sum_of_multiples = 0, numbers_1023;

	for (numbers_1023 = 0; numbers_1023 <= 1023; numbers_1023++)
	{
		if (numbers_1023 % 3 == 0 || numbers_1023 % 5 == 0)
			sum_of_multiples += numbers_1023;
			printf("%d\n", sum_of_multiples);
	}

	return (0);
}
