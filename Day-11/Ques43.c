//using function check prime number

#include<stdio.h>

int checkPrime(int num)
{
    int i;
    if (num <2)
        return 0;
    
        for (i =2 ;i*i <=num ; i++)
        {
            if (num % i==0)
                return 0;
        }
        return 1;
}

int main () {
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    if (checkPrime(n))
        printf("%d is a Prime Number .",n);
    else
        printf("%d is not a Prime Number.",n);
    
    return 0;
}