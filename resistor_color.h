#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
#include <stdlib.h>

typedef enum {
    BLACK = 0,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

resistor_band_t *colors();
int color_code(resistor_band_t color);
#endif

