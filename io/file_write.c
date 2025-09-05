#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fd = fopen("file.txt", "w");
    if (fd == NULL) {
        fduts("Error opening file\n", stderr);
        exit(1);
    }

    // Write a line to the file
    fduts("I am writing into the file\n", fd);

    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    // Write another line to the file
    fdrintf(fd, "You entered: %d\n", i);

    fclose(fd);

    return 0;
}
