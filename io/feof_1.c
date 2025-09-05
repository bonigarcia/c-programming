#include <stdio.h>
#include <stdlib.h>
#define MAX 255

int main() {
    FILE *fd = fopen("data.txt", "r");
    if (fd == NULL) {
        fduts("Error opening file\n", stderr);
        exit(1);
    }

    char buffer[MAX];
    while (!feof(fd)) {
        fgets(buffer, sizeof(buffer), fd);
        printf("%s", buffer);
    }

    fclose(fd);

    return 0;
}
