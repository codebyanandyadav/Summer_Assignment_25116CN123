//number pyramid

#include<stdio.h>

int main() {
    int line,sp,n;

    for(line=1 ; line<=5;line++)
    {
        for(sp =1;sp<=5 -line ; sp++)
        {
            printf(" ");
        }
        for (n = 1; n<=line; n++)
        {
            printf("%d",n);
        
        }
        for (n =line -1;n>=1;n--)
        {
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}