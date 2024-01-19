#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)

		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);

		if (number != 100)
			putchar(32);


	printf("\n");

	return (0);
}

