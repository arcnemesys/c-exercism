#include "darts.h"
#include <math.h>
#include <tgmath.h>
#include <stdint.h>
#include <stdio.h>
uint8_t score(coordinate_t pos);
uint8_t score(coordinate_t pos) {
  
  float hyp = hypot(pos[0], pos[1]);
  if (hyp > 10) {
    return 0;
  } else if (hyp <= 10 && hyp > 5) {
    return 1;
  } else if (hyp <= 10 && hyp >= 5) {
    return 5;
  } else if (hyp < 5) {
    return 10;
  }

  return 0;
}
