//Recursive sum of digitd

#include<stdio.h>

int digitSum(int value)
{
    if (value ==0)
    return 0;
    return (value % 10)+ digitSum(value /10);
}
int main()
{
    int number;

    printf("Enter a number :");
    scanf("%d",&number);

    if (number < 0)
    number = -number;

    printf(" Sum of digit =%d\n",digitSum(number));
    
    return 0;
}