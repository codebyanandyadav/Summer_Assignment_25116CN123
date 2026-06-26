//Create ATM Simulation

#include<stdio.h>

int main()
{
    int option;
    float balance =10000.0,amount;

    do
    {
        printf("\n====== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option:");
        scanf("%d",&option);

        switch (option)
        {
            case 1:
                printf("Current Balance:%.2f\n",balance);
                break;
            case 2:
                printf("Enter amount to deposit:");
                scanf("%f",&amount);

                if (amount > 0)
                {
                    balance +=amount;
                    printf("Deposit succesful.\n");
                    printf("Updated Balance: %.2f\n",balance);
                }
                else
                {
                    printf("Invalid deposit amount.\n");
                }
                break;
            
            case 3:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);

                if (amount <= 0)
                {
                    printf("Invalid withdrawal amount.\n");
                }
                else if (amount >balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance: %2f\n",balance);
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            
            default:
                printf("Invalid option. Try again.\n");
                
        }
    } while (option !=4);

    return 0;
    
}