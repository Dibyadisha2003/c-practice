//print a 2d array
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter number of rows: ");
    scanf("%d", &a);
    printf("Enter number of columns: ");
    scanf("%d", &b);
    int arr[a][b];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("2D Array:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}