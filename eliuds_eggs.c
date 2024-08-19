#include "eliuds_eggs.h"
#include <stdio.h>
#include <stdlib.h>

const unsigned int egg_count(unsigned int count);

const unsigned int egg_:count(unsigned int count) {
  unsigned int bin = 0, rem = 0, tmp_count = 0;

  while (count >= 1) {
    :tmp_count = count / 2;
    rem = count - tmp_count *2;
    count = tmp_count;
    if (rem == 0) {
      continue;
    } else if (rem == 1) {
      bin += rem;
    }
  }

  return bin;
}
// So we're given a number, which has a binary representation,
// that we're tasked with deriving from the decimal.
// Once we do that, we want to count the number of on 
// bits in the binary representation, and return that number
// which represents the number of eggs.


