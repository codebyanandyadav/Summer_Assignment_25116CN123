//Menu Driven Array Opertion System

#include <stdio.h>

int main()
{
    int data[100], size, choice;
    int i, value, found = 0;
    int largest, smallest, total = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &data[i]);
    }

    while(1)
    {
        printf("\n----- ARRAY OPERATIONS MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Find Largest Element\n");
        printf("3. Find Smallest Element\n");
        printf("4. Find Sum of Elements\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < size; i++)
                    printf("%d ", data[i]);
                printf("\n");
                break;

            case 2:
                largest = data[0];
                for(i = 1; i < size; i++)
                    if(data[i] > largest)
                        largest = data[i];
                printf("Largest Element = %d\n", largest);
                break;

            case 3:
                smallest = data[0];
                for(i = 1; i < size; i++)
                    if(data[i] < smallest)
                        smallest = data[i];
                printf("Smallest Element = %d\n", smallest);
                break;

            case 4:
                total = 0;
                for(i = 0; i < size; i++)
                    total += data[i];
                printf("Sum of Elements = %d\n", total);
                break;

            case 5:
                found = 0;
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < size; i++)
                {
                    if(data[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Element not found.\n");
                break;

            case 6:
                printf("Program Ended.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}