#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;

	if (last_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	}
	else if (last_n == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else if (last_n < 6 && last_n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);
	}
	return (0);
}
