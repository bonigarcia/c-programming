#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    FILE *fp;

    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }

    fprintf(fp, "Open file for writing\n");

    printf("Enter integer: ");
    scanf("%d", &i);

    fprintf(fp, "You entered: %d\n", i);
    fclose(fp);

    return 0;
}
