// prime factor of a number

#include <stdio.h>
int main() {
    int num, divisor;

    printf("Enter a number :");
    scanf("%d",&num);

    printf("factors of %d are :", num);
    for(divisor = 1; divisor <= num ; divisor++)
    {
        if (num % divisor ==0)
        {
            printf("%d",divisor);
        }
    }
    printf("\n");

    return 0;
}
    