//Interchange elements of first and last in a matrix across columns
#include <stdio.h>
void swapFirstLastRows(int mat[][10], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        int temp = mat[0][j];
        mat[0][j] = mat[rows - 1][j];
        mat[rows - 1][j] = temp;
    }
}
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int mat[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    swapFirstLastRows(mat, rows, cols);
    printf("Matrix after interchanging first and last row:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}