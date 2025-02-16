// lcm of 2 nos.
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int c,d;
    printf("Enter two numbers: ");
    scanf("%d %d", &c, &d);
    printf("LCM of %d and %d is %d\n", c, d, lcm(c,d));
    return 0;
}