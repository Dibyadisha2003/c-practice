//remove duplicate elements from a sorted array
#include <stdio.h>
int removeDuplicates(int arr[], int a) {
    if (a == 0 || a == 1) {
        return a;
    }
    int temp[a], j = 0;
    for (int i = 0; i < a - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[a - 1];
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    return j;
}
int main() {
    int a;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the sorted elements:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    a = removeDuplicates(arr, a);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}