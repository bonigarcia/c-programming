#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fd = fd = fopen("file.txt", "r");

    if (fd == NULL) {
        fputs("Error opening file\n", stderr);
        exit(1);
    }

    int ch;
    while ((ch = fgetc(fd)) != EOF) {
        putchar(ch);
    }

    fclose(fd);

    return 0;
}
