#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255
#define SIZE 10

struct data {
    char str[MAX_STR];
};

int main(int argc, char *argv[]) {
    FILE *fp = fopen("file1.bin", "rb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }

    printf("The content of the binary file is:\n");
    struct data record;
    int offset_pos = ftell(fp);
    printf("[offset at the beginning is: %d]\n", offset_pos);
    while (fread(&record, sizeof(struct data), 1, fp) != 0) {
        offset_pos = ftell(fp);
        printf("%s [offset is now: %d]\n", record.str, offset_pos);
    }
    printf("[offset at the end is: %d]\n", offset_pos);

    fclose(fp);

    return 0;
}
