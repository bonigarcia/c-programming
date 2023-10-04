#include <stdio.h>
#include <string.h>

typedef enum key {
    ON, OFF
} key;

struct key_converter {
    enum key key;
    char *str;
};

struct key_converter key_conv_arr[] = { { ON, "ON" }, { OFF, "OFF" } };

key str2key(char *str) {
    for (int i = 0; i < sizeof(key_conv_arr) / sizeof(key_conv_arr[0]); i++) {
        if (!strcmp(str, key_conv_arr[i].str)) {
            return key_conv_arr[i].key;
        }
    }
    return OFF; // Default value
}

char* key2str(key key) {
    return key_conv_arr[key].str;
}

int main() {
    // 1. Convert "ON" to enumerated type
    char *key_str_on = "ON";
    key key_enum_on = str2key(key_str_on);
    printf("1. Original string: %s -- Enumeration value: %d\n", key_str_on,
            key_enum_on);

    // 2. Convert "OFF" to enumerated type
    char *key_str_off = "OFF";
    key key_enum_off = str2key(key_str_off);
    printf("2. Original string: %s -- Enumeration value: %d\n", key_str_off,
            key_enum_off);

    // 3. Convert enumerated types to string
    char *key_str_on_2 = key2str(key_enum_on);
    char *key_str_off_2 = key2str(key_enum_off);
    printf("3. The enumerated types, displayed as strings are: %s and %s\n",
            key_str_on_2, key_str_off_2);

    return 0;
}
