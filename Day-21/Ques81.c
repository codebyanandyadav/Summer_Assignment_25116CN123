//string length without strlen()

#include<stdio.h>

int main()
{
    char text[200];
    int count = 0;

    printf("Enter a string:");
    fgets(text,sizeof(text),stdin);

    while(text[count] !='\0'&& text[count] !='\n')
    {
        count++;
    }
    printf("Length of the string =%d\n",count);

    return 0;
}