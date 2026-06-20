//Row wise sum

#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nRow-wise sums are:\n");

    for (int i = 0; i < r; i++) {
        int total = 0;

        for (int j = 0; j < c; j++) {
            total += matrix[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, total);
    }

    return 0;
}