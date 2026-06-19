//diagonal matrix

#include <stdio.h>

int main()
{
    int size, row, col;
    int matrix[50][50];
    int diagonalSum = 0;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &size);

    printf("Enter %d x %d matrix elements:\n", size, size);

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    for (row = 0; row < size; row++)
    {
        diagonalSum += matrix[row][row];
    }

    printf("Sum of the principal diagonal = %d\n", diagonalSum);

    return 0;
}