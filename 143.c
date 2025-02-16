//create a function that calculates length of a  string using pointer
#include <stdio.h>
int string_length(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;  
    }    
    return length;
}
int main() {
    char str[] = "Hello, World!";
    int len = string_length(str);
    printf("The length of the string is: %d\n", len);
        return 0;
}