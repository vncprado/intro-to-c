#include <stdio.h>

int main () {
    int c;

    c = getchar();
    while (c != EOF) {
        printf("%c", c);
        //putchar(c);
        c = getchar();
    }
}

