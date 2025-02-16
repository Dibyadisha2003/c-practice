//create a temporary file
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *tempFile;
    char buffer[100];
    tempFile = tmpfile();
    if (tempFile == NULL) {
        printf("Error creating temporary file!\n");
        return 1;
    }
    fprintf(tempFile, "Hello! This is a temporary file.\n");
    rewind(tempFile);
    printf("Reading from temporary file:\n");
    while (fgets(buffer, sizeof(buffer), tempFile) != NULL) {
        printf("%s", buffer);
    }
    return 0;
}