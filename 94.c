//reverse a string using recursion
#include <stdio.h>
#include <string.h>
void reverseString(char str[], int left, int right) {
    if (left >= right) {
        return;  
    }
    char temp = str[left];
    str[left] = str[right];
    str[right] = temp;
    reverseString(str, left + 1, right - 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    reverseString(str, 0, length - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}