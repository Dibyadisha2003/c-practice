//Interchange elements of first and last in a matrix across rows
#include <stdio.h>
void swapFirstLastColumns(int mat[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int temp = mat[i][0]; 
        mat[i][0] = mat[i][cols - 1];
        mat[i][cols - 1] = temp;
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
    swapFirstLastColumns(mat, rows, cols);
    printf("Matrix after interchanging first and last column:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}