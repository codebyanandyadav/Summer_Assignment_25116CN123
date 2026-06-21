//Reverse string


#include<stdio.h>
int main()
{
    char str[150];
    int len =0,i;

    printf("Enter a string :");
    fgets(str,sizeof(str),stdin);

    while(str[len] !='\0' && str[len] != '\n')
    {
        len++;
    }
    printf("Reversed string:");
    for(i=len-1;i>=0;i--)
    {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
    
}