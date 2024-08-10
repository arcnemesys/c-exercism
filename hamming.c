#include "hamming.h"
#include <string.h>
int compute(const char *lhs, const char *rhs) {
    int count = 0;
    size_t rhsl = strlen(rhs) + 1;
    size_t lhsl = strlen(lhs) + 1;
    if (!(rhsl > 0 ) || !(lhsl > 0)) { return -1; }
    else if (rhsl > lhsl || rhsl < lhsl) { return -1; }
    else {
        char rhs_array[rhsl], lhs_array[lhsl];
        strcpy(lhs_array, lhs);
        strcpy(rhs_array, rhs);
        for (size_t i = 0; i < rhsl; i++) {
            if (rhs_array[i] == lhs_array[i]) { continue; }
            else { count += 1; }
        }
        return count;
    }
    return -1;
}


