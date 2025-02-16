//check whether a number can be expressed as sum of 2 prime numbers
#include<stdio.h>
#include <stdio.h>
int prime(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
void checkSumOfTwoPrimes(int a) {
    int found = 0;
    for (int i = 2; i <= a / 2; i++) { 
        if (prime(i) && prime(a - i)) { 
            printf("%d = %d + %d\n", a, i, a - i);
            found = 1;
        }
    }
    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", a);
    }
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    checkSumOfTwoPrimes(a);
    return 0;
}