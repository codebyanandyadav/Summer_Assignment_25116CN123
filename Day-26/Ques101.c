//Create number guessing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int secret,guess,attempts =0;
    srand((unsigned)time(NULL));
    secret=rand( ) % 100 +1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    while (1)
    {
        printf("Enter your guess:");
        scanf("%d",&guess);

        attempts++;

        if (guess == secret)
        {
            printf("Congratulations! you guessed the correct number.\n");
            printf("Total Attempts:%d\n",attempts);
            break;

        }
        else if (guess <secret)
        {
            printf("Too low! Try a large number.\n");
        }
        else
        {
            printf("Too high! Try a smaller number.\n");
        }
    }
    return 0;
}