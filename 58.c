//find gcd using recursion
#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)  
        return a;  
    return gcd(b, a % b);  
}
int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (a < 0) a = -a;  
    if (b < 0) b = -b;
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    return 0;
}