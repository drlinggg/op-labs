#include <stdio.h>
#include <stdlib.h>

int main() {
    //1
    int arr [7] = {23,5678,2,564,365,77,443};
    for (int i = 0; i < 7; ++i) {
        printf("%d ", arr[i]);
    }
    // 2
    int first [2][2];
    int second [2][2];
    first[0][0] = 1;
    first[0][1] = 0;
    first[1][0] = 1;
    first[1][1] = 4;
    second[0][0] = 1;
    second[0][1] = 2;
    second[1][0] = 0;
    second[1][1] = 1;
    int res[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int summ = 0;
            for (int k = 0; k < 2; ++k) {
                summ += first[i][k] * second[k][j];
            }
            res[i][j] = summ;
        }
    }
    printf("\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
