int num; // This is a global variable, stored in the BSS data segment

int main() {
    const int max = 15; // This is a constant variable, stored in the read-only data segment

    static int min = 0; // This is a static variable, stored in the initialized data segment

    char *msg = "Hello world"; // This is a string literal, stored in the read-only data segment


    printf("%s\n", msg);

    msg[1] = 'A';

    printf("%s\n", msg);

    return 0;
}
