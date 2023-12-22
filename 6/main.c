#include <stdio.h>
#include <malloc.h>


int main() {
    double* arr = (double*)malloc(sizeof(double) * 4);

    for (int i = 0; i < 4; ++i) {
        scanf("%lf", &arr[i]);
    }

    for (int i = 0; i < 4; ++i) {
        printf("%lf ", arr[i]);
    }

    return 0;
}
