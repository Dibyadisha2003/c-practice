// calculate sum of n natural numbers
#include<stdio.h>
int main(){
    int a,sum,i;
    printf("Enter the value of a: ");
    scanf("%d",&a);    
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("The sum of the numbers is %d",sum);
}