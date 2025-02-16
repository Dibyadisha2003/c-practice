//find largest element in an array using pointer
#include <stdio.h>
int findLargest(int *arr, int size) {
    int *ptr = arr;  
    int max = *ptr;  
    for (int i = 1; i < size; i++) {
        ptr++;  
        if (*ptr > max) {
            max = *ptr;
        }
    }
    return max;
}
int main() {
    int arr[] = {10, 50, 30, 70, 90, 20};
    int size = sizeof(arr) / sizeof(arr[0]);  
    int largest = findLargest(arr, size); 
    printf("Largest element: %d\n", largest);
    return 0;
}