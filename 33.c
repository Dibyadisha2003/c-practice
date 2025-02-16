// check pallindrome or not
#include<stdio.h>
int main(){
    int a,originalNum,reversedNum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&a);
    originalNum=a;
    while (a != 0) {
        remainder = a % 10;
        reversedNum = reversedNum * 10 + remainder; 
        a /= 10; 
    }
    if (originalNum == reversedNum) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is NOT a Palindrome number.\n", originalNum);
    }
    return 0;
}