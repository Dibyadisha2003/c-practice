//compute the sum of diagonals of a matrix
#include <stdio.h>
void sumDiagonals(int mat[][10], int size) {
    int primarySum = 0, secondarySum = 0;
    for (int i = 0; i < size; i++) {
        primarySum += mat[i][i]; 
        secondarySum += mat[i][size - i - 1];  
    }
    if (size % 2 == 1) {
        secondarySum -= mat[size / 2][size / 2];
    }
    printf("Sum of Primary Diagonal: %d\n", primarySum);
    printf("Sum of Secondary Diagonal: %d\n", secondarySum);
    printf("Total Sum of Both Diagonals: %d\n", primarySum + secondarySum);
}
int main() {
    int size;
    printf("Enter size of square matrix: ");
    scanf("%d", &size);
    int mat[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    sumDiagonals(mat, size);
    return 0;
}