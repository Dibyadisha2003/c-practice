//calculate factorial of a number using recursion
#include <stdio.h>
int factorial(int a) {
    if (a == 0 || a == 1)  
        return 1;  
    return a * factorial(a - 1);
}
void findFactorial() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (a > 12) {  
        printf("Factorial may exceed the limit of 'int' for numbers greater than 12.\n");
    } else {
        printf("Factorial of %d = %d\n", a, factorial(a));
    }
}
int main() {
    findFactorial(); 
    return 0;
}