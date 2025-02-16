// check armstrong number
#include<stdio.h>
#include<math.h>
int main(){
     int a, originalNum, remainder, n = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    originalNum = a;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }
    originalNum = a;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == a) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is NOT an Armstrong number.\n", a);
    }
    return 0;
}