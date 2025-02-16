// find all factors of a natural number
#include<stdio.h>
int main(){
    int a,i;
    printf("Enter a natural number:");
    scanf("%d",&a);
    printf("Factors of %d are:\n",a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}