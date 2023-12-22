#include <stdio.h>
#include "funcs.h"

int main() {
    Square square = createSq();
    float area = calculateArea(square);
    float per = calculatePer(square);
    printf("%f" "%s", area, " area of square\n");
    printf("%f" "%s", per, " perimeter of square\n");
    return 0;
}