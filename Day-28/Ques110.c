//Bank Account Management System

#include<stdio.h>

struct BankAccount
{
    int accNo;
    char holder[50];
    float balance;
};

void createAccount(struct BankAccount *a)
{
    printf("\nEnter Account Number: ");
    scanf("%d",&a->accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a->holder);

    printf("Enter Initial Deposit: ");
    scanf("%f",&a->balance);

    printf("\nAccount created successfully.\n");
}

void deposit(struct BankAccount *a)
{
    float amount;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        a->balance += amount;
        printf("Deposit successful.\n");
    }
    else
    {
        printf("Invalid amount.\n");
    }
}

void withdraw(struct BankAccount *a)
{
    float amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f",&amount);

    if (amount <= 0)
    {
        printf("Invalid amount.\n");
    }
    else if (amount > a->balance)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        a->balance -= amount;
        printf("Withdrawal successful.\n");
    }
}

void checkBalance(struct BankAccount a)
{
    printf("\nCurrent Balance: %.2f\n", a.balance);
}

void accountDetails(struct BankAccount a)
{
    printf("\n----- Account Details -----\n");
    printf("Account Number : %d\n", a.accNo);
    printf("Account Holder : %s\n", a.holder);
    printf("Available Balance : %.2f\n", a.balance);
}

int main()
{
    struct BankAccount account;
    int choice;
    int created = 0;

    while (1)
    {
        printf("\n====== BANK ACCOUNT SYSTEM ======\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createAccount(&account);
                created = 1;
                break;

            case 2:
                if (created)
                    deposit(&account);
                else
                    printf("Please create an account first.\n");
                break;

            case 3:
                if (created)
                    withdraw(&account);
                else
                    printf("Please create an account first.\n");
                break;

            case 4:
                if (created)
                    checkBalance(account);
                else
                    printf("Please create an account first.\n");
                break;

            case 5:
                if (created)
                    accountDetails(account);
                else
                    printf("Please create an account first.\n");
                break;

            case 6:
                printf("Thank you for using the Bank Account System.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}