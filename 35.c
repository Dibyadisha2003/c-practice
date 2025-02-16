// display prime numbers between 2 intervals
#include <stdio.h>
int main() {
    int low, high, i, j, Prime;
    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);
    printf("Prime numbers between %d and %d are:\n", low, high);
    for (i = low; i <= high; i++) {
        if (i <= 1)
            continue;
        Prime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0; 
                break;
            }
        }
        if (Prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}