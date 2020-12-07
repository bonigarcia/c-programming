#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fp = fopen("file3.bin", "wb");
    if (!fp) {
        perror("An error occurred opening the file\n");
        return 1;
    }

    int i = 100;
    float f = 20.5;

    fwrite(&i, sizeof(i), 1, fp);
    fwrite(&f, sizeof(f), 1, fp);

    fclose(fp);

    return 0;
}

