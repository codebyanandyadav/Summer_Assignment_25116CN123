#include<stdio.h>
int main() {
    int lower,upper,n,d;

    //read the range
    printf("Enter lower limit:");
    scanf("%d",&lower );

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("prime numbers are:\n");
    for ( n = lower; n<= upper; n++ )
    {
        if (n<=1)
           continue;
        d=2;

        while(d<n)
        {
            if(n%d ==0)
                break;
            d++;
        }

        // if no divisor is found ,print the number
        if (d == n)
        {
            printf("%d",n);
        }
        
    }

    return 0;


}