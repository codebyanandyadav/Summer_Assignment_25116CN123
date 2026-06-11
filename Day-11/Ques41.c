//sum of two number

#include<stdio.h>
int addValues(int x,int y)
{
    return x+y;
}
int main()
{
    int firstNum, secondNum,total;

    printf("Enter two numbers :");
    scanf("%d %d",&firstNum,&secondNum);

    total = addValues(firstNum,secondNum);
    printf("Sum = %d\n",total);

    return 0;
}