//octal to decimal
#include <stdio.h>
#include <stdlib.h> 
int octalToDecimal(char octalStr[]) {
    return strtol(octalStr, NULL, 8); 
}
int main() {
    char octalStr[20]; 
    printf("Enter an octal number: ");
    scanf("%s", octalStr); 
    int decimal = octalToDecimal(octalStr);
    printf("Decimal equivalent: %d\n", decimal);   
    return 0;
}