#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
