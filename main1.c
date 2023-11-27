#include <stdio.h>
#include "pico/stdlib.h"

#include "display.h"

/**
* @brief Programa principal
*/
int main() {
  // Inicializo USB
  stdio_init_all();
  // Inicializo display
  display_init();
  
  while (true) {

    // Apago ambos digitos
    gpio_put_masked(DIGITS, DIGITS);
    // Escribo el cero en el digito 2
    gpio_put_masked(SEGMENTS, CERO);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el uno en el digito 2
    gpio_put_masked(SEGMENTS, UNO);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el dos en el digito 2
    gpio_put_masked(SEGMENTS, DOS);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el tres en el digito 2
    gpio_put_masked(SEGMENTS, TRES);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el cuatro en el digito 2
    gpio_put_masked(SEGMENTS, CUATRO);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el cinco en el digito 2
    gpio_put_masked(SEGMENTS, CINCO);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el seis en el digito 2
    gpio_put_masked(SEGMENTS, SEIS);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el siete en el digito 2
    gpio_put_masked(SEGMENTS, SIETE);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    // Escribo el ocho en el digito 2
    gpio_put_masked(SEGMENTS, OCHO);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);


    
    // Escribo el nueve en el digito 2
    gpio_put_masked(SEGMENTS, NUEVE);
    // Prendo el digito 2
    gpio_put(DIG_2, false);
    // Espero unos milisegundos
    sleep_ms(1000);
    //se repite la secuencia
  }
}