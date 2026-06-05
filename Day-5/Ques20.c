//largest prime factor

#include<stdio.h>
int main() {
    long long num, largestprime = -1;

    printf("Enter a number :");
    scanf("%lld",&num);

    while (num % 2 ==0)
    {
        largestprime = 2;
        num /= 2;
    }
    for (long long factor = 3; factor *factor <= num; factor += 2)
    {
        while(num % factor ==0)
        {
            largestprime = factor;
            num/= factor;
        }
    }
    if (num >2)
    {
        largestprime= num;
    }

    printf(" largest prime factor = %lld\n",largestprime);

    return 0;
    
}