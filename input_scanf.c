/*
    Example of scanf reading sting and integer
*/

#include <stdio.h>

int main() {
//    char my_var[10]; // variable to store the input
    int my_var; // variable to store the input

    printf("Insert a string\n");
    
    // scanf need the variable address "&"
//    scanf("%s", my_var); // scanf reading string
    scanf("%d", &my_var); // scanf reading integer
    
//    printf("you entered: %s\n", my_var);
    printf("you entered: %d\n", my_var);
}