#include <stdio.h>
#include <string.h>

#define SIZE 80

int main() {
    char str1[SIZE] = "Test";
    char str2[SIZE];
    strcpy(str2, str1);

    printf("The copied string is: %s\n", str2);

    return 0;
}
