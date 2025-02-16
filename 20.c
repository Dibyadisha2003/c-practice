// check largest number among 3
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the third number: ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("The first number is largest");
    }
    else if (b>a && b>c){
        printf("The second number is largest");
    }
    else{
        printf("The third number is largest");
    }
}