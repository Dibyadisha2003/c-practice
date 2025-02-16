//Determine the unicode code point at a given index
#include <stdio.h>
#include <string.h>
void findUnicodeAtIndex(char str[], int index) {
    int length = strlen(str);
    if (index < 0 || index >= length) {
        printf("Invalid index! Please enter a valid index.\n");
        return;
    }
    printf("Character at index %d: %c\n", index, str[index]);
    printf("Unicode code point: %d\n", str[index]);
}
int main() {
    char str[200];
    int index;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter an index: ");
    scanf("%d", &index);
    findUnicodeAtIndex(str, index);
    return 0;
}