#include <stdio.h>

struct my_struct {
    int num;
    char letter;
};

int main() {
    struct my_struct s1;

    s1.num = 10;
    s1.letter = 'A';

    printf("My number: %d\n", s1.num);
    printf("My letter: %c\n", s1.letter);

    return 0;
}
