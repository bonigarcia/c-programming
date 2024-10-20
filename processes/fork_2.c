#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid < 0) { // error
        fprintf(stderr, "Fork Failed\n");
        return 1;

    } else if (pid == 0) { // child
        execlp("/bin/ls", "ls", NULL);
        fprintf(stderr, "Exec Failed\n");
        return 1;

    } else { // parent
        int status;
        wait(&status);
        printf("Child Complete\n");
    }

    return 0;
}
