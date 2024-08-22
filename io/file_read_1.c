#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main() {
    FILE *fp = fopen("file.txt", "r");
    if (fp == NULL) {
        fputs("Error opening file", stderr);
        exit(1);
    }

    char buffer[MAX];
    while (fgets(buffer, MAX, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
