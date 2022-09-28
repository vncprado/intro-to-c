#include<stdio.h>

#define NAME replace
#define LOWER   0
#define UPPER   300
#define STEP    5

int main() {
    /*int celsius
    //int F, C;
    float F, C;
    int min_value = 0;
    int max_value = 300;

    int step = 20;

    F = min_value;
    */

    int celsius;

    printf("Celsius-Fahrenheit table\n");
    /* for (<initialisation>; <expression>; <expression>) */
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%3.0f %6.1f\n", (float)celsius, (celsius * 9.0 / 5.0) + 32.0);
    }
}
