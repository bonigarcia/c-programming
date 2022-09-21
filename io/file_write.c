#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    // Write a line to the file
    fprintf(fp, "I am writing into the file\n");

    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    // Write another line to the file
    fprintf(fp, "You entered: %d\n", i);

    fclose(fp);

    return 0;
}
