#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers followed by a new line
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int  result = atoi(argv[1]) * atoi(argv[2]);

		printf("%i\n", result);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

