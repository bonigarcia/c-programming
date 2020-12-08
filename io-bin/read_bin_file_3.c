#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

struct data {
    char str[MAX_STR];
    int integer;
};

int main() {
    FILE *fp = fopen("file3.bin", "rb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }

    printf("The content of the binary file is:\n");
    struct data record;
    while (fread(&record, sizeof(struct data), 1, fp) != 0) {
        printf("String: %s -- Integer: %d\n", record.str, record.integer);
    }

    fclose(fp);

    return 0;
}
