//rename a file
#include <stdio.h>
int main() {
    char oldName[100], newName[100];
    printf("Enter the current file name: ");
    scanf("%s", oldName);
    printf("Enter the new file name: ");
    scanf("%s", newName);
    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully from %s to %s\n", oldName, newName);
    } else {
        printf("Error renaming file! Make sure the file exists.\n");
    }
    return 0;
}