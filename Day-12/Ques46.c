//function for armstrong

#include<stdio.h>

int armstrongCheck(int num)
{
    int original = num, digit, count = 0;
    int sum = 0, temp = num;

    while (temp > 0)
    {
        count++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < count; i++)
        {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrongCheck(n))
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}