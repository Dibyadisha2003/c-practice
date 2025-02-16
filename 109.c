//long to string conversion
#include <stdio.h>
void longToString(long num, char str[]) {
    sprintf(str, "%ld", num); 
}
int main() {
    long num;
    char str[20]; 
    printf("Enter a long integer: ");
    scanf("%ld", &num); 
    longToString(num, str);
    printf("Long as string: %s\n", str);   
    return 0;
}