//check whether input number is a neon number
#include <stdio.h>
int main() {
    int a, square, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &a);
    square = a * a;
    while (square > 0) {
        digit = square % 10; 
        sum += digit;         
        square /= 10;         
    }
    if (sum == a) {
        printf("%d is a Neon Number.\n", a);
    } else {
        printf("%d is NOT a Neon Number.\n", a);
    }
    return 0;
}