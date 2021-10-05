#include <stdio.h>
#include <string.h>

enum key {
    ON, OFF
};

struct key_converter {
    enum key key;
    char *str;
};

struct key_converter key_conv_arr[] = { { ON, "ON" }, { OFF, "OFF" } };

enum key str2enum(const char *str) {
    for (int i = 0; i < sizeof(key_conv_arr) / sizeof(key_conv_arr[0]); i++) {
        if (!strcmp(str, key_conv_arr[i].str)) {
            return key_conv_arr[i].key;
        }
    }
    return OFF; // Default value
}

int main() {
    char *key_str[] = { "ON", "OFF", "OTHER" };

    for (int i = 0; i < sizeof(key_str) / sizeof(key_str[0]); i++) {
        printf("--> %s %d\n", key_str[i], str2enum(key_str[i]));
    }

    return 0;
}
