#include <stdio.h>

/**
 * main - Entry point, prints the first 98 Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void) {
	int count;
	unsigned long current, next, sum;
	unsigned long currentPart, nextPart, sumPart, carry;

	current = 0;
	next = 1;

	for (count = 1; count <= 91; count++) {
		sum = current + next;
		current = next;
		next = sum;
		printf("%lu, ", sum);
	}

	currentPart = current % 1000;
	current = current / 1000;
	nextPart = next % 1000;
	next = next / 1000;
	while (count <= 98) {
		carry = (currentPart + nextPart) / 1000;
		sumPart = (currentPart + nextPart) - carry * 1000;
		sum = (current + next) + carry;
		currentPart = nextPart;
		nextPart = sumPart;
		current = next;
		next = sum;
		if (sumPart >= 100)
			printf("%lu%lu", sum, sumPart);
		else
			printf("%lu0%lu", sum, sumPart);
		if (count != 98)
			printf(", ");
		count++;
	}

	putchar('\n');
	return (0);
}

