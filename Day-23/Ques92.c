//maximum occurring character

#include <stdio.h>

int main() {
    char text[1000];
    int frequency[256] = {0};
    int i, highestCount = 0;
    char result;

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++) {
        frequency[(unsigned char)text[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (frequency[i] > highestCount) {
            highestCount = frequency[i];
            result = (char)i;
        }
    }

    printf("Maximum occurring character: %c\n", result);
    printf("Number of occurrences: %d\n", highestCount);

    return 0;
}