#include <stdio.h>

int main() {
    int i = 112;
    int num = i;          // Initialize num with the value of i
    int digit;            // Variable to store each digit

    // Extract and print each digit of i
    while (num > 0) {
        digit = num % 10;      // Extract the rightmost digit
        putchar(digit + '0');  // Print the digit
        num /= 10;             // Remove the rightmost digit
    }
    putchar('\n');  // Print a newline character after printing all digits
    return 0;
}

