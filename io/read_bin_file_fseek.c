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

    printf("The content of the binary file (showing only odd values) is:\n");
    struct data record;
    while (fread(&record, sizeof(struct data), 1, fp) != 0) {
        puts(record.str);
        fseek(fp, sizeof(struct data), SEEK_CUR);
    }

    fclose(fp);

    return 0;
}
