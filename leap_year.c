#include "leap.h"
bool leap_year(int a);
bool leap_year(int a) {

    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                return 1;
            } else { return 0;}
        } else { return 1;}
    } 
    else { return 0; }

    return 0;

}
