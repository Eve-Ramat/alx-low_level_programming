#include "main.h"

/**
 * _strlen - Count the length of a string.
 * @s: String to be counted.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

