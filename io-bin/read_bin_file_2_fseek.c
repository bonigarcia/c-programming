#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 255

int main() {
    FILE *fp = fopen("file2.bin", "rb");
    if (!fp) {
        perror("An error occurred opening the file");
        return 1;
    }

    printf("The content of the binary file (showing only odd values) is:\n");
    char record[MAX_STR];
    while (fread(&record, sizeof(record), 1, fp) == 1) {
        puts(record);
        fseek(fp, sizeof(record), SEEK_CUR);
    }

    fclose(fp);

    return 0;
}
