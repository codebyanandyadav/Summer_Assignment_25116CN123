//Voting Eligibility system

#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if (age <0)
    {
        printf("Invalid age entered.\n");

    }
    else if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are eligible to vote.\n");
        printf("you can vote after %d year(s).\n",18-age);
    }
    return 0;
}