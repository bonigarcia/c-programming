#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Define a macro for logging
#define LOG_INFO(msg) log_message("INFO", __FILE__, __LINE__, msg)
#define LOG_ERROR(msg) log_message("ERROR", __FILE__, __LINE__, msg)
#define LOG_DEBUG(msg) log_message("DEBUG", __FILE__, __LINE__, msg)

void log_message(const char *level, const char *file, int line, const char *msg) {
    // Get the current time
    time_t now;
    time(&now);
    char *time_str = ctime(&now);

    // Remove the newline character from the time string
    time_str[strlen(time_str) - 1] = '\0';

    // Log the message
    printf("[%s] [%s] [%s:%d] %s\n", time_str, level, file, line, msg);
}

int divide(int a, int b) {
    if (b == 0) {
        LOG_ERROR("Division by zero error");
        return 0; // Return zero to indicate an error
    }
    return a / b;
}

int main() {
    LOG_INFO("Program started");

    int x = 10;
    int y = 0;

    LOG_DEBUG("Attempting to divide x by y");

    int result = divide(x, y);

    if (result != 0) {
        LOG_INFO("Division successful");
        printf("Result: %d\n", result);
    } else {
        LOG_ERROR("Failed to divide");
    }

    LOG_INFO("Program ended");

    return 0;
}
