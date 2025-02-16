//search an element in array(binary search)
#include <stdio.h>
int binarySearch(int arr[], int a, int key) {
    int left = 0, right = a - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main() {
    int a, key;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, a, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array.\n");
    return 0;
}