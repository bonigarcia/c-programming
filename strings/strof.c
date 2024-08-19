#include <stdio.h>
#include <stdlib.h>

int main() {
    char szOrbits[] = "686.97 365.24";
    char *pEnd;
    float f1, f2;

    f1 = strtof(szOrbits, &pEnd);
    f2 = strtof(pEnd, NULL);

    printf("f1=%.2f f2=%.2f\n", f1, f2);

    return 0;
}
