//inverted hollow star pyramid
#include <stdio.h>
int main() {
    int a = 5,i, j, k; 
    for (i = a; i >= 1; i--) {
        for (k = 0; k < a - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == a) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}