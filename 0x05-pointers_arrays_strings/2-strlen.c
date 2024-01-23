#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string to be counted
 *
 * Return: the length of the string;
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
