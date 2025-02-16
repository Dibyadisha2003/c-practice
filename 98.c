//print first letter of each world
#include <stdio.h>
#include <ctype.h>
void printFirstLetters(char str[]) {
    int i = 0;
    if (str[0] != ' ') {
        printf("%c ", str[0]);
    }
    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            printf("%c ", str[i + 1]); 
        }
        i++;
    }
}
int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("First letters of each word: ");
    printFirstLetters(str);
    return 0;
}