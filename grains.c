#include "grains.h"
#include <math.h>
uint64_t square(uint8_t a);
uint64_t total(void);
uint64_t square(uint8_t a) {
    if (a == 1) { 
        return 1; 
    } else if (a == 2) {
        return 2;
    }
    if (a > 64 || a == 0) { return 0; }

    return pow(2, (a - 1));
}

uint64_t total(void) {
    uint64_t grains = 0;
    for (uint64_t i = 1; i <= 64; i++) {
        grains += square(i);
        if (i == 64) {
            return grains;
        }
    }

    return grains;
    
}
