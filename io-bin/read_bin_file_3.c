#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

struct data {
    char str[MAX_STR];
    int integer;
};

int main() {
    FILE *fd = fopen("file3.bin", "rb");
    if (!fd) {
        perror("An error occurred opening the file");
        return 1;
    }

    printf("The content of the binary file is:\n");
    struct data record;
    while (fread(&record, sizeof(struct data), 1, fd) == 1) {
        printf("String: %s -- Integer: %d\n", record.str, record.integer);
    }

    fclose(fd);

    return 0;
}
