// Mini Employee Management System


#include<stdio.h>

#define MAX_EMP 100

struct Employee
{
    int empId;
    char empName[50];
    char department[40];
    float salary;
};

void addEmployees(struct Employee emp[], int n);
void showEmployees(struct Employee emp[], int n);
void searchEmployee(struct Employee emp[], int n);

int main()
{
    struct Employee emp[MAX_EMP];
    int total, choice;

    printf("Enter number of employees: ");
    scanf("%d", &total);

    addEmployees(emp, total);

    do
    {
        printf("\n========== EMPLOYEE MANAGEMENT ==========\n");
        printf("1. Display Employee Records\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                showEmployees(emp, total);
                break;

            case 2:
                searchEmployee(emp, total);
                break;

            case 3:
                printf("Program closed.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 3);

    return 0;
}

void addEmployees(struct Employee emp[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].empName);

        printf("Enter Department: ");
        scanf(" %[^\n]", emp[i].department);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void showEmployees(struct Employee emp[], int n)
{
    int i;

    printf("\n----------- EMPLOYEE DETAILS -----------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID         : %d\n", emp[i].empId);
        printf("Name       : %s\n", emp[i].empName);
        printf("Department : %s\n", emp[i].department);
        printf("Salary     : %.2f\n", emp[i].salary);
    }
}

void searchEmployee(struct Employee emp[], int n)
{
    int id, i, found = 0;

    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(emp[i].empId == id)
        {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n", emp[i].empId);
            printf("Name       : %s\n", emp[i].empName);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Employee record not found.\n");
    }
    
}