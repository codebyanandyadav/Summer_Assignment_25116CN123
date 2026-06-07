//recursive factorial

#include<stdio.h>

long long factorial(int num)
{
    if (num <=1)
    return 1;
    return num *factorial(num -1);
}

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if(n < 0)
    {
        printf("Factorial is not defined for negative number.\n");
    }
    else
    {
        printf("Fcatorial of %d =%lld\n",n,factorial(n));
    }

    return 0;
}