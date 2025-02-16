//sort the 2d array across rows
#include <stdio.h>
void sortRows(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = j + 1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {  
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}
int main() {
    int rows, cols;    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[10][10];  
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    sortRows(arr, rows, cols);
    printf("Sorted 2D array across rows:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}