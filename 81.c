//find normal and trace of a matrix
#include <stdio.h>
#include <math.h>
void calculateNormalAndTrace(int mat[][10], int n, double *normal, int *trace) {
    *trace = 0;
    *normal = 0.0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *normal += mat[i][j] * mat[i][j]; 
            if (i == j) {
                *trace += mat[i][j];  
            }
        }
    }
    *normal = sqrt(*normal); 
}
int main() {
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    int mat[10][10];
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    double normal;
    int trace;
    calculateNormalAndTrace(mat, n, &normal, &trace);
    printf("Trace of the matrix: %d\n", trace);
    printf("Normal of the matrix: %.2lf\n", normal);
    return 0;
}