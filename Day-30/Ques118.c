//Mini Library System

#include <stdio.h>

#define MAX_BOOKS 100

struct Book
{
    int bookId;
    char title[60];
    char author[50];
    int quantity;
};

void addBooks(struct Book lib[], int count);
void displayBooks(struct Book lib[], int count);
void searchBook(struct Book lib[], int count);

int main()
{
    struct Book lib[MAX_BOOKS];
    int totalBooks, choice;

    printf("Enter number of books: ");
    scanf("%d", &totalBooks);

    addBooks(lib, totalBooks);

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayBooks(lib, totalBooks);
                break;

            case 2:
                searchBook(lib, totalBooks);
                break;

            case 3:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}

void addBooks(struct Book lib[], int count)
{
    int i;

    for(i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &lib[i].bookId);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", lib[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", lib[i].author);

        printf("Enter Quantity: ");
        scanf("%d", &lib[i].quantity);
    }
}

void displayBooks(struct Book lib[], int count)
{
    int i;

    printf("\n----- BOOK LIST -----\n");

    for(i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", lib[i].bookId);
        printf("Title   : %s\n", lib[i].title);
        printf("Author  : %s\n", lib[i].author);
        printf("Copies  : %d\n", lib[i].quantity);
    }
}

void searchBook(struct Book lib[], int count)
{
    int id, i, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(lib[i].bookId == id)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", lib[i].bookId);
            printf("Title   : %s\n", lib[i].title);
            printf("Author  : %s\n", lib[i].author);
            printf("Copies  : %d\n", lib[i].quantity);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Book not found.\n");
    }
}
