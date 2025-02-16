//find the largest element in an array
#include <stdio.h>
int main() {
    int a;
    printf("Enter number of elements: ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Largest element: %d\n", max);
    return 0;
}