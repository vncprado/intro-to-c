/*
    Example of scanf reading integer
*/

#include <stdio.h>

int main() {
    int my_int; // variable to store the input

    printf("Insert an integer\n");
    // scanf need the variable address "&"
    scanf("%d", &my_int); // scanf reading integer
    
    printf("you entered: %d\n", my_int);
}