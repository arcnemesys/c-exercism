#include "perfect_numbers.h"
#include <math.h>
#include <stdio.h>

int classify_number(int num);

int classify_number(int num) {
  int alq = 0;

  for (int i = num / 2; i >= 1; i--) {
    if (num % i == 0) {
      alq += 1;
    }
  }

  if (alq == num) {
    return PERFECT_NUMBER;
  } else if (alq > num) {
    return ABUNDANT_NUMBER;
  } else {
    return DEFICIENT_NUMBER;
  }

  return ERROR;
}
