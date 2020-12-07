#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255
#define SIZE 10

int main(int argc, char *argv[]) {
    char content[10][MAX_STR];

    for (int i = 0; i < SIZE; i++) {
        sprintf(content[i], "This is line %d", i + 1);
    }

    FILE *fp = fopen("file1.bin", "wb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }
    fwrite(content, MAX_STR, SIZE, fp);
    fclose(fp);

    return 0;
}
