// check prime or not
#include <stdio.h>
int main() {
    int a, i;
    int prime = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a <= 1) {
        printf("%d is not a prime number.\n", a);
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                prime = 0;  
                break;
            }
        }
        if (prime == 1) {
            printf("%d is a prime number.\n", a);
        } else {
            printf("%d is not a prime number.\n", a);
        }
    }
    return 0;
}