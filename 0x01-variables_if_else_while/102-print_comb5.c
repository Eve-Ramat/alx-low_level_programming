#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	int firstCombination = 0, secondCombination;

	while (firstCombination <= 98)
	{
		secondCombination = firstCombination + 1;

		while (secondCombination <= 99)
		{
			putchar(firstCombination / 10);
			putchar(firstCombination % 10);
			putchar(32);
			putchar(secondCombination / 10);
			putchar(secondCombination % 10);

			if (firstCombination < 98)
			{
				putchar(44);
				putchar(32);
			}

			secondCombination++;
		}

		firstCombination++;
	}

	putchar(10);

	return (0);
}
