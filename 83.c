//multiply 2 matices
#include <stdio.h>
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j]; 
            }
        }
    }
}
int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible! Number of columns of first matrix must be equal to rows of second matrix.\n");
        return 1;
    }
    int mat1[10][10], mat2[10][10], result[10][10];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
    printf("Product of the matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}