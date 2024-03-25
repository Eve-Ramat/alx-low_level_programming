#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = '0'; firstDigit <= '7'; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= '8'; secondDigit++)
		{
			for (thirdDigit = secondDigit + 1; thirdDigit <= '9'; thirdDigit++)
			{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);

				if (firstDigit < '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
