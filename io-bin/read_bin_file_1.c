#include <string.h>
#include <stdio.h>

int main() {
    FILE *fd = fopen("file1.bin", "rb");
    if (!fd) {
        perror("An error occurred opening the file");
        return 1;
    }

    int i;
    fread(&i, sizeof(i), 1, fd);
    float f;
    fread(&f, sizeof(f), 1, fd);

    printf("The content of the binary file is:\n");
    printf("%d\n", i);
    printf("%f\n", f);

    fclose(fd);

    return 0;
}
