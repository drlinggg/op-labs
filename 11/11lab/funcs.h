#include <math.h>
#include "header.h"

float calculateArea(Square square) {
    //a^2
    return pow(abs(square.x1 - square.x2),2);
}

float calculatePer(Square square) {
    //4a
    return abs(square.x1-square.x2) * 4;
}

