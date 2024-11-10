#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    // Open a file for writing
    char *filename = "output.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("open");
        exit(EXIT_FAILURE);
    }
    int file_fd = fileno(file);

    // Redirect stdout to the file
    if (dup2(file_fd, STDOUT_FILENO) < 0) {
        perror("dup2");
        close(file_fd);
        exit(EXIT_FAILURE);
    }

    // Close the original file descriptor as it's no longer needed
    close(file_fd);

    // Write to stdout (which is now redirected to the file)
    printf("This will be written to the file '%s'\n", filename);

    return 0;
}
