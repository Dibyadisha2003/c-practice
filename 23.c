// check leap year
#include<stdio.h>
int main(){
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                printf("The year is a leap year");
            }
            else{
                printf("The year is not a leap year");
            }
        }
        else{
            printf("The year is a leap year");
        }
    }
    else{
        printf("The year is not a leap year");
    }
    return 0;
}