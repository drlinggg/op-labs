#include <stdio.h>

int main() {
    char cur_file[256];
    scanf("%s", cur_file);
    int n = 1;
    char line[256];
    FILE* file = fopen(cur_file, "r");
    while (fscanf(file,"%s", line) != EOF) {
        if (n % 2 == 0) {
            printf("%s\n", line);
        }
        n++;
    }
    fclose(file);
    return 0;
}
