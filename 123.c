//sort a 2d array of strings
#include <stdio.h>
#include <string.h>
void sortStrings(char *arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int size;
    printf("Enter the number of strings: ");
    scanf("%d", &size);
    char str[size][100];
    char *arr[size];
    printf("Enter %d strings:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%s", str[i]);
        arr[i] = str[i];
    }
    sortStrings(arr, size);
    printf("Sorted strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
    return 0;
}