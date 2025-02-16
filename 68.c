//sort an array using selection sort
#include <stdio.h>
void selectionSort(int arr[], int a) {
    for (int i = 0; i < a - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < a; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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
    selectionSort(arr, a);
    printf("Sorted array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
} 