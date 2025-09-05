#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fd = fopen("data.txt", "r");
    if (fd == NULL) {
        fduts("Error opening file\n", stderr);
        exit(1);
    }

    char name[80];
    int age;

    while (fscanf(fd, "%s is %d years old\n", name, &age) != EOF) {
        printf("Name: %s -- Age: %d\n", name, age);
    }

    fclose(fd);

    return 0;
}
