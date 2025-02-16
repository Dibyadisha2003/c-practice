//Print all the patterns that match given pattern from a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE 1024  
int main() {
    FILE *file;
    char filename[100], pattern[100], line[MAX_LINE];
    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the pattern to search: ");
    scanf("%s", pattern);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    printf("\nLines matching pattern \"%s\":\n", pattern);
    while (fgets(line, MAX_LINE, file) != NULL) {
        if (strstr(line, pattern) != NULL) {
            printf("%s", line);  
        }
    }
    fclose(file);
    return 0;
}