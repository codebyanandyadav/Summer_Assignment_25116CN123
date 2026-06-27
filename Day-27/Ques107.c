//Salary Management System

#include <stdio.h>

#define MAX 100

struct SalaryRecord
{
    int empId;
    char empName[50];
    float basicPay;
    float allowance;
    float deduction;
    float netSalary;
};

int main()
{
    struct SalaryRecord emp[MAX];
    int total = 0;
    int choice, i, id, found;

    while (1)
    {
        printf("\n========== Salary Management System ==========\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Record\n");
        printf("4. Update Salary Details\n");
        printf("5. Delete Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                if (total >= MAX)
                {
                    printf("Record storage is full.\n");
                    break;
                }

                printf("Enter Employee ID: ");
                scanf("%d", &emp[total].empId);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[total].empName);

                printf("Enter Basic Pay: ");
                scanf("%f", &emp[total].basicPay);

                printf("Enter Allowance: ");
                scanf("%f", &emp[total].allowance);

                printf("Enter Deduction: ");
                scanf("%f", &emp[total].deduction);

                emp[total].netSalary =
                    emp[total].basicPay +
                    emp[total].allowance -
                    emp[total].deduction;

                total++;
                printf("Salary record added successfully.\n");
                break;

            case 2:
                if (total == 0)
                {
                    printf("No records available.\n");
                    break;
                }

                printf("\n------ Salary Records ------\n");
                for (i = 0; i < total; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", emp[i].empId);
                    printf("Name       : %s\n", emp[i].empName);
                    printf("Basic Pay  : %.2f\n", emp[i].basicPay);
                    printf("Allowance  : %.2f\n", emp[i].allowance);
                    printf("Deduction  : %.2f\n", emp[i].deduction);
                    printf("Net Salary : %.2f\n", emp[i].netSalary);
                }
                break;

            case 3:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                found = -1;
                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        found = i;
                        break;
                    }
                }

                if (found != -1)
                {
                    printf("\nRecord Found\n");
                    printf("Name       : %s\n", emp[found].empName);
                    printf("Basic Pay  : %.2f\n", emp[found].basicPay);
                    printf("Allowance  : %.2f\n", emp[found].allowance);
                    printf("Deduction  : %.2f\n", emp[found].deduction);
                    printf("Net Salary : %.2f\n", emp[found].netSalary);
                }
                else
                {
                    printf("Employee record not found.\n");
                }
                break;

            case 4:
                printf("Enter Employee ID to update: ");
                scanf("%d", &id);

                found = -1;
                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        found = i;
                        break;
                    }
                }

                if (found != -1)
                {
                    printf("Enter New Basic Pay: ");
                    scanf("%f", &emp[found].basicPay);

                    printf("Enter New Allowance: ");
                    scanf("%f", &emp[found].allowance);

                    printf("Enter New Deduction: ");
                    scanf("%f", &emp[found].deduction);

                    emp[found].netSalary =
                        emp[found].basicPay +
                        emp[found].allowance -
                        emp[found].deduction;

                    printf("Salary details updated successfully.\n");
                }
                else
                {
                    printf("Employee record not found.\n");
                }
                break;

            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);

                found = -1;
                for (i = 0; i < total; i++)
                {
                    if (emp[i].empId == id)
                    {
                        found = i;
                        break;
                    }
                }

                if (found == -1)
                {
                    printf("Record not found.\n");
                }
                else
                {
                    for (i = found; i < total - 1; i++)
                    {
                        emp[i] = emp[i + 1];
                    }
                    total--;
                    printf("Record deleted successfully.\n");
                }
                break;

            case 6:
                printf("Program closed.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}