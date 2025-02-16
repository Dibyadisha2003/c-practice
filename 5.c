// prime or not
#include<stdio.h>
int main(){
    int a,i,prime=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<=1){
        printf("not a prime number");
    }
    else{
        for(i=2;i<=a/2;i++){
            if(a%i==0){
                prime=1;
                break;
            }
        }
        if(prime==0){
            printf("The number is prime");
        }
        else{
            printf("The number is not prime");
        }
    }
    return 0;
}