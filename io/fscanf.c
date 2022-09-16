#include <stdio.h>

int main() {
    FILE *fp;
    char name[80];
    int age;

    fp = fopen("data.txt", "r");

    while (fscanf(fp, "%s is %d years old\n", name, &age) != EOF) {
        printf("Name: %s -- Age: %d\n", name, age);
    }

    fclose(fp);

    return 0;
}
