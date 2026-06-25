//Sort words by length

#include<stdio.h>
#include<string.h>

int main()
{
    int count;

    printf("Enter number of words:");
    scanf("%d",& count);

    char words[count][100];
    char temp[100];

    printf("Enter the words:\n");
    for(int i=0; i<count;i++)
    {
        scanf("%99s",words[i]);
    }
    for (int i=0;i<count-1;i++)
    {
        for (int j=i+1;j<count;j++)
        {
            if (strlen(words[i])> strlen(words[j]))
            {
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }
    printf("\nWords sorted by length:\n");
    for (int i=0; i<count;i++)
    {
        printf("%s\n",words[i]);
    }

    return 0;
}