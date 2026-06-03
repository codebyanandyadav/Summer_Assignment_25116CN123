#include<stdio.h>
int main() {
    int a,b,temp;
    // input two number
    printf("Enter two number :");
    scanf("%d %d",&a, &b);

    //find the GDC using euclidean algorithm
    while (b !=0)
    {
        temp=b;
        b= a % b;
        a= temp;
    }

    //result of GDC
    printf("GDC = %d\n",a);

    return 0;
    
}