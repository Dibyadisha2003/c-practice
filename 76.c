//Copy all the elements of 1 array to another array
#include <stdio.h>
void copyArray(int arr1[], int a, int arr2[]) {
    for (int i = 0; i < a; i++) {
        arr2[i] = arr1[i];
    }
}
int main() {
    int a;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr1[a], arr2[a];
    printf("Enter elements of the first array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    copyArray(arr1, a, arr2);
    printf("Elements of the second array: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}