#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: first input string
 * @s2: second input string
 *
 * Return: difference between the ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}

