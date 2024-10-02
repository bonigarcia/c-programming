#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        fputs("Error opening file\n", stderr);
        exit(EXIT_FAILURE);
    }

    char buffer[MAX];
    while (fgets(buffer, MAX, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return EXIT_SUCCESS;
}
