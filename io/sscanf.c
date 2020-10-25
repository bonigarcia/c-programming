#include <stdio.h>

#define MAX_STR 80

int main() {
    char input[MAX_STR] = "ESSID:\"Miguel 3\"";
    printf("%s\n", input);

    char output[MAX_STR];
    sscanf(input, "ESSID:%[^\n]", output);
    printf("%s\n", output);

    return 0;
}
