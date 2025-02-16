//get a non-repeating character from the given string
#include <stdio.h>
#include <string.h>
char firstNonRepeating(char str[]) {
    int freq[256] = {0}; 
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        freq[(int)str[i]]++;
    }
    for (int i = 0; i < len; i++) {
        if (freq[(int)str[i]] == 1) {
            return str[i];
        }
    }
    return '\0'; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char result = firstNonRepeating(str);
    if (result != '\0') {
        printf("First non-repeating character: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }
    return 0;
}