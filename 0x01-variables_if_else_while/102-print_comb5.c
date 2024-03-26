#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
int firstCombi, secondCombi;

for (firstCombi = 0; firstCombi <= 98; firstCombi++)
{
for (secondCombi = firstCombi + 1; secondCombi <= 99; secondCombi++)
{
putchar((firstCombi / 10) + '0');
putchar((firstCombi % 10) + '0');
putchar(32);
putchar((secondCombi / 10) + '0');
putchar((secondCombi  % 10) + '0');

if (firstCombi < 98)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
