#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.txt", "w");
    if (fp == NULL) {
        fputs("Error opening file\n", stderr);
        exit(1);
    }

    // Write a line to the file
    fputs("I am writing into the file\n", fp);

    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    // Write another line to the file
    fprintf(fp, "You entered: %d\n", i);

    fclose(fp);

    return 0;
}
