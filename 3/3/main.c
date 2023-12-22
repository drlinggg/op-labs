#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    printf("this is number in base 8 \n");
    printf("%o", number);
    printf("\nthis is number in base 16 with 2 shift left \n");
    printf("%x\n", number << 2);
    int number2;
    scanf("%x", &number2);
    printf("%x\n", number | number2);
    return 0;
}
