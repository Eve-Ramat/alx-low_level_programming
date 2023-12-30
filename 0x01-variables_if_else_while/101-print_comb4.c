#include <stdio.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
	int firstDigit, secondDigit, thirdDigit;

	for (firstDigit = 0; firstDigit <= 7; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 8; secondDigit++)
		{
			for (thirdDigit = firstDigit + 2; thirdDigit <= 9; thirdDigit++)
			{
				putchar(firstDigit + '0');
				putchar(secondDigit + '0');
				putchar(thirdDigit + '0');

				if (firstDigit != 7 || secondDigit != 8 || thirdDigit != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}


