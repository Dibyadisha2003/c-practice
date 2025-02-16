// print fibonacci series
#include<stdio.h>
int main(){
    int a,b,c,n,i;
    a=0;
    b=1;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series is: ");
    for(i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}