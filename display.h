#ifndef _DISPLAY_H_
#define _DISPLAY_H_

// GPIOs para segmentos
#define A   0
#define B   1
#define C   2
#define D   3
#define E   4
#define F   5
#define G   6

// GPIOs para cada digito
#define DIG_1   16
#define DIG_2   17

// Macros para hacer mas facil la inicializacion

// Hace referencia a todos los GPIO
#define SEGMENTS  ((1 << A) | (1 << B) | (1 << C) | (1 << D) | \
                  (1 << E) | (1 << F) | (1 << G))

// Hace referencia a los GPIO que controlan los digitos
#define DIGITS    ((1 << DIG_1) | (1 << DIG_2))

// Hace referencia a todos los GPIO que usamos
#define ALL_GPIO  (SEGMENTS | DIGITS)

// Valores que se escriben en cada segmento

#define CERO    ((1 << A) | (1 << B) | (1 << C) | (1 << D) | (1 << E) | (1 << F) | (0 << G))
#define UNO     ((0 << A) | (1 << B) | (1 << C) | (0 << D) | (0 << E) | (0 << F) | (0 << G))
#define DOS     ((1 << A) | (1 << B) | (0 << C) | (1 << D) | (1 << E) | (0 << F) | (1 << G))
#define TRES    ((1 << A) | (1 << B) | (1 << C) | (1 << D) | (0 << E) | (0 << F) | (1 << G))
#define CUATRO  ((0 << A) | (1 << B) | (1 << C) | (0 << D) | (0 << E) | (1 << F) | (1 << G))
#define CINCO   ((1 << A) | (0 << B) | (1 << C) | (1 << D) | (0 << E) | (1 << F) | (1 << G))
#define SEIS    ((1 << A) | (0 << B) | (1 << C) | (1 << D) | (1 << E) | (1 << F) | (1 << G))
#define SIETE   ((1 << A) | (1 << B) | (1 << C) | (0 << D) | (0 << E) | (0 << F) | (0 << G))
#define OCHO    ((1 << A) | (1 << B) | (1 << C) | (1 << D) | (1 << E) | (1 << F) | (1 << G))
#define NUEVE   ((1 << A) | (1 << B) | (1 << C) | (1 << D) | (0 << E) | (1 << F) | (1 << G)) 

/**
* @brief Inicializa los GPIO que estan conectados al display 
*/
static inline void display_init(void) {
  // Inicializo todos los GPIO
  gpio_init_mask(ALL_GPIO);
  // Los pongo como salida
  gpio_set_dir_out_masked(ALL_GPIO);
}

#endif