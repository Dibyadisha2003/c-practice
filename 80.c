//find transpose
#include <stdio.h>
void findTranspose(int mat[][10], int transpose[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j]; 
        }
    }
}
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int mat[10][10], transpose[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    findTranspose(mat, transpose, rows, cols);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) { 
        for (int j = 0; j < rows; j++) { 
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}