#include <stdlib.h>

#define SIZE 5

struct element {
    float number1;
    int number2;
    char letter;
};

int main() {
    struct element *table;

    // Remember:
    // table == &table[0]

    table = (struct element*) malloc(sizeof(struct element) * SIZE);
    for (int i = 0; i < SIZE; i++) {
        table[i].number1 = 0.0;
        table[i].number2 = 10;
        table[i].letter = 'B';
    }
}

