#include <stdlib.h>
#include <string.h>

int main() {
    char **words;

    // Allocate memory for 100 words
    words = (char**) malloc(100 * sizeof(char*));

    // Allocate memory (80 characters) for the first word
    words[0] = (char*) malloc(80 * sizeof(char));

    // Set "Hello world" to the first word
    strcpy(words[0], "Hello world");

    // Release all the used memory
    free(words[0]);
    free(words);

    return 0;
}
