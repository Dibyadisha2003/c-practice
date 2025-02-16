//remove all occurences of an element in an array
#include <stdio.h>
int removeElement(int arr[], int a, int key) {
    int j = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] != key) {
            arr[j++] = arr[i];  
        }
    }
    return j; 
}
int main() {
    int a, key;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to remove: ");
    scanf("%d", &key);
    a = removeElement(arr, a, key);
    printf("Array after removing %d: ", key);
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}