#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", (number <= 100) && (number >= 1));
    printf("%c",'\n');
    printf("if number in range 1 to 100 returns 1 else 0");
    printf("%c",'\n');

    int number2;
    scanf("%d", &number2);
    printf("%d", (number2 >> 1) % 2);
    printf("%c",'\n');
    printf("value of second bit of number");

    return 0;
}
