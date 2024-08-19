#include <stdio.h>
#include <string.h>

typedef enum {
    ON, OFF
} key;

typedef struct {
    key key;
    char *str;
} key_converter;

key_converter key_conv_arr[] = { { ON, "on" }, { OFF, "off" } };

key str2key(char *str) {
    for (int i = 0; i < sizeof(key_conv_arr) / sizeof(key_conv_arr[0]); i++) {
        if (strcmp(str, key_conv_arr[i].str) == 0) {
            return key_conv_arr[i].key;
        }
    }
    return OFF; // Default value
}

char* key2str(key key) {
    return key_conv_arr[key].str;
}

int main() {
    key my_key = ON;
    // TODO 1: how to convert my_key to string?

    char *my_string = "off";
    // TODO 2: how to convert my_string to enum?

    // Solution 1:
    char *my_key_as_string = key2str(my_key);
    printf("1. Original enum: %d -- string value: %s\n", my_key,
            my_key_as_string);

    // Solution 2:
    key my_string_as_enum = str2key(my_string);
    printf("2. Original string: %s -- enum value: %d\n", my_string,
            my_string_as_enum);

    return 0;
}
