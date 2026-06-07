//Recursive reverse number 

#include<stdio.h>
int reverseNum(int n,int rev) 
{
    if (n ==0)
    return rev;
    return reverseNum(n/10,rev*10+(n % 10));
}
int main() 
{
    int number;
    printf("Enter a number :");
    scanf("%d",&number);

    printf("Reversed umber =%d\n", reverseNum(number,0));

    return 0;
}