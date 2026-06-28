//Contact Management System

#include<stdio.h>
#include<string.h>

#define LIMIT 100

struct Contact
{
    int id;
    char name[50];
    char phone[20];
    char email[60];
};

int main()
{
    struct Contact list[LIMIT];
    int total = 0;
    int choice, i, j;
    char searchName[50];
    int found;

    while (1)
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if (total==LIMIT)
                {
                    printf("Contact list is full.\n");
                    break;
                }

                list[total].id = total + 1;

                printf("Enter Name: ");
                scanf(" %[^\n]", list[total].name);

                printf("Enter Phone Number: ");
                scanf("%s", list[total].phone);

                printf("Enter Email: ");
                scanf("%s", list[total].email);

                total++;
                printf("Contact saved successfully.\n");
                break;

            case 2:
                if (total==0)
                {
                    printf("No contacts available.\n");
                    break;
                }

                printf("\n---------- CONTACT LIST ----------\n");
                for (i = 0; i < total; i++)
                {
                    printf("\nContact ID : %d\n", list[i].id);
                    printf("Name       : %s\n", list[i].name);
                    printf("Phone      : %s\n", list[i].phone);
                    printf("Email      : %s\n", list[i].email);
                }
                break;

            case 3:
                if (total==0)
                {
                    printf("No contacts available.\n");
                    break;
                }

                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;
                for (i = 0; i < total; i++)
                {
                    if (strcmp(list[i].name, searchName) == 0)
                    {
                        printf("\nContact Found\n");
                        printf("ID    : %d\n", list[i].id);
                        printf("Name  : %s\n", list[i].name);
                        printf("Phone : %s\n", list[i].phone);
                        printf("Email : %s\n", list[i].email);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");

                break;

            case 4:
                printf("Enter Contact ID to Update: ");
                scanf("%d", &j);

                if (j < 1 || j > total)
                {
                    printf("Invalid Contact ID.\n");
                    break;
                }

                printf("Enter New Name: ");
                scanf(" %[^\n]", list[j - 1].name);

                printf("Enter New Phone Number: ");
                scanf("%s", list[j - 1].phone);

                printf("Enter New Email: ");
                scanf("%s", list[j - 1].email);

                printf("Contact updated successfully.\n");
                break;

            case 5:
                printf("Enter Contact ID to Delete: ");
                scanf("%d", &j);

                if (j < 1 || j > total)
                {
                    printf("Invalid Contact ID.\n");
                    break;
                }

                for (i = j - 1; i < total - 1; i++)
                {
                    list[i] = list[i + 1];
                    list[i].id = i + 1;
                }

                total--;
                printf("Contact deleted successfully.\n");
                break;

            case 6:
                printf("Exiting Contact Management System.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}