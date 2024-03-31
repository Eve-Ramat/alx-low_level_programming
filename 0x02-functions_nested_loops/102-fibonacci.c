#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int number = 1;
long firstNum = 0, secondNum = 1, thirdNum;

while (number <= 50)
{
thirdNum = firstNum + secondNum;
firstNum = secondNum;
secondNum = thirdNum;

printf("%d", thirdNum);

if (number != 50)
{
printf(", ");
}
number++;
}
printf("\n");
return (0);
}
