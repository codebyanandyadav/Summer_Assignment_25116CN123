//Character Frequency

 #include<stdio.h>
 int main ()
 {
    char str[150],ch;
    int count = 0,pos=0;

    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);

    printf("Enter the character :");
    scanf("%c", &ch);

    while (str[pos] !='\0')
    {
        if(str[pos]==ch)
        {
            count++;
        }
        pos++;
    }
    printf("Frequency of '%c'=%d\n",ch,count);
    return 0;
 }