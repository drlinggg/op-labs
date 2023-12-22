#include <stdio.h>
#include <math.h>

//2
struct Node {
    int x;
    int y;
};

void find_distance(int n, struct Node arr[], float distance_points[n][n-1]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            distance_points[i][j] = sqrt(pow(arr[i].x - arr[j].x, 2) + pow(arr[i].y - arr[j].y, 2));
        }
        for (int j = i+1; j < n; j++) {
            distance_points[i][j-1] = sqrt(pow(arr[i].x - arr[j].x, 2) + pow(arr[i].y - arr[j].y, 2));
        }
    }
}

//3
void make_mass(int n, int* mas) {
    int new_count = 0;
    //add to mass last digit of number and cut it
    while (n > 0) {
        mas[new_count] = n % 10;
        new_count++;
        n = n / 10;
    }
}

int main() {
    //2

    int n, x, y;
    scanf("%d", &n);
    //save (x,y) of each point
    struct Node points[n];
    for (int i = 0; i < n; i++) {
        struct Node a;
        scanf("%d", &x);
        scanf("%d", &y);
        a.x = x;
        a.y = y;
        points[i] = a;
    }
    float distance_points[n][n-1];
    //find distance
    find_distance(n,points, distance_points);

    //3
    scanf("%d", &n);
    int count = 0, n_copy = n;
    //count len arr
    while (n_copy != 0) {
        n_copy = n_copy / 10;
        count++;
    }
    int mas[count];
    //use function to fill arr
    make_mass(n, mas);
    //output
    for (int i = 0; i < count; i++) {
        printf("%d ", mas[i]);
    }
    return 0;
}