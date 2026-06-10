//star pyramid pattern

#include<stdio.h>

int main() {
    int row,col,space;
    int levels =5;

    for(row =1 ; row <= levels; row++)
    {
        for(space =1;space<= levels - row ; space++)
        {
            printf(" ");
        }
        for (col = 1; col<=(2*row -1); col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}