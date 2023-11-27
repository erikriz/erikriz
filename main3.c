#include <stdio.h>
#include "pico/stdlib.h"
#include "display.h"

int main() {
    stdio_init_all();
    display_init();
    
    int minutes_1 = 0;
    int minutes_2 = 0;

    while (true) {
        gpio_put_masked(DIGITS, DIGITS);
        gpio_put_masked(SEGMENTS, minutes_1);
        gpio_put(DIG_1, false);
        sleep_ms(1000);

        gpio_put_masked(DIGITS, DIGITS);
        gpio_put_masked(SEGMENTS, minutes_2);
        gpio_put(DIG_2, false);
        sleep_ms(1000);

        minutes_1 = (minutes_1 + 1) % 10;
        if (minutes_1 == 0) {
            minutes_2 = (minutes_2 + 1) % 6;  // Count from 0 to 59 for the second digit
        }
    }
}
