// find compund interest
#include<stdio.h>
int main(){
    float p,r,t,ci;
    printf("Enter the principal amount: \n");
    scanf("%f",&p);
    printf("Enter the rate of interest: \n");
    scanf("%f",&r);
    printf("Enter the time period: \n");
    scanf("%f",&t);
    ci=p*(pow((1+r/100),t));
    printf("The compound interest is %f",ci);
    return 0;
}