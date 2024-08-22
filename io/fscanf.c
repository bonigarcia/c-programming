#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        fputs("Error opening file", stderr);
        exit(1);
    }

    char name[80];
    int age;

    while (fscanf(fp, "%s is %d years old\n", name, &age) != EOF) {
        printf("Name: %s -- Age: %d\n", name, age);
    }

    fclose(fp);

    return 0;
}
