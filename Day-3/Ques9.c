#include<stdio.h>
int main() {
    int number, count =0, j;

    printf("Enter a number : ");
    scanf("%d", &number);

    for( j=1; j<=number; j++ )
    {
        if (number % j==0)
        {
            count++;
        }
    }

    if (count ==2)
    {
        printf("%d is a primr number.\n",number);
    }
    else
    {
        printf("%d is not a prime number.\n",number);
    }

    return 0;
}