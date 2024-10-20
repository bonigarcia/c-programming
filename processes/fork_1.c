#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) { // error
        fprintf(stderr, "Fork Failed\n");
        exit(EXIT_FAILURE);

    } else if (pid == 0) { // child process
        printf("Hello, I am the child with pid %i\n", getpid());
        _exit(EXIT_SUCCESS);

    } else { // Parent process
        int status;
        pid_t pid_child = wait(&status);

        if (pid_child == -1) {
            perror(strerror(errno));
        } else {
            printf("Child %d completed with status: %d\n", pid_child,
                    WEXITSTATUS(status));
            printf("---- with status: %d\n", status);
        }

        exit(EXIT_SUCCESS);
    }
}
