//check string rotation

#include<stdio.h>

#include<string.h>

#include<stdbool.h>

bool isSubstring(char *str, char *sub) {
    int lenStr = strlen(str);
    int lenSub = strlen(sub);

    for (int i = 0; i <= lenStr - lenSub; i++) {
        int j;
        for (j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j])
                break;
        }
        if (j == lenSub)
            return true;
    }
    return false;
}

bool isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return false;

    char concat[200];

    strcpy(concat, s1);
    strcat(concat, s1);

    return isSubstring(concat, s2);
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    if (isRotation(s1, s2))
        printf("Yes, strings are rotations of each other.\n");
    else
        printf("No, strings are not rotations of each other.\n");

    return 0;
}