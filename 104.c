//split a string into a number of substrings
#include <stdio.h>
void splitString(char str[]) {
    int i = 0;
    printf("Substrings:\n");
    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }
        while (str[i] != ' ' && str[i] != '\0') {
            printf("%c", str[i]);
            i++;
        }
        printf("\n"); 
    }
}
int main() {
    char str[200];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    splitString(str);
    return 0;
}