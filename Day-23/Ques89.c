//find first non repeating character

#include<stdio.h>

int main() {
    char text[1000];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        count[(unsigned char)text[i]]++;
    }

    for (i = 0; text[i] != '\0'; i++) {
        if (count[(unsigned char)text[i]] == 1) {
            printf("First non-repeating character: %c\n", text[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}