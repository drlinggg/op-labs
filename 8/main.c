#include <stdio.h>
#include <string.h>

int main() {
    //2
    char str1[] = "I LOVE ";
    char str2[] = "ITMOFKSDDALCDALSVDLDA!";
    int n = 4;
    strncat(str1, str2, n); // Конкатенация строк
    printf("2: %s", str1); // Вывод результата
    printf("%c", '\n');
    //4
    char str3[] = "Hello, ITMO!";
    char str4[] = "Hello, World!";
    n = 7;
    if (strncmp(str3,str4,n) == 0) {
        printf("%s", "4: First n chars in strings are the same\n");
    }
    //6
    char str5[] = "000DEF";
    char str6[] = "ABC000";
    printf("%s", "6: before: ");
    printf("%s", str5);
    n = 3;
    for (int i = 0; i < n; i++) {
        str5[i] = str6[i];
    }
    printf("%s", " After: ");
    printf("%s", str5);
    printf("%c", '\n');
    //8
    char str7[] = "find me X if u can";
    char mark = 'X';
    for (int i = 0; i < sizeof str7; i++) {
        if (str7[i] == mark) {
            printf("%s", "8: First index of this char in this string is ");
            printf("%d", i);
            printf("%c", '\n');
            break;
        }
        else if (i == sizeof str7 - 1) {
            printf("%s", "8: No such char in this string\n");
        }
    }
    //10
    char str8[] = "this string is basically useless";
    char str9[] = "Thank you, God, for giving me my life";
    printf("%s", "10: ");
    for (int i = 0; i < sizeof str8; i++) {
        for (int j = 0; j < sizeof str9; j++) {
            if (str8[i] == str9[j] && str8[i] != ' ') {
                printf("%c", str9[j]);
                break;
            }
        }
    }

    return 0;
}