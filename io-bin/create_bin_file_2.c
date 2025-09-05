#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255
#define SIZE 10

int main() {
    char content[SIZE][MAX_STR];

    for (int i = 0; i < SIZE; i++) {
        sprintf(content[i], "This is line %d", i + 1);
    }

    FILE *fd = fopen("file2.bin", "wb");
    if (!fd) {
        perror("An error occurred opening the file");
        return 1;
    }
    fwrite(content, MAX_STR, SIZE, fd);
    fclose(fd);

    return 0;
}
