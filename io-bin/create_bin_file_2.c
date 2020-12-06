#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255
#define SIZE 10

struct data {
    char str[MAX_STR];
    int integer;
};

int main(int argc, char *argv[]) {
    struct data *content = (struct data*) calloc(SIZE, sizeof(struct data));

    for (int i = 0; i < SIZE; i++) {
        sprintf(content[i].str, "This is line %d", i + 1);
        content[i].integer = i + i;
    }

    FILE *fp = fopen("file2.bin", "wb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }
    fwrite(content, sizeof(struct data), SIZE, fp);
    fclose(fp);

    free(content);

    return 0;
}
