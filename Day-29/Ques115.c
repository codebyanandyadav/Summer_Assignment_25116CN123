//Menu Driven String Operting System

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int choice;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    while (1)
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length of First String\n");
        printf("2. Copy First String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse First String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;

            case 3:
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String: %s\n", temp);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
            {
                strcpy(temp, str1);
                int i, len = strlen(temp);
                for (i = 0; i < len / 2; i++)
                {
                    char ch = temp[i];
                    temp[i] = temp[len - 1 - i];
                    temp[len - 1 - i] = ch;
                }
                printf("Reversed String: %s\n", temp);
                break;
            }

            case 6:
                printf("Program Ended.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}