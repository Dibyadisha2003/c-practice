// calculate fahrenheit to celsius
#include<stdio.h>
int main(){
    float a,c;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&a);
    c=(a-32)*5/9;
    printf("The temperature in celsius is %f",c);
    return 0;
}