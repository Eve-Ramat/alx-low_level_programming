#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	}
	return (0);
}

