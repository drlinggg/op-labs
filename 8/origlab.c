
#include <stdio.h>
#include <string.h>

int main() {
    //2
    char str1[15];
    char str2[15];
    int n = 4;
    fgets(str1, 15, stdin);
    fgets(str2, 15, stdin);
    strncat(str1, str2, n);
    printf("2: %s", str1);
    printf("%c", '\n');
    //4
    char str3[15];
    char str4[15];
    fgets(str3, 15, stdin);
    fgets(str4, 15, stdin);
    n = 7;
    if (strncmp(str3,str4,n) == 0) {
        printf("%s", "4: First n chars in strings are the same\n");
    }
    else {
        printf("%s", "Found difference\n");
    }
    //6
    char str5[15];
    char str6[15];
    fgets(str5, 15, stdin);
    fgets(str6, 15, stdin);
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
    char str7[15];
    fgets(str7, 15, stdin);
    char mark;
    scanf("%c", mark);
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
    char str8[15];
    char str9[15];
    fgets(str8, 15, stdin);
    fgets(str9, 15, stdin);
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