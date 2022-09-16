#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    int buf_size = 255;
    char buffer[buf_size];
    while (fgets(buffer, buf_size, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
