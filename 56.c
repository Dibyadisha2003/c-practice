//sum of natural numbers using recursion
#include <stdio.h>
int sumOfNaturalNumbers(int a) {
    if (a == 0)  
        return 0; 
    return a + sumOfNaturalNumbers(a - 1);  
}
int main() {
    int a;
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of first %d natural numbers = %d\n", a, sumOfNaturalNumbers(a));
    }
    return 0;
}