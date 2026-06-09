//reverse number triangle

#include<stdio.h>
int main() {
    int i,j;
    int limit =5;

    for(i=limit;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}