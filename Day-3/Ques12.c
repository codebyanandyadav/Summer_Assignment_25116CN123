#include<stdio.h>
int main() {
    int num1,num2,a,b,gcd,lcm;

    //input two number
    printf("Enter two number :");
    scanf("%d %d",&num1,&num2);
    a= num1;
    b= num2;

    //find the gcd
    while (b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    gcd=a;

    //calculte lcm
    lcm=(num1*num2)/gcd;

    printf("lcm=%d\n",lcm);

    return 0;
    
}