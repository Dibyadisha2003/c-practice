//sum of even no. bw 10-30
#include <stdio.h>
int main(){
    int i, sum=0;
    for (i=10; i<=30; i+=2){
        sum+=i;
    }
    printf("the sum of all even numbers beteween 10-30 is %d",sum);
    return 0;
}