#include <stdio.h>

int main() {
    char greetings[] = "Hello";
    printf("%s\n", greetings);

    /*
     Since the sizeof a char is 1, we can
     calculate the full size of an string as follows
     */
    size_t size = sizeof(greetings);

    printf("The size of the greetings string is %ld\n", size);

    return 0;
}
