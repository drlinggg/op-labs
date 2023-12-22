#include <stdio.h>

int main() {
    //2
    int count_of_minutes;
    int abonent_rate;
    int out_of_rate_price;
    scanf("%d", &count_of_minutes);
    scanf("%d", &abonent_rate);
    scanf("%d", &out_of_rate_price);
    printf("%s", "2: ");
    if (abonent_rate/500 >= out_of_rate_price) {
        printf("%s", "Incorrect");
        return 0;
    }
    else if (count_of_minutes <= 499) {
        printf("%d", abonent_rate);
    }
    else {
        printf("%d", out_of_rate_price * (count_of_minutes-499) + abonent_rate);
    }
    printf("%c",'\n');
    //4
    int number;
    scanf("%d", &number);
    printf("%s", "3: ");
    if (number == 0) {
        printf("%s", "Zero");
    }
    else if (number == 1) {
        printf("%s", "One");
    }
    else if (number == 2) {
        printf("%s", "Two");
    }
    else if (number == 3) {
        printf("%s", "Three");
    }
    else if (number == 4) {
        printf("%s", "Four");
    }
    else if (number == 5) {
        printf("%s", "Five");
    }
    else if (number == 6) {
        printf("%s", "Six");
    }
    else if (number == 7) {
        printf("%s", "Seven");
    }
    else if (number == 8) {
        printf("%s", "Eight");
    }
    else if (number == 9) {
        printf("%s", "Nine");
    }
    return 0;
}
