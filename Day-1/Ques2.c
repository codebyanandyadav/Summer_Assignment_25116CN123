#include <stdio.h>

int main() {
    int number;
    int multiplier = 1;

    printf("Enter the number: ");
    scanf("%d", &number);

    while (multiplier <= 10) {
        printf("%d * %d = %d\n", number, multiplier, number * multiplier);
        multiplier++;
    }

    return 0;
}