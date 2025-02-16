//insert a string into another string
#include <stdio.h>
#include <string.h>
void insertString(char str1[], char str2[], int pos) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (pos < 0 || pos > len1) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = len1; i >= pos; i--) {
        str1[i + len2] = str1[i];
    }
    for (int i = 0; i < len2; i++) {
        str1[pos + i] = str2[i];
    }
    printf("Modified string: %s\n", str1);
}
int main() {
    char str1[200], str2[100];
    int pos;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the string to insert: ");
    scanf("%s", str2);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    insertString(str1, str2, pos);
    return 0;
}