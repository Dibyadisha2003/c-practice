// make a simple calculator
#include<stdio.h>
int main(){
    char op;
    double a,b,sum,diff,pro,div;
    printf("Enter the operator: ");
    scanf("%c",&op);
    printf("Enter the first number:");
    scanf("%lf",&a);
    printf("Enter the second number:");
    scanf("%lf",&b);
    switch (op){
        case'+':
           sum=a+b;
           printf("The sum of the two numbers is %lf\n",sum);
        case'-':
           diff=a-b;
           printf("The difference of the two numbers is %lf\n",diff);
        case'*':
            pro=a*b;
            printf("The product of the two numbers is %lf\n",pro);
        case'/':
            if(b!=0){
                div=a/b;
                printf("The division of the two numbers is %lf\n",div);
            }
            else{
                printf("Division by zero is not possible");
            }
            break;
        default:
            printf("Invalid operator! Please enter a valid operator\n");
    }
    return 0;
}