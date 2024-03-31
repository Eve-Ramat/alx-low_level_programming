#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *	Calculates the sum of even Fibonacci numbers
 *	up to 4,000,000 and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	long firstNum = 0, secondNum = 1, thirdNum;

	while (thirdNum <= 4000000)
	{
		thirdNum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = thirdNum;

		if (thirdNum % 2 == 0)
		{
			sum += thirdNum;
		}
	}

	printf("%d\n", sum);
	return (0);
}

