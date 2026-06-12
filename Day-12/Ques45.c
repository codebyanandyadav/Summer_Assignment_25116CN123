//function for palindrome

#include<stdio.h>
int isPalindrome(int num)
{
    int original = num,reverse = 0, digit;
    while (num > 0)

    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return (original == reverse);
    
}

int main()
{
    int number;

    printf("Enter a number :");
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("%d is a palindrome number.\n",number);
    else
        printf("%d is not a palindrome number.\n",number);
    
    return 0;
}