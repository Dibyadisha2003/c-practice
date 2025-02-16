//rotate matrix elements
#include <stdio.h>
void rotateMatrix(int mat[][10], int rows, int cols) {
    if (rows == 0 || cols == 0) return;
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int prev, curr;
    while (top < bottom && left < right) {
        prev = mat[top + 1][left];  
        for (int i = left; i <= right; i++) {
            curr = mat[top][i];
            mat[top][i] = prev;
            prev = curr;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            curr = mat[i][right];
            mat[i][right] = prev;
            prev = curr;
        }
        right--;
        for (int i = right; i >= left; i--) {
            curr = mat[bottom][i];
            mat[bottom][i] = prev;
            prev = curr;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            curr = mat[i][left];
            mat[i][left] = prev;
            prev = curr;
        }
        left++;
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
    rotateMatrix(mat, rows, cols);
    printf("Rotated matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}