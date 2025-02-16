// find simple interest
#include<stdio.h>
int main(){
    float p,r,t,si;
    printf("Enter the principal amount: \n"); 
    scanf("%f",&p);
    printf("Enter the rate of interest: \n");
    scanf("%f",&r);
    printf("Enter the time period: \n");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The simple interest is %f",si);
    return 0;
}