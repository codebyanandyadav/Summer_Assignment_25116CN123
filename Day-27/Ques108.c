//Marksheet Generation System

#include <stdio.h>

#define MAX 100

struct Student
{
    int rollNo;
    char name[50];
    float sub1, sub2, sub3, sub4, sub5;
    float total;
    float percentage;
    char grade;
};

char findGrade(float per)
{
    if (per >= 90)
        return 'A';
    else if (per >= 75)
        return 'B';
    else if (per >= 60)
        return 'C';
    else if (per >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    struct Student s[MAX];
    int count = 0;
    int choice, i, roll, index;

    while (1)
    {
        printf("\n====== Marksheet Generation System ======\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Marksheets\n");
        printf("3. Search Marksheet\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (count == MAX)
                {
                    printf("Record limit reached.\n");
                    break;
                }

                printf("Enter Roll Number: ");
                scanf("%d", &s[count].rollNo);

                printf("Enter Student Name: ");
                scanf(" %[^\n]", s[count].name);

                printf("Enter Marks of 5 Subjects:\n");
                scanf("%f%f%f%f%f",
                      &s[count].sub1,
                      &s[count].sub2,
                      &s[count].sub3,
                      &s[count].sub4,
                      &s[count].sub5);

                s[count].total = s[count].sub1 + s[count].sub2 +
                                 s[count].sub3 + s[count].sub4 +
                                 s[count].sub5;

                s[count].percentage = s[count].total / 5.0;
                s[count].grade = findGrade(s[count].percentage);

                count++;
                printf("Marksheet generated successfully.\n");
                break;

            case 2:
                if (count == 0)
                {
                    printf("No records available.\n");
                    break;
                }

                for (i = 0; i < count; i++)
                {
                    printf("\n------------------------------\n");
                    printf("Roll No    : %d\n", s[i].rollNo);
                    printf("Name       : %s\n", s[i].name);
                    printf("Subject 1  : %.2f\n", s[i].sub1);
                    printf("Subject 2  : %.2f\n", s[i].sub2);
                    printf("Subject 3  : %.2f\n", s[i].sub3);
                    printf("Subject 4  : %.2f\n", s[i].sub4);
                    printf("Subject 5  : %.2f\n", s[i].sub5);
                    printf("Total      : %.2f\n", s[i].total);
                    printf("Percentage : %.2f%%\n", s[i].percentage);
                    printf("Grade      : %c\n", s[i].grade);
                }
                break;

            case 3:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                index = -1;
                for (i = 0; i < count; i++)
                {
                    if (s[i].rollNo == roll)
                    {
                        index = i;
                        break;
                    }
                }

                if (index != -1)
                {
                    printf("\n----- Student Marksheet -----\n");
                    printf("Roll No    : %d\n", s[index].rollNo);
                    printf("Name       : %s\n", s[index].name);
                    printf("Total      : %.2f\n", s[index].total);
                    printf("Percentage : %.2f%%\n", s[index].percentage);
                    printf("Grade      : %c\n", s[index].grade);
                }
                else
                {
                    printf("Student record not found.\n");
                }
                break;

            case 4:
                printf("Thank you!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}