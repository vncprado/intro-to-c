#include<stdio.h>

int main() {
    //int F, C;
    float F, C;
    int min_value = 0;
    int max_value = 300;

    int step = 20;

    F = min_value;

    while (F <= max_value) {
        C = (5.0/9.0)*(F-32.0);
        printf("F = %8.3f, C = %8.3f\n", F, C);
        F = F + step;
    }
}
