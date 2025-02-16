//decimal to hexadecimal
#include <stdio.h>
void decimalToHex(int decimal) {
    char hex[20]; 
    int i = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10)
            hex[i++] = remainder + '0'; 
        else
            hex[i++] = remainder - 10 + 'A'; 
        decimal /= 16; 
    }
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
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
        decimalToHex(decimal);
    }
    return 0;
}