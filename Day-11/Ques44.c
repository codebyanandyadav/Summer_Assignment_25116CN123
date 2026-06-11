//function to find factorial

#include<stdio.h>

long long factorialValue(int n)
{
    long long fact = 1;
    int i;

    for (i =1;i<=n;i++)
    {
        fact *=i;
    }

    return fact;
}

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.");
    }
    else
    {
        printf("Factorial of %d =%lld",num , factorialValue(num));
    }

    return 0;
}