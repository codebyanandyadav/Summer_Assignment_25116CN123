//Count Vowels and Consonants

#include<stdio.h>

int main()
{
    char text[200];
    int i=0,vowels=0,consonants=0;
    char ch;
    printf("Enter a string:");
    fgets(text,sizeof(text),stdin);

    while(text[i] !='\0')
    {
        ch = text[i];
        if ((ch>='A' && ch <= 'Z') || (ch >= 'a' && ch <='z'))
        {
            if (ch =='A' ||ch =='E' ||ch =='I' ||ch =='0' || ch=='U' || ch =='a' || ch=='e' ||ch =='i' ||ch =='o' ||ch =='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }
    printf("Vowels = %d\n",vowels);
    printf("Consonants = %d\n",consonants);

    return 0;
}