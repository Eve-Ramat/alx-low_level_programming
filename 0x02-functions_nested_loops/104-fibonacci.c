#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int number = 1;
unsigned long firstNum = 0, secondNum = 1, thirdNum;
unsigned long m = 0, n = 1, p, carry = 0;

while (number <= 97)
{
thirdNum = firstNum + secondNum;
firstNum = secondNum;
secondNum = thirdNum;

printf("%ld", thirdNum);

if (number == 98)
{
carry = (m + n) / 1000;
p = (m + n) - carry * 1000;
thirdNum = (firstNum + secondNum) + carry;
m = n;
n = p;
firstNum = secondNum;
secondNum = thirdNum;

if (p >= 100)
printf("%lu%lu", thirdNum, p);
else
printf("%lu0%lu", thirdNum, p);
}

if (number != 98)
printf(", ");

number++;
}
printf("\n");
return (0);
}

