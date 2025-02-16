//reverse floyd's pattern triangle pyramid
#include <stdio.h>
int main() {
    int a = 5,i, j, k = 1, num;
    num = (a * (a + 1)) / 2; 
    for (i = a; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n"); 
    }
    return 0;
}