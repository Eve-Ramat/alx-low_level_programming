#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int number, sum = 0;

for (number = 0;  number <= 1024; number++)
{
if (number % 3 == 0 || number % 5 == 0)
{
sum += number;
}
}
printf("%d\n", sum);
return (0);
}
