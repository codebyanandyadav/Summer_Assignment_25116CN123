// check armstrong number

#include<stdio.h>
int main() {
    int num,original,digit,count=0;
    int sum=0;
    long long power;

    printf("Enter a number :");
    scanf("%d",&num);

    original=num;
    
    while (original !=0)
    {
        count++;
        original /=10;
    }

    original =num;

    while (original !=0)
    {
        digit =original %10;
        power =1;
        
        for (int i =0;i <count;i++)
        {
            power *=digit;
        }
        sum += power;
        original /=10;
    }
    if (sum ==num)
       printf("%d is an armstrong number.",num);
    else
       printf("%d is not an armstrong number.",num);

    return 0;
    
    
}