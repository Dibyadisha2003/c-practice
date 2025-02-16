// generate multiplication table
#include<stdio.h>
int main(){
    int a,i;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d",&a);
    for (i=0;i<=10;i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}