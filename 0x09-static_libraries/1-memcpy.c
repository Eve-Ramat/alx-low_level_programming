#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory where data is stored
 * @src: memory where data is copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;

	for (int r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}

