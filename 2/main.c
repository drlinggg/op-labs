#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //lab2var2
    double z1,z2,a;
    double PI = 3.141592654;

    scanf("%lf", &a);
    a = (a * PI) / 180;
    z1 = cos(a) + sin(a) + cos(3*a) + sin(3*a);
    printf("%lf", z1);
    printf(" ");

    z2 = 2 * sqrt(2) * cos(a) * sin((2 * a) + (45*PI/180));
    printf("%lf", z2);

    return 0;
}
