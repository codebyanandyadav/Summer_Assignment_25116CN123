//Generate fibonacci series

#include<stdio.h>
int main() {
    int term,first=0,second=1,next,i;
    printf("Enter the number of term :");
    scanf("%d", &term);

    printf("Fibonacci Series :\n");
    for(i=1;i<=term;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }

    return 0;
}