//find common array elements
#include <stdio.h>
void findCommonElements(int arr1[], int a, int arr2[], int b) {
    printf("Common elements: ");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr1[i] == arr2[j]) {  
                printf("%d ", arr1[i]);
                break; 
            }
        }
    }
    printf("\n");
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
    findCommonElements(arr1, a, arr2, b);
    return 0;
}
