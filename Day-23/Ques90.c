//find first repeating character

#include<stdio.h>

int main()
{
    char str[1000];
    int seen[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];

        if (seen[ch]) {
            printf("First repeating character: %c\n", ch);
            return 0;
        }

        seen[ch] = 1;
    }

    printf("No repeating character found.\n");

    return 0;
}
