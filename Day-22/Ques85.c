//Check Palindrome string

#include<stdio.h>
int main()
{
    char text[100];
    int start =0,end=0,flag=1;

    printf("Enter a string:");
    scanf("%99s",text);

    while (text[end] !='\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        if (text[start] !=text[end])
        {
            flag =0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palinrome.\n");
    
    return 0;

}