#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("This program was called with \"%s\"\n", argv[0]);

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            printf("argv[%d] = %s\n", i, argv[i]);
        }
    } else {
        puts("The command had no other arguments");
    }

    return 0;
}
