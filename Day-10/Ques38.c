//print reverse pyramid

#include<stdio.h>
int main() {
    int i,j,gap;
    int rows = 5;

    for (i = rows; i>= 1; i--)
    {
        for (gap = 0; gap < rows - i; gap++)
        {
            printf(" ");
        }
        for (j =0;j< (2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}