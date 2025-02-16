//compare 2 files and report mismatches
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *file1, *file2;
    char filename1[100], filename2[100];
    char line1[256], line2[256];
    int lineNum = 1, mismatch = 0;
    printf("Enter first file name: ");
    scanf("%s", filename1);
    printf("Enter second file name: ");
    scanf("%s", filename2);
    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    if (file1 == NULL || file2 == NULL) {
        printf("Error opening files. Make sure both files exist.\n");
        return 1;
    }
    while (fgets(line1, sizeof(line1), file1) != NULL && fgets(line2, sizeof(line2), file2) != NULL) {
        line1[strcspn(line1, "\n")] = 0;
        line2[strcspn(line2, "\n")] = 0;
        if (strcmp(line1, line2) != 0) {
            printf("Mismatch at line %d:\n", lineNum);
            printf("File 1: %s\n", line1);
            printf("File 2: %s\n", line2);
            mismatch = 1;
        }
        lineNum++;
    }
    while (fgets(line1, sizeof(line1), file1) != NULL) {
        printf("Mismatch at line %d:\n", lineNum);
        printf("File 1: %s\nFile 2: (No line present)\n", line1);
        lineNum++;
        mismatch = 1;
    }
    while (fgets(line2, sizeof(line2), file2) != NULL) {
        printf("Mismatch at line %d:\n", lineNum);
        printf("File 1: (No line present)\nFile 2: %s\n", line2);
        lineNum++;
        mismatch = 1;
    }
    fclose(file1);
    fclose(file2);
    if (!mismatch) {
        printf("Both files are identical.\n");
    }
    return 0;
}