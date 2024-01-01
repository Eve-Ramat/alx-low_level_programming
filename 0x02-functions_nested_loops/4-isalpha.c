#include "main.h"

/**
* _isalpha - checks for alphabetic character.
* Return: 1 if it is an alphabet character, 0 if it's not.
* @c:integer value.
*/

int _isalpha(int c)
{
return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
