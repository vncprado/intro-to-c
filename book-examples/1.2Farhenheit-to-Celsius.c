/* 
    Program that converts a range of values in Farhenheit to Celcius
*/

#include <stdio.h>

int main() {

    //int F, C;
    float F, C;
    int min_value = 0;
    int max_value = 300;
    int step = 20;

    F = min_value;
    while (F <= max_value) {
        C = (5.0/9.0)*(F-32.0);
        //printf("%d\t%d\n", F, C);
        printf("%8.2f\t%8.2f\n", F, C);
        F = F + step;
    }

}
