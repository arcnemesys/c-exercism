#include "binary.h"
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int convert(const char* input){

    int len = strlen(input) + 1;
    char bin_str[len];
    strcpy(bin_str, input);
    int idx = 1;
    int sum = 0;
    for (int i = len - 1; i > 0; --i) {
        int bin_digit = bin_str[idx - 1] - '0';
        if (bin_digit > 1 || bin_digit <0) { return INVALID; }
        int pwr = pow(2, len - idx);
        sum += pwr * bin_digit;
        idx++;
    }
    return sum / 2;
}
