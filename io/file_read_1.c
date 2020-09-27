#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int bufSize = 255;
    char buffer[bufSize];

    if ((fp = fopen("file.txt", "r")) == NULL) {
        printf("Error opening file");
        exit(1);
    }

    while (fgets(buffer, bufSize, fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);

    return 0;
}
