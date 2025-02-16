//remove leading zeros
#include <stdio.h>
#include <string.h>
void removeLeadingZeros(char str[]) {
    int i = 0, j = 0;
    while (str[i] == '0') {
        i++;
    }
    if (str[i] == '\0') {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    while (str[i] != '\0') {
        str[j++] = str[i++];
    }
    str[j] = '\0'; 
}
int main() {
    char str[100];
    printf("Enter a number as a string: ");
    scanf("%s", str);
    removeLeadingZeros(str);
    printf("Number without leading zeros: %s\n", str);
    return 0;
}