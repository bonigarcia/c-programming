#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n\n", CHAR_MAX);

    printf("The minimum value of UNSIGNED CHAR = 0\n");
    printf("The maximum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);

    printf("The minimum value of SHORT = %hd\n", SHRT_MIN);
    printf("The maximum value of SHORT = %hd\n\n", SHRT_MAX);

    printf("The minimum value of UNSIGNED SHORT = 0\n");
    printf("The maximum value of UNSIGNED SHORT = %hu\n\n", USHRT_MAX);

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n\n", INT_MAX);

    printf("The minimum value of UNSIGNED INT = 0\n");
    printf("The maximum value of UNSIGNED INT = %u\n\n", UINT_MAX);

    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n\n", LONG_MAX);

    printf("The minimum value of UNSIGNED LONG = 0\n");
    printf("The maximum value of UNSIGNED LONG = %lu\n\n", ULONG_MAX);

    printf("The minimum value of FLOAT = %e\n", FLT_MIN);
    printf("The maximum value of FLOAT = %e\n\n", FLT_MAX);

    printf("The minimum value of DOUBLE = %e\n", DBL_MIN);
    printf("The maximum value of DOUBLE = %e\n\n", DBL_MAX);

    return 0;
}
