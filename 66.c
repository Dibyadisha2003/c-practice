//sort an array using bubble sort
#include <stdio.h>
void bubbleSort(int arr[], int a) {
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int a;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, a);
    printf("Sorted array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}