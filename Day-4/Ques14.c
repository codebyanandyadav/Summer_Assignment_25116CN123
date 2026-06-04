//find nth fibonacci term

#include<stdio.h>
int main () {
    int n,i;
    long long first =0,second=1,next;

    printf("Enter the position of fibonacci term :");
    scanf("%d",&n);

    if (n==1)
    {
        printf("the %dth fibonacci term is %lld",n,first);
    }
    else if (n==2)
    {
        printf("the %dth fibonacci term is %lld",n,second);
    }
    else
    {
        for ( i = 3; i <= n; i++)
        {
            next=first+second;
            first=second;
            second=next;
        }

        printf("the %dth fibonacci term is %lld",n,second);
    }
    return 0;
}