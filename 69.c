//sort an array using insertion sort
#include <stdio.h>
void insertionSort(int arr[], int a) {
    for (int i = 1; i < a; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, a);
    printf("Sorted array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}