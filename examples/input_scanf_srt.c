/*
    Example of scanf reading sting and integer
*/

#include <stdio.h>

int main() {
    char my_var[10]; // variable to store the input

    printf("Insert a string\n");
    // scanf need the variable address "&"
    scanf("%s", my_var); // scanf reading string

    printf("you entered: %s\n", my_var);
}