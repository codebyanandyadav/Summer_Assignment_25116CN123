#include<stdio.h>
int main() {
    int n,rev=0,temp,rem;

    printf("Enter a number :");
    scanf("%d",&n);

    temp = n;

    for (; temp !=0; temp /=10) {
        rem = temp % 10;
        rev = rev * 10 + rem;
    }

    if (n==rev)
        printf("Palindrome munber");
    else
        printf("Not a palindrome number");
    return 0;
}