#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: variable to be checked
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
