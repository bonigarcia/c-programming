#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

int main() {
    FILE *fp = fopen("file2.bin", "rb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }

    printf("The content of the binary file is:\n");
    char record[MAX_STR];
    int offset_pos = ftell(fp);
    printf("[offset at the beginning is: %d]\n", offset_pos);
    while (fread(&record, sizeof(record), 1, fp) != 0) {
        offset_pos = ftell(fp);
        printf("%s [offset is now: %d]\n", record, offset_pos);
    }
    printf("[offset at the end is: %d]\n", offset_pos);

    fclose(fp);

    return 0;
}
