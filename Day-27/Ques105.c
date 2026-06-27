//Student Record Management System

#include <stdio.h>

#define LIMIT 100

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student data[LIMIT];
    int total = 0;
    int choice, i, rollNo, pos;

    while (1)
    {
        printf("\n========== Student Record Management ==========\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (total >= LIMIT)
                {
                    printf("Storage is full.\n");
                    break;
                }

                printf("Enter Roll Number: ");
                scanf("%d", &data[total].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", data[total].name);

                printf("Enter Marks: ");
                scanf("%f", &data[total].marks);

                total++;
                printf("Student record added successfully.\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No student records found.\n");
                    break;
                }

                printf("\n------ Student List ------\n");
                for (i = 0; i < total; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll No : %d\n", data[i].roll);
                    printf("Name    : %s\n", data[i].name);
                    printf("Marks   : %.2f\n", data[i].marks);
                }
                break;

            case 3:
                if (total == 0)
                {
                    printf("No records available.\n");
                    break;
                }

                printf("Enter Roll Number to Search: ");
                scanf("%d", &rollNo);

                pos = -1;
                for (i = 0; i < total; i++)
                {
                    if (data[i].roll == rollNo)
                    {
                        pos = i;
                        break;
                    }
                }

                if (pos != -1)
                {
                    printf("\nRecord Found\n");
                    printf("Roll No : %d\n", data[pos].roll);
                    printf("Name    : %s\n", data[pos].name);
                    printf("Marks   : %.2f\n", data[pos].marks);
                }
                else
                {
                    printf("Student not found.\n");
                }
                break;

            case 4:
                if (total == 0)
                {
                    printf("No records available.\n");
                    break;
                }

                printf("Enter Roll Number to Delete: ");
                scanf("%d", &rollNo);

                pos = -1;
                for (i = 0; i < total; i++)
                {
                    if (data[i].roll == rollNo)
                    {
                        pos = i;
                        break;
                    }
                }

                if (pos == -1)
                {
                    printf("Student record not found.\n");
                }
                else
                {
                    for (i = pos; i < total - 1; i++)
                    {
                        data[i] = data[i + 1];
                    }
                    total--;
                    printf("Record deleted successfully.\n");
                }
                break;

            case 5:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
