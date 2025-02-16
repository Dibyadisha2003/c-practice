//check whether 2 matrices are equal or not
#include <stdio.h>
int areMatricesEqual(int mat1[][10], int mat2[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0;  
            }
        }
    }
    return 1; 
}
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int mat1[10][10], mat2[10][10];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (areMatricesEqual(mat1, mat2, rows, cols)) {
        printf("Matrices are equal.\n");
    } else {
        printf("Matrices are not equal.\n");
    }
    return 0;
}