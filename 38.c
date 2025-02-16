// sum of fibonacci numbers at even indexes up to n terms
#include<stdio.h>
int main() {
    int a, i;
    int first = 0, second = 1, next;
    int sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    printf("Fibonacci Series: ");
    for (i = 0; i < a; i++) {
        if (i % 2 == 0) { 
            sum += first; 
        }
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\nSum of Fibonacci numbers at even indexes: %d\n", sum);
    return 0;
}