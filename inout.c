/*
    Example on input, output, EOF and stdin/stdout
    Try ./a.out < some_file
*/

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

