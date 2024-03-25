#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
	{
		char low = 'a';

		while (low <= 'z')
		{
			putchar(low);
			low++;
		}
		putchar('\n');
		return (0);
	}
