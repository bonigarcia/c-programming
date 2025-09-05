#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255
#define SIZE 10

int main() {
    FILE *fd = fopen("file2.bin", "rb");
    if (!fd) {
        perror("An error occurred opening the file");
        return 1;
    }

    printf("The content of the binary file is:\n");
    char content[SIZE][MAX_STR];

    size_t num = fread(&content, MAX_STR, SIZE, fd);
    printf("Read %ld elements\n", num);

    for (int i = 0; i < SIZE; i++) {
        puts(content[i]);
    }

    fclose(fd);

    return 0;
}
