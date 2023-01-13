/* 
    Program with basic input in C
*/

#include <stdio.h>

int main () {
    int c;

    c = getchar();
    putchar(c);
    printf("\n");
    printf("Your input: %d\n", c);
    printf("Your input: %c\n", c);

    return 0;
}