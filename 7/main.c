#include <stdio.h>
#include <stdlib.h>

//1
enum Months
{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
}Month;

//2
struct Square {
    int x1;
    int y1;
    int x2;
    int y2;
};

double area(struct Square l) {
    return abs(l.x1-l.x2) * abs(l.x1-l.x2);
}

//3
union HexToBits {
    unsigned long long hexValue;
    struct {
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
        unsigned int bit4 : 1;
    } bits;
};

int main() {

    //1
    Month = July;
    printf("%s", "number of the month is: ");
    printf("%d", Month + 1);
    printf("%c", '\n');

    //2
    struct Square little_square;
    //left bottom
    little_square.x1 = 0;
    little_square.y1 = 0;
    //right top
    little_square.x2 = 1;
    little_square.y2 = 1;
    printf("Area of square is ");
    printf("%lf", area(little_square));

    //3
    union HexToBits laser_printer;
    scanf("%x", &laser_printer.hexValue);
    printf("%s", laser_printer.bits.bit1 ? "Not ready \n" : "Ready \n");
    printf("%s", laser_printer.bits.bit2 ? "Malo tonera \n" : "Toner: ok \n");
    printf("%s", laser_printer.bits.bit3 ? "Damaged baraban \n" : "Baraban: ok \n");
    printf("%s", laser_printer.bits.bit4 ? "No paper \n" : "Paper: ok \n");
    return 0;
}
