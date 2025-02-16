//string to long conversion
#include <stdio.h>
#include <stdlib.h> 
int main() {
    char str[20]; 
    char *endPtr;  
    long num;
    printf("Enter a numeric string: ");
    scanf("%s", str); 
    num = strtol(str, &endPtr, 10);
    if (*endPtr == '\0') {
        printf("Converted long integer: %ld\n", num);
    } else {
        printf("Invalid input! Not a valid integer.\n");
    }
    return 0;
}