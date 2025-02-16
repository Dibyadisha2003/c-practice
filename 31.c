// display armstrong numbers between 2 intervals
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, originalNum, remainder, n, result, i;
    printf("Enter the 1st interval: ");
    scanf("%d", &a);
    printf("Enter the 2nd interval: ");
    scanf("%d", &b);
    printf("Armstrong numbers between 1st and 2nd intervals are:\n",a,b);
    for (i = a; i <= b; i++) {
        c = i;
        originalNum = c;
        n = 0;
        result = 0;
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
        }
        originalNum = c;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        if (result == c) {
            printf("%d ", c);
        }
    }
    printf("\n");
    return 0;
}