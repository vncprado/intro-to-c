/*
    Example of a format input using scanf
*/

#include <stdio.h>

int main() {
    int a; // variable to store the input
    int b; // variable to store the input

    printf("Insert two integers a,b\n");
    scanf("%d,%d", &a, &b); // scanf reading two values
    
    printf("you entered: %d and %d\n", a, b);
}