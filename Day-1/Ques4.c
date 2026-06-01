#include <stdio.h>

int main() {
    long long number;
    int digitCount = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    if (number == 0) {
        digitCount = 1;
    } else {
        if (number < 0) {
            number = -number;
        }

        do {
            digitCount++;
            number /= 10;
        } while (number != 0);
    }

    printf("Total digits = %d\n", digitCount);

    return 0;
}