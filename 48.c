//full diamond shape pyramid
#include <stdio.h>
int main() {
    int a = 5; 
    int i, j, k; 
    for (i = 1; i <= a; i++) {
        for (k = 1; k <= a - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); 
    }
    for (i = a - 1; i >= 1; i--) {
        for (k = 1; k <= a - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}