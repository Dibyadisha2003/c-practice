// print given triangle
#include <stdio.h>
int main() {
    int a= 5,i,j,k;
    for (i = 0; i < a; i++) {
        for (j = 0; j < 2 * (a - i - 1); j++)
            printf(" ");
        for (k = 0; k < 2 * i + 1; k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}