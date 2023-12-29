#include <stdio.h>

/**
 * main - prints possible outcomes of three digits
 * Return: 0 if successful
 */
int main(void)
{
	int i, j, k;  /* Declare variables for digits */

	i = 48;  /* Initialize i to ASCII value of '0' */
	j = 48;  /* Initialize j to ASCII value of '0' */
	k = 48;  /* Initialize k to ASCII value of '0' */

	while (i <= 55)  /* Loop for values from '0' to '7' */
	{
		j = i + 1;  /* Start j from the next value of i */
		while (j <= 56)  /* Loop for values from j to '8' */
		{
			k = j + 1;  /* Start k from the next value of j */
			while (k <= 57)  /* Loop for values from k to '9' */
			{
				putchar(i);  /* Print the character for i */
				putchar(j);  /* Print the character for j */
				putchar(k);  /* Print the character for k */

				/* Check if it's not the last combination to print comma and space */
				if (i <= 54 || j <= 55 || k <= 56)
				{
					putchar(44);  /* Print comma */
					putchar(32);  /* Print space */
				}

				k++;  /* Increment k for the next iteration */
			}
			j++;  /* Increment j for the next iteration */
		}
		i++;  /* Increment i for the next iteration */
	}

	putchar(10);  /* Print a newline character */

	return (0);  /* Return 0 to indicate successful execution */
}

