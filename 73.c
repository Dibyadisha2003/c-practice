//merge 2 arrays
#include <stdio.h>
void mergeArrays(int arr1[], int a, int arr2[], int b, int merged[]) {
    for (int i = 0; i < a; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < b; i++) {
        merged[a + i] = arr2[i];
    }
}
int main() {
    int a, b;
    printf("Enter size of first array: ");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged[a + b];
    mergeArrays(arr1, a, arr2, b, merged);
    printf("Merged array: ");
    for (int i = 0; i < a + b; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}