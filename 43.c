// character pattern
#include<stdio.h>
int main(){
    int a,i,j;
    printf("Enter number of rows:");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("%c",j+'A');
        }
        printf("\n");
    }
    return 0;
}