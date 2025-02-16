// display armstrong numbers between 1-1000
#include <stdio.h>
#include <math.h>
int main() {
    int a, originalNum, remainder, n, result, i;
    printf("Armstrong numbers between 1 and 1000 are:\n");
    for (i = 1; i <= 1000; i++) {
        a = i;
        originalNum = a;
        n = 0;
        result = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }
        originalNum = a;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if (result == a) {
            printf("%d ", a);
        }
    }
    printf("\n");
    return 0;
}