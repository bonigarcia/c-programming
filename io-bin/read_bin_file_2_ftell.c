#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

int main() {
    FILE *fd = fopen("file2.bin", "rb");
    if (!fd) {
        perror("An error occurred opening the file");
        return 1;
    }

    printf("The content of the binary file is:\n");
    char record[MAX_STR];
    int file_pos = ftell(fd);
    printf("[file position at the beginning is: %d]\n", file_pos);
    while (fread(&record, sizeof(record), 1, fd) == 1) {
        file_pos = ftell(fd);
        printf("%s [file position is: %d]\n", record, file_pos);
    }
    printf("[file position at the end is: %d]\n", file_pos);

    fclose(fd);

    return 0;
}
