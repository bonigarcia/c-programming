int num; // This is a global variable, stored in the data segment

int main() {
    const int max = 15; // This is a constant variable, stored in the data segment

    static int min = 0; // This is a static variable, stored in the data segment

    return 0;
}
