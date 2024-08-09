#include "collatz_conjecture.h"
#include <stdbool.h>
int steps(int n);

int steps(int n) {
    int count = 0;
    if (n == 0 || n < 0) {
        return ERROR_VALUE;
    }
    while (n > 1) {
    
        if (n % 2 == 0) {
            n = n / 2;
            count += 1;
        } else  {
            n = n * 3 + 1;
            count += 1;
        }
    }

    return count;
}