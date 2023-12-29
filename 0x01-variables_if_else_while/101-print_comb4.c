#include <stdio.h>

/**
 * main - Entry point, prints possible outcomes of three digits
 * Return: 0 on successful execution
 */
int main(void)
{
	int i; /* Declare i here */
	int j; /* Declare j here */
	int k; /* Declare k here */

	i = 48; /* Start i at 48 */
	j = i + 1; /* Start j at i + 1 */
	k = j + 1; /* Start k at j + 1 */

	while (i <= 55) /* Loop for i from 48 to 55 */
	{
		while (j <= 56) /* Loop for j from i + 1 to 56 */
		{
			while (k <= 57) /* Loop for k from j + 1 to 57 */
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i <= 54 || j <= 55 || k <= 56) /* Check if not the last combination */
				{
					putchar(44); /* Print comma */
					putchar(32); /* Print space */
				}

				k++; /* Move to the next k value */
			}
			j++; /* Move to the next j value */
		}
		i++; /* Move to the next i value */
	}

	putchar(10); /* Print a newline */

	return (0); /* Return 0 to indicate successful execution */
}

