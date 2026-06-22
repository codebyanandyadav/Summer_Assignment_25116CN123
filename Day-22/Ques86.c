//Count Words in a sentence

#include<stdio.h>

int main()
{
    char line[200];
    int i=0,words=0,insideWord=0;
    
    printf("Enter a sentence:");
    fgets(line,sizeof(line),stdin);

    while (line[i] !='\0')
    {
        if (line[i] != ' ' && line[i] !='\n' && line[i] !='\t')
        {
            if (insideWord == 0)
            {
                words++;
                insideWord =1;
            }
        }
        else
        {
            insideWord =0;
        }
        i++;
    }
    printf("Number of words =%d\n",words);

    return 0;
}