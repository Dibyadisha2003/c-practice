//Read and print all files from a zip file
#include <stdio.h>
#include <zip.h>
int main() {
    struct zip *archive;
    struct zip_file *file;
    struct zip_stat stat;
    char buffer[1024];
    int err, i, bytesRead;
    const char *zipFilename = "sample.zip"; 
    archive = zip_open(zipFilename, 0, &err);
    if (!archive) {
        printf("Error opening ZIP file: %s\n", zipFilename);
        return 1;
    }
    int numFiles = zip_get_num_entries(archive, 0);
    printf("ZIP Archive '%s' contains %d files:\n", zipFilename, numFiles);
    for (i = 0; i < numFiles; i++) {
        zip_stat_index(archive, i, 0, &stat);
        printf("\nFile %d: %s (Size: %lld bytes)\n", i + 1, stat.name, stat.size);
        file = zip_fopen_index(archive, i, 0);
        if (!file) {
            printf("Error opening file %s\n", stat.name);
            continue;
        }
        printf("Contents:\n");
        while ((bytesRead = zip_fread(file, buffer, sizeof(buffer) - 1)) > 0) {
            buffer[bytesRead] = '\0';
            printf("%s", buffer);
        }
        printf("\n");
        zip_fclose(file);
    }
    zip_close(archive);
    return 0;
}