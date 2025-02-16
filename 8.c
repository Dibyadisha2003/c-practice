// swap 2 numbers
#include<stdio.h>
int main(){
   int a,b,swap;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    swap=a;
    a=b;
    b=swap;
    printf("The first number is %d and the second number is %d",a,b);
    return 0; 
}