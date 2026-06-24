//compress a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[400];
    int i, j = 0, count;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;

        while (i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        result[j++] = str[i];

        // convert count to string and append
        j += sprintf(&result[j], "%d", count);
    }

    result[j] = '\0';

    printf("Compressed string: %s\n", result);

    return 0;
}