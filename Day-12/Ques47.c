//function for fibonacci

#include<stdio.h>
int fibonacciTerm(int n)
{
    if (n == 0)
        return 0;
    if (n ==1)
        return 1;

    int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second =next;
    }

    return second;
}

int main() 
{
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci Series: ");

    for (int i=0; i<terms;i++)
    {
        printf("%d",fibonacciTerm(i));
    }

    return 0;
}