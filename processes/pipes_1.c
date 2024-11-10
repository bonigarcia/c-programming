#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 100

int main() {
    int pipefds[2];
    pid_t pid;
    char write_msg[] = "Hello from parent process!";
    char read_msg[BUFFER_SIZE];

    // Create the pipe
    if (pipe(pipefds) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // Create a child process
    pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) { // Child process
        // Close the write end of the pipe
        close(pipefds[1]);

        // Read the message from the pipe
        read(pipefds[0], read_msg, BUFFER_SIZE);
        printf("Child process received message: %s\n", read_msg);

        // Close the read end of the pipe
        close(pipefds[0]);
    } else { // Parent process
        // Close the read end of the pipe
        close(pipefds[0]);

        // Write the message to the pipe
        write(pipefds[1], write_msg, strlen(write_msg) + 1);

        // Close the write end of the pipe
        close(pipefds[1]);

        // Wait for child process to finish
        wait(NULL);
    }

    return 0;
}
