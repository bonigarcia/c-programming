#include <string.h>
#include <stdio.h>

int main() {
    FILE *fp = fopen("file1.bin", "rb");
    if (!fp) {
        perror("An error occurred opening the file");
        return 1;
    }

    int i;
    fread(&i, sizeof(i), 1, fp);
    float f;
    fread(&f, sizeof(f), 1, fp);

    printf("The content of the binary file is:\n");
    printf("%d\n", i);
    printf("%f\n", f);

    fclose(fp);

    return 0;
}
