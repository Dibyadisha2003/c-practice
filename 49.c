//pascal's pattern triangle pyramid
#include<stdio.h>
int main() {
    int a = 5;
    int i, j, k, b;
    for (i = 0; i < a; i++) {
        for (k = 1; k <= a - i; k++) {
            printf(" ");
        }
        b = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", b);
            b = b * (i - j) / (j + 1); 
        }
        printf("\n");
    }
    return 0;
}