//decimal to binary
#include <stdio.h>
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i++] = decimal % 2; 
        decimal /= 2; 
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal); 
    if (decimal < 0) {
        printf("Enter a positive integer.\n");
    } else if (decimal == 0) {
        printf("Binary equivalent: 0\n"); 
    } else {
        decimalToBinary(decimal);
    }
    return 0;
}