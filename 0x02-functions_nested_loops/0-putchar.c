#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	char myArray[] = "_putchar\n";
	int index = 0;

	while (myArray[index] != '\0')
	{
		_putchar(myArray[index]);
		index++;
	}
	return (0);
}
