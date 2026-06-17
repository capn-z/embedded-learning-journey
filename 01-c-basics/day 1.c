#include <stdio.h>

int main() {
    int temperatures[5] = {65, 72, 88, 105, 70};  // 5 sensor readings
    int alarm_triggered = 0;

    for (int i = 0; i < 5; i++) {
        printf("Reading %d: %d°C  ", i + 1, temperatures[i]);

        if (temperatures[i] > 100) {
            printf("→ ALARM!\n");
            alarm_triggered = 1;
            break;   // stop checking, sound the alarm
        } else if (temperatures[i] > 80) {
            printf("→ WARNING\n");
        } else {
            printf("→ OK\n");
        }
    }

    if (alarm_triggered) {
        printf("\nSystem shutdown initiated.\n");
    } else {
        printf("\nAll readings normal.\n");
    }

    return 0;
}