#include "difference_of_squares.h"
#include <math.h>

unsigned int square_of_sum(unsigned int n) {
    
    unsigned int sum = 0;
    
    for (unsigned int i = n; 0 < i; i--) {
        sum += i;
    }
    
    
    unsigned int squared_sum = pow(sum, 2);
    
    return squared_sum;
}

unsigned int sum_of_squares(unsigned int n) {
    unsigned int sum_squared = (n * (n + 1) * ((2 *n) + 1)) / 6;
    
    return sum_squared;
}

unsigned int difference_of_squares(unsigned int n) {
    unsigned int squared_sum = square_of_sum(n);
    unsigned int sum_square = sum_of_squares(n);
    unsigned int diff = squared_sum - sum_square;
    return diff;
}
