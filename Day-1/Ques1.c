#include <stdio.h>

int main() {
    long int num;
    int digitSum = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num < 0) {
        num = -num;   // Handle negative numbers
    }

    while (num > 0) {
        digitSum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d\n", digitSum);

    return 0;
}