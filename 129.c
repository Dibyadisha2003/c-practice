//Add 2 complex numbers by passing structure to a function
#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}
int main() {
    struct Complex num1, num2, result;
    printf("Enter first complex number (real and imaginary part): ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter second complex number (real and imaginary part): ");
    scanf("%f %f", &num2.real, &num2.imag);
    result = addComplex(num1, num2);
    printf("\nSum of Complex Numbers: %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}