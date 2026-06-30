//Student Management System 

#include <stdio.h>

#define LIMIT 100

struct Student
{
    int roll;
    char name[50];
    char course[40];
    float marks;
};

void addStudent(struct Student s[], int *count);
void displayStudents(struct Student s[], int count);
void searchStudent(struct Student s[], int count);
void updateStudent(struct Student s[], int count);
void deleteStudent(struct Student s[], int *count);

int main()
{
    struct Student s[LIMIT];
    int count = 0;
    int choice;

    do
    {
        printf("\n========== STUDENT MANAGEMENT ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent(s, &count);
                break;

            case 2:
                displayStudents(s, count);
                break;

            case 3:
                searchStudent(s, count);
                break;

            case 4:
                updateStudent(s, count);
                break;

            case 5:
                deleteStudent(s, &count);
                break;

            case 6:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addStudent(struct Student s[], int *count)
{
    if(*count >= LIMIT)
    {
        printf("Storage Full!\n");
        return;
    }

    printf("\nEnter Roll Number: ");
    scanf("%d", &s[*count].roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s[*count].name);

    printf("Enter Course: ");
    scanf(" %[^\n]", s[*count].course);

    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);

    (*count)++;
    printf("Student Added Successfully.\n");
}

void displayStudents(struct Student s[], int count)
{
    int i;

    if(count == 0)
    {
        printf("No Records Available.\n");
        return;
    }

    printf("\n----------- STUDENT LIST -----------\n");

    for(i = 0; i < count; i++)
    {
        printf("\nRecord %d\n", i + 1);
        printf("Roll   : %d\n", s[i].roll);
        printf("Name   : %s\n", s[i].name);
        printf("Course : %s\n", s[i].course);
        printf("Marks  : %.2f\n", s[i].marks);
    }
}

void searchStudent(struct Student s[], int count)
{
    int roll, i;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll   : %d\n", s[i].roll);
            printf("Name   : %s\n", s[i].name);
            printf("Course : %s\n", s[i].course);
            printf("Marks  : %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Record Not Found.\n");
}

void updateStudent(struct Student s[], int count)
{
    int roll, i;

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    for(i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s[i].name);

            printf("Enter New Course: ");
            scanf(" %[^\n]", s[i].course);

            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Record Updated Successfully.\n");
            return;
        }
    }

    printf("Student Not Found.\n");
}

void deleteStudent(struct Student s[], int *count)
{
    int roll, i, j;

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    for(i = 0; i < *count; i++)
    {
        if(s[i].roll == roll)
        {
            for(j = i; j < *count - 1; j++)
            {
                s[j] = s[j + 1];
            }

            (*count)--;
            printf("Record Deleted Successfully.\n");
            return;
        }
    }
    

    printf("Student Not Found.\n");
}
