//find maximum number

#include<stdio.h>
int findMaximum(int a,int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    int num1, num2,maxValue;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    maxValue = findMaximum(num1,num2);

    printf("Maximum number = %d\n",maxValue);
    return 0;
    
}