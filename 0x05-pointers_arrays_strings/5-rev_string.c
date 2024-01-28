#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The input string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;
	int start;
	int end;

	while (s[length] != '\0')
	{
		length++;
	}

	for (start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}

