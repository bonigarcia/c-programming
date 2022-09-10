#include <stdio.h>

int main() {
    enum days {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
    };

    enum days today = SATURDAY;
    enum days tomorrow = SUNDAY;

    printf("Today is %d\n", today);
    printf("Tomorrow is %d\n", tomorrow);

    if (today == SATURDAY || today == SUNDAY) {
        printf("It's the weekend!\n");
    }

    return 0;
}
