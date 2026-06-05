// check strong number

#include<stdio.h>
int main() {
    int n, original,digit;
    long long factorialsum =0;

    printf("Enter a number:");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;

        int fact =1;
        for (int i =2; i<=digit ; i++)
        {
            fact *= i;
        }

        factorialsum += fact;
        n /=10;
    }
    if (factorialsum == original)
        printf("%d is a strong number.\n",original);
    else
        printf("%d is not a strong number.\n",original);

    return 0;
    
}