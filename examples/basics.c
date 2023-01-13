/* 
    Program with basic C examples
*/

#include <stdio.h>

int main() {
    int number = 5;

    if (number > 10)
        printf("Larger than 10\n");
    else
        printf("Smaller than 10\n");
    
    while (number < 10) {
        printf("Still smaller\n");
        number++;
    }
    printf("Not anymore: %d\n", number);

    for (int i=0; i<10; i++) {
        printf("Now i=%d\n", i);
    }
    return 0;
}