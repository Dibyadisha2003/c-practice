//display prime numbers between 2 intervals using functions
#include<stdio.h>
int prime(int a) {
    if (a < 2) {
        return 0;
    }
    for (int i = 2; i * i <= a; i++) { 
        if (a % i == 0) {
            return 0; 
        }
    }   
    return 1;
}
void primeNumbersBetween(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (prime(i)) { 
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    primeNumbersBetween(start, end);
    return 0;
}