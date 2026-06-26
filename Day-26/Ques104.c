//Create Quiz Application

#include<stdio.h>

int main()
{
    int answer;
    int score =0;
    printf("*********** QUIZ APPLICATION ***********\n");

    printf("\n1. which language is mainly used for system programming ?\n");
    printf("1) Python\n2) c\n3) JAVA\n4) HTML\n");
    printf("Enter Your choice:");
    scanf("%d",&answer);

    if (answer ==2)
        score++;
    printf("\2. How many days are there in  leap year ?\n");
    printf("1) 364\n2) 365\n3) 366\n4) 367\n");
    printf("Enter your choice :");
    scanf("%d",&answer);

    if (answer ==3)
        score++;


    printf("\n3.Which planet is called the red planet?\n");
    printf("1) Venus\n2) Mars\n3) Jupiter\n4) Saturn\n");
    printf("Enter your choice :");
    scanf("%d",&answer);

    if (answer == 2)
        score++;

     printf("\4. What is the value of 8+5 ?\n");
    printf("1) 11\n2) 12\n3) 13\n4) 14\n");
    printf("Enter your choice :");
    scanf("%d",&answer);

    if (answer == 3)
        score++;

     printf("\n5. which device is used to display output?\n");
    printf("1) monitor\n2) keyboard\n3) mouse\n4) scanner\n");
    printf("Enter your choice :");
    scanf("%d",&answer);

    if (answer == 1)
        score++;

    printf("\n=========== RESULT ===========\n");
    printf("Excellent answers:%d out of 5\n",score);

    if (score ==5)
        printf("Excellent! Outstanding performance.\n");
    else if (score >=3)
        printf("Good job! keep practicing\n");
    else
        printf("Better luck next time.\n");

    return 0;
}