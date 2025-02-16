//sort elements in descending order
#include <stdio.h>
void sortDescending(int arr[], int a) {
    for (int i = 0; i < a - 1; i++) {
        for (int j = i + 1; j < a; j++) {
            if (arr[i] < arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    sortDescending(arr, a);
    printf("Sorted array in descending order: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}