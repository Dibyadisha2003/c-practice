//find maximum and minimum in an array
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
    int max = arr[0], min = arr[0];
    for (int i = 1; i < a; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}