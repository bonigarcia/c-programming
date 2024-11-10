#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

// Signal handler function
void handle_signal(int signal) {
    if (signal == SIGINT) {
        printf("Caught SIGINT (Ctrl+C). Exiting...\n");
        exit(0);
    }
}

int main() {
    // Register the signal handler for SIGINT
    if (signal(SIGINT, handle_signal) == SIG_ERR) {
        printf("Error: Unable to catch SIGINT\n");
        return 1;
    }

    // Infinite loop to keep the program running
    while (1) {
        printf("Running... Press Ctrl+C to exit.\n");
        sleep(1);
    }

    return 0;
}
