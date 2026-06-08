//print repeated number

#include<stdio.h>

int main() {
    int n, line, count;
    printf("Enter a number of rows:");
    scanf("%d", &n);

    for(line=1; line<=n; line++)
    {
        for(count=1; count<=line ;count++)
        {
            printf("%d",line);
        }
        printf("\n");
    }

    return 0;
}