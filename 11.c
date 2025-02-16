// add 2 complex numbers
#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the real part of the first number: ");
    scanf("%f",&a);
    printf("Enter the imaginary part of the first number: ");
    scanf("%f",&b);
    printf("Enter the real part of the second number: ");
    scanf("%f",&c);
    printf("Enter the imaginary part of the second number: ");
    scanf("%f",&d);
    printf("The sum of the two complex numbers is %f + %fi",a+c,b+d);
    return 0;
}