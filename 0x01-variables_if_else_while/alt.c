
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit, secondDigit;

	for (firstDigit = 0; firstDigit <= 8; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit <= 9; secondDigit++)
		{
			putchar(firstDigit + '0');  /* Convert digit to character */
			putchar(secondDigit + '0'); /* Convert digit to character */

			if (firstDigit != 8 || secondDigit != 9) /* Checks for last combination */
			{
				putchar(',');  /* Print comma */
				putchar(' ');  /* Print space */
			}
		}
	}
	putchar('\n'); /* Print new line at the end */

	return (0);
}

