//Read content from one file and write it into another file
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *sourceFile, *targetFile;
    char sourceFilename[100], targetFilename[100];
    char ch;
    printf("Enter the source file name: ");
    scanf("%s", sourceFilename);
    printf("Enter the target file name: ");
    scanf("%s", targetFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    targetFile = fopen(targetFilename, "w");
    if (targetFile == NULL) {
        printf("Error: Cannot open target file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }
    fclose(sourceFile);
    fclose(targetFile);
    printf("Content copied successfully from '%s' to '%s'.\n", sourceFilename, targetFilename);
    return 0;
}