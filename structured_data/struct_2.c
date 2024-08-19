#include <stdio.h>

typedef struct {
    int num;
    char letter;
} my_structure;

int main() {
    my_structure s1 = { 10, 'A' };

    printf("My number: %d\n", s1.num);
    printf("My letter: %c\n", s1.letter);

    return 0;
}
