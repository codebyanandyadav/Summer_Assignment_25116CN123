//Recursive fibonacci

#include<stdio.h>
int fib(int term)
{
    if (term ==0)
    return 0;
    if (term ==1)
    return 1;

    return fib(term -1) + fib(term - 2);
}

int main()
{
    int n,i;

    printf("Enter a number of term :");
    scanf("%d",&n);

    printf("fibonacci series:\n");

    for (i= 0; i<n;i++)
    {
        printf("%d",fib(i));
    }
    return 0;
}