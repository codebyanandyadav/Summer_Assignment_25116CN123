//Column wise sum

#include<stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter matrix elements:\n");
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            scanf("%d", &arr[r][c]);
        }
    }

    printf("\nColumn-wise sums:\n");

    for (int c = 0; c < cols; c++) {
        int sum = 0;

        for (int r = 0; r < rows; r++) {
            sum += arr[r][c];
        }

        printf("Column %d Sum = %d\n", c + 1, sum);
    }

    return 0;
}