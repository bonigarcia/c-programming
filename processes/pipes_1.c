#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 100

int main() {
    // Create the pipe
    int fd[2];
    if (pipe(fd) < 0) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Fork process
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) { // Child process
        // Close the write end of the pipe
        close(fd[1]);

        // Read the message from the pipe
        // blocking operation: wait until there is data to be read or until the pipe is closed
        char read_msg[BUFFER_SIZE];
        read(fd[0], read_msg, BUFFER_SIZE);
        printf("Child process received message: %s\n", read_msg);

        // Close the read end of the pipe
        close(fd[0]);

        _exit(EXIT_SUCCESS);

    } else { // Parent process
        // Close the read end of the pipe
        close(fd[0]);

        // Write the message to the pipe
        char *write_msg = "Hello from the parent!";
        write(fd[1], write_msg, strlen(write_msg) + 1);

        // Close the write end of the pipe
        close(fd[1]);

        // Wait for child process to finish
        wait(NULL);
    }

    return EXIT_SUCCESS;
}
