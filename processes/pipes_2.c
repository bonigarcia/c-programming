#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * cat /etc/passwd | awk -F: '{print $1" "$2}'
 */
int main() {
    // 1. Create a pipe
    int fd[2];
    if (pipe(fd) < 0) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    // 2. Fork the process
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {  // 3. Child process
        // Close the read end of the pipe
        close(fd[0]);

        // Redirect stdout to the write end of the pipe
        dup2(fd[1], STDOUT_FILENO);

        // Close the write end of the pipe (it's duplicated to stdout now)
        close(fd[1]);

        // Execute "cat /etc/passwd"
        execl("/bin/cat", "cat", "/etc/passwd", NULL);

    } else {  // Parent process
        // Close the write end of the pipe
        close(fd[1]);

        // Redirect stdin to the read end of the pipe
        dup2(fd[0], STDIN_FILENO);

        // Close the read end of the pipe (it's duplicated to stdin now)
        close(fd[0]);

        // Execute "awk -F: '{print $1" "$2}'"
        execl("/usr/bin/awk", "awk", "-F:", "{print $1\" \"$2}", NULL);
    }

}
