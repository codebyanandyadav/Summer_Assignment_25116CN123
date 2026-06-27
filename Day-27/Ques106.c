//Employee Management System

#include <stdio.h>

#define MAX_EMP 100

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[MAX_EMP];
    int count = 0;
    int choice, i, id, index;

    while (1)
    {
        printf("\n========== Employee Management System ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (count == MAX_EMP)
                {
                    printf("Employee list is full.\n");
                    break;
                }

                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[count].name);

                printf("Enter Department: ");
                scanf(" %[^\n]", emp[count].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);

                count++;
                printf("Employee added successfully.\n");
                break;

            case 2:
                if (count == 0)
                {
                    printf("No employee records available.\n");
                    break;
                }

                printf("\n----- Employee Records -----\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                index = -1;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        index = i;
                        break;
                    }
                }

                if (index != -1)
                {
                    printf("\nEmployee Found\n");
                    printf("ID         : %d\n", emp[index].id);
                    printf("Name       : %s\n", emp[index].name);
                    printf("Department : %s\n", emp[index].department);
                    printf("Salary     : %.2f\n", emp[index].salary);
                }
                else
                {
                    printf("Employee not found.\n");
                }
                break;

            case 4:
                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);

                index = -1;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        index = i;
                        break;
                    }
                }

                if (index != -1)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &emp[index].salary);
                    printf("Salary updated successfully.\n");
                }
                else
                {
                    printf("Employee not found.\n");
                }
                break;

            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);

                index = -1;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        index = i;
                        break;
                    }
                }

                if (index == -1)
                {
                    printf("Employee record not found.\n");
                }
                else
                {
                    for (i = index; i < count - 1; i++)
                    {
                        emp[i] = emp[i + 1];
                    }
                    count--;
                    printf("Employee deleted successfully.\n");
                }
                break;

            case 6:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}