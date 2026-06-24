//Remove Duplicate Characters

#include<stdio.h>

#include<string.h>

int main() {
    char str[200], result[200];
    int i, j, k;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int index = 0;

    for (i = 0; i < len; i++) {
        int found = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            result[index++] = str[i];
        }
    }

    result[index] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}