//Subtract matrices

#include <stdio.h>

int main()
{
    int r, c;
    int matA[20][20], matB[20][20], diff[20][20];
    int row, col;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            scanf("%d", &matA[row][col]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            scanf("%d", &matB[row][col]);
        }
    }

    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            diff[row][col] = matA[row][col] - matB[row][col];
        }
    }

    printf("Resultant Matrix after Subtraction:\n");
    for (row = 0; row < r; row++)
    {
        for (col = 0; col < c; col++)
        {
            printf("%d ", diff[row][col]);
        }
        printf("\n");
    }

    return 0;
}