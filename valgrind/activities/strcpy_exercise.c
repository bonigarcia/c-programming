#include <stdio.h>
#include <string.h>

#define SIZE 4

void my_strcpy(char *dst, char *src) {
    strcpy(dst, src);
}

int main(int argc, char *argv[]) {
    char str1[SIZE] = "Test";
    char str2[sizeof(str1)];
    my_strcpy(str2, str1);
    printf("The copied string is: %s\n", str2);

    return 0;
}
