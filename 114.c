//hexadecimal to decimal
#include <stdio.h>
#include <stdlib.h> 
int hexToDecimal(char hexStr[]) {
    return strtol(hexStr, NULL, 16); 
}
int main() {
    char hexStr[20]; 
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexStr); 
    int decimal = hexToDecimal(hexStr);
    printf("Decimal equivalent: %d\n", decimal);   
    return 0;
}