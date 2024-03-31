#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int number = 1, sum = 0;
long firstNum = 0, secondNum = 1, thirdNum;

while (number <= 50)
{
thirdNum = firstNum + secondNum;
firstNum = secondNum;
secondNum = thirdNum;
number++;

if (thirdNum % 2 == 0 && thirdNum <= 4000000)
{
sum += thirdNum;
}
}
printf("%d\n", sum);
return (0);
}
