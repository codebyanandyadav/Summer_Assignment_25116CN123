//Find common characters in strings

#include<stdio.h>

#include <stdio.h>

int main()
{
    char str1[200], str2[200];
    int found[256] = {0};

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        found[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");

    for (int i = 0; str2[i] != '\0'; i++)
    {
        unsigned char ch = str2[i];

        if (found[ch] == 1)
        {
            printf("%c ", ch);
            found[ch] = 2;  
        }
    }

    return 0;
}