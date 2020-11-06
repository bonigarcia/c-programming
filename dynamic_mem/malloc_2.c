#include <stdlib.h>

#define TABLE_SIZE 10

struct cell_info {
    int a;
    int b;
    int table[TABLE_SIZE];
};

int main() {
    // General rule to call the function malloc:
    // T *ptr = (T*) malloc(sizeof(T));

    struct cell_info *cell_ptr = (struct cell_info*) malloc(
            sizeof(struct cell_info));

    cell_ptr->a = 10;
    cell_ptr->b = 20;
    cell_ptr->table[5] = 0;

    free(cell_ptr);
}

