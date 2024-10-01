#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL; // Pointer to store the buffer
    size_t len = 0;    // Initial size of the buffer
    int read;          // Number of characters read

    printf("Enter a string: ");
    read = getline(&line, &len, stdin);
    printf("You entered %d characters (%ld bytes): %s\n", read, len, line);

    free(line);  // Free buffer (dynamic memory)

    return 0;
}
