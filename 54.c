//find all roots of a quadratic equation
#include <stdio.h>
#include <math.h> 
void findRoots(float a, float b, float c) {
    float discriminant, root1, root2, realPart, imagPart;
    discriminant = b * b - 4 * a * c; 
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}
int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
    } else {
        findRoots(a, b, c); 
    }
    return 0;
}