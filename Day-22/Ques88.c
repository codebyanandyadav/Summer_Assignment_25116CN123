//Remove Space from string

#include<stdio.h>
int main()
{
    char text[200],result[200];
    int i=0,j=0;

    printf("Enter a string:");
    fgets(text,sizeof(text),stdin);

    while(text[i] !='\0')
    {
        if (text[i] !=' ' && text[i] !='\n')
        {
            result[j]=text[i];
            j++;
        }
        i++;
    }
    result[j]='\0';

    printf("String after removing spaces: %s\n",result);

    return 0;
}