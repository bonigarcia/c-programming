#include <stdio.h>

#define MAX_STR 80

struct data_1 {
    int integer;
    char str[MAX_STR];
};

union data_2 {
    int integer;
    char str[MAX_STR];
};

int main() {
    struct data_1 d1;
    union data_2 d2;

    printf("The size of data_1 is %ld\n", sizeof(d1));
    printf("The size of data_2 is %ld\n", sizeof(d2));

    return 0;
}
