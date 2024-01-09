#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */

int main(void)
{
	int count, i = 0, j = 1, k;

	for (count = 1; count <= 50; count++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%d", k);

		if (count < 50)
			putchar(44);
		else
			putchar(10);
	}

	return (0);
}
