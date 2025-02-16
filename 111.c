//char to int
#include <stdio.h>
int charToInt(char ch) {
    return ch - '0'; 
}
int main() {
    char ch;
    printf("Enter a single digit (0-9): ");
    scanf(" %c", &ch); 
    if (ch >= '0' && ch <= '9') {
        int num = charToInt(ch);
        printf("Character as integer: %d\n", num);
    } else {
        printf("Invalid input! Enter a single digit (0-9).\n");
    }
    return 0;
}