#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{

	int firstDigit = 48, secondDigit, thirdDigit;

	while (firstDigit <= 55)
	{
		secondDigit = firstDigit + 1;

		while (secondDigit <= 56)
		{
			thirdDigit = secondDigit + 1;

			while (thirdDigit <= 57)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);

				if (firstDigit != 55 || secondDigit != 56 || thirdDigit != 57)
				{
					putchar(44);
					putchar(32);
				}

				thirdDigit++;
			}

			secondDigit++;

		}

		firstDigit++;
	}

	putchar(10);

	return (0);
}
