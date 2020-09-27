#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int ch;

    if ((fp = fopen("file_2.txt", "r")) == NULL) {
        printf("Error opening file");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
