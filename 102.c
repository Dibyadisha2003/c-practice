//compare 2 strings lexicographically
#include <stdio.h>
#include <string.h>
void compareLexicographically(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal lexicographically.\n");
    } else if (result > 0) {
        printf("First string is greater than the second string lexicographically.\n");
    } else {
        printf("First string is smaller than the second string lexicographically.\n");
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    compareLexicographically(str1, str2);
    return 0;
}