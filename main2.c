#include <stdio.h>
#include "pico/stdlib.h"

#include "display.h"
bool repeating_timer_callback(struct repeating_timer *t) {
  int val1=0;
    for(val1;val1<=9;val1++){
      switch (val1){
        case 0:
    gpio_put_masked(SEGMENTS, CERO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 1:
    gpio_put_masked(SEGMENTS, UNO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 2:
    gpio_put_masked(SEGMENTS, DOS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 3:
    gpio_put_masked(SEGMENTS, TRES);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 4:
    gpio_put_masked(SEGMENTS, CUATRO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 5:
    gpio_put_masked(SEGMENTS, CINCO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 6:
    gpio_put_masked(SEGMENTS, SEIS);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 7:
    gpio_put_masked(SEGMENTS, SIETE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 8:
    gpio_put_masked(SEGMENTS, OCHO);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
        break;
        case 9:
    gpio_put_masked(SEGMENTS, NUEVE);
    gpio_put(DIG_2, false);
    sleep_ms(1000);
    
        break;
      }
    }
    
    return true;
}

/**
* @brief Programa principal
*/
int main() {
  // Inicializo USB
  stdio_init_all();
  // Inicializo display
  display_init();
  gpio_put_masked(DIGITS, DIGITS);
  struct repeating_timer timer;
  // Apago ambos digitos
   add_repeating_timer_ms(0, repeating_timer_callback, NULL, &timer);
  while (true) {
  }
}