#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c: character to check the case
 * Return: 1 if c is upper case and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
