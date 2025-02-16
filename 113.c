//decimal to octal
#include <stdio.h>
void decimalToOctal(int decimal) {
    int octal[20], i = 0;
    while (decimal > 0) {
        octal[i++] = decimal % 8; 
        decimal /= 8; 
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal < 0) {
        printf("Enter a positive integer.\n");
    } else {
        decimalToOctal(decimal);
    }
    return 0;
}