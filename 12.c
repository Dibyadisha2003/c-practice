// print prime numbers from 1 to n
#include<stdio.h>
int main(){
    int a,i,j,prime;
    printf("Enter the value of n: ");
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        prime=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=1;
                break;
            }
        }
        if(prime==0){
            printf("%d\n",i);
        }
    }
    return 0;
}