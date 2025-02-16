//sort an array using pointers 
#include <stdio.h>
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", (arr + i));
    }
    sortArray(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}