//Library Management System

#include <stdio.h>

#define MAX 100

struct Library
{
    int id;
    char title[100];
    char author[100];
    int available;
};

struct Library books[MAX];
int total = 0;

void addBook()
{
    if (total >= MAX)
    {
        printf("\nLibrary storage is full.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &books[total].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[total].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[total].author);

    books[total].available = 1;
    total++;

    printf("Book added successfully.\n");
}

void displayBooks()
{
    int i;

    if (total == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n-------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < total; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].available ? "Available" : "Issued");
    }
}

void searchBook()
{
    int id, i;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook Found\n");
            printf("Title : %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Status: %s\n",
                   books[i].available ? "Available" : "Issued");
            return;
        }
    }

    printf("Book not found.\n");
}

void issueBook()
{
    int id, i;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].available)
            {
                books[i].available = 0;
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

void returnBook()
{
    int id, i;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < total; i++)
    {
        if (books[i].id == id)
        {
            if (!books[i].available)
            {
                books[i].available = 1;
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book was not issued.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========== LIBRARY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                issueBook();
                break;

            case 5:
                returnBook();
                break;

            case 6:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}