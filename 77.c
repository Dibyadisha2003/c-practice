//array rotation
#include <stdio.h>
void rotateArray(int arr[], int a, int rotations) {
    rotations = rotations % a;  
    int temp[rotations];
    for (int i = 0; i < rotations; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < a - rotations; i++) {
        arr[i] = arr[i + rotations];
    }
    for (int i = 0; i < rotations; i++) {
        arr[a - rotations + i] = temp[i];
    }
}
int main() {
    int a, rotations;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &rotations);
    rotateArray(arr, a, rotations);
    printf("Array after rotation: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}