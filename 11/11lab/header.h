#ifndef header
#define header

typedef struct {
    float x1, y1; //left bottom
    float x2, y2; //right top
} Square;

Square createSq() {
    Square square;
    scanf("%f" "%f", &square.x1, &square.y1);
    scanf("%f" "%f", &square.x2, &square.y2);
    return square;
}

float calculateArea(Square square);

float calculatePer(Square square);

#endif


