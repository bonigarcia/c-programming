#include <string.h>
#include <stdio.h>

#define STRING_SIZE 80
#define ARRAY_SIZE 5

typedef struct Person {
    char name[STRING_SIZE];
    int age;
} Person;

int main() {
    Person people[ARRAY_SIZE];
    int i, res;

    // 1. Initialize array with default values
    for (i = 0; i < ARRAY_SIZE; i++) {
        strcpy(people[i].name, "-");
        people[i].age = 0;
    }

    // 2. Prompt user to type people data (name and age)
    for (i = 0; i < ARRAY_SIZE; i++) {
        // Name
        printf("Type the NAME of the person at %d position in the array: ", i);
        if (fgets(people[i].name, STRING_SIZE, stdin) == NULL) {
            puts("You type EOF (Ctrl+D) ... exiting");
            break;
        }
        people[i].name[strlen(people[i].name) - 1] = '\0'; // string termination

        // Age
        printf("Type the AGE of the person at %d position in the array: ", i);
        res = scanf("%d", &people[i].age);
        if (res == EOF) {
            puts("You type EOF (Ctrl+D) ... exiting");
            break;
        }
        while (getchar() != '\n'); // Clear input buffer
    }
    puts(""); // equivalent to: printf("\n");

    // 3. Show people data in the standard output
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("[%d] name: %s\n", i, people[i].name);
        printf("[%d] age: %d\n\n", i, people[i].age);
    }

    return 0;
}
