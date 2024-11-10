#include <stdio.h>
#include <stdlib.h>

int main() {
    // Execute a command
    int status = system("ls -l");

    // Check for errors
    if (status == -1) {
        perror("system");
        return 1;

    } else {
        // Optionally check the return status of the command
        if (WIFEXITED(status)) {
            printf("Command exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("Command did not exit successfully\n");
        }
    }

    return 0;
}
