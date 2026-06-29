// Menu Driven Calculator

#include<stdio.h>

int main()
{
    int option;
    double firstNum, secondNum, answer;

    while (1)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        if (option == 5)
        {
            printf("Calculator closed.\n");
            break;
        }

        if (option >= 1 && option <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &firstNum, &secondNum);
        }

        switch(option)
        {
            case 1:
                answer = firstNum + secondNum;
                printf("Result = %.2lf\n", answer);
                break;

            case 2:
                answer = firstNum - secondNum;
                printf("Result = %.2lf\n", answer);
                break;

            case 3:
                answer = firstNum * secondNum;
                printf("Result = %.2lf\n", answer);
                break;

            case 4:
                if (secondNum == 0)
                    printf("Division by zero is not allowed.\n");
                else
                {
                    answer = firstNum / secondNum;
                    printf("Result = %.2lf\n", answer);
                }
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}