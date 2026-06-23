//check anagram strings

#include<stdio.h>

int main() {
    char first[100], second[100];
    int freq[256] = {0};
    int index = 0;

    printf("Enter first string: ");
    scanf("%99s", first);

    printf("Enter second string: ");
    scanf("%99s", second);

    while (first[index] != '\0') {
        freq[(unsigned char)first[index]]++;
        index++;
    }

    index = 0;
    while (second[index] != '\0') {
        freq[(unsigned char)second[index]]--;
        index++;
    }

    for (index = 0; index < 256; index++) {
        if (freq[index] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");

    return 0;
}