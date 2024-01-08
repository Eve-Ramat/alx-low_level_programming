#include <stdio.h>

/**
 * main - Entry point
 * Description: Computes the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int sum_of_multiples_of_3_and_5 = 0, number1023;

	for (number1023 = 0; number1023 <= 1023; number1023++)
	{
		if (number1023 % 3 == 0 || number1023 % 5 == 0)
			sum_of_multiples_of_3_and_5 += number1023;
	}

	printf("%d\n", sum_of_multiples_of_3_and_5);
	return (0);
}
