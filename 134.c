//make a file read only
#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
    #include <io.h>
    #define CHMOD _chmod
    #define READ_ONLY _S_IREAD
#else
    #include <sys/stat.h>
    #define CHMOD chmod
    #define READ_ONLY S_IRUSR
#endif
int main() {
    char filename[100];
    printf("Enter the file name: ");
    scanf("%s", filename);
    if (CHMOD(filename, READ_ONLY) == 0) {
        printf("File '%s' is now read-only.\n", filename);
    } else {
        printf("Error making the file read-only. Make sure the file exists.\n");
    }
    return 0;
}