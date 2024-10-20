#include <stdio.h>
#include <stdlib.h>

void bye_1(void) {
    printf("Goodbye, cruel world\n");
}

void bye_2(void) {
    printf("Bye bye\n");
}

int main() {
    atexit(bye_1);
    atexit(bye_2);

    exit(EXIT_SUCCESS);
}
