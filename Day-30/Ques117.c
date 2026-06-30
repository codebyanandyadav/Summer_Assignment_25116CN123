//Student Record System

#include<stdio.h>

#define SIZE 100

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student data[SIZE];
    int total,i;
    int searchId,found=0;

    printf("Enter number of students:");
    scanf("%d",&total);

    for(i=0;i<total;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Enter ID: ");
        scanf("%d",&data[i].id);

        printf("Enter Name:");
        scanf(" %[^\n]",data[i].name);

        printf("Enter Marks: ");
        scanf("%f",&data[i].marks);
    }

    printf("\n======= STUDENT RECORD =======\n");

    for(i=0;i<total;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("ID   : %d\n",data[i].id);
        printf("Name : %s\n",data[i].name);
        printf("Marks: %.2f\n",data[i].marks);
    }

    printf("\nEnter Student ID to search: ");
    scanf("%d",&searchId);

    for(i=0;i<total;i++)
    {
        if(data[i].id == searchId)
        {
            printf("\nRecord Found\n");
            printf("ID   : %d\n",data[i].id);
            printf("Name : %s\n",data[i].name);
            printf("Marks: %.2f\n",data[i].marks);
            found =1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nStudent record not found.\n");
    }

    return 0;
    
}
