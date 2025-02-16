//calculate power using recursion
#include <stdio.h>
int power(int a, int b) {
    if (b == 0)  
        return 1;
    return a * power(a, b - 1);
}
int main() {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter exponent: ");
    scanf("%d", &b);
    printf("%d^%d = %d\n", a, b, power(a, b));
    return 0;
}