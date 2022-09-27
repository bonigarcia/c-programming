#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Arguments error. Usage: %s <name>\n", argv[0]);
        return 1;

    } else {
        printf("Hello %s\n", argv[1]);
    }

    return 0;
}
