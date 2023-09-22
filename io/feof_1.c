#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    char buffer[MAX];
    while (!feof(fp)) {
        fgets(buffer, sizeof(buffer), fp);
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
