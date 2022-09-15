#include <stdio.h>

int main(int argc, char *argv[]) {


    if (argc<3) {
        printf("Usage: name arg arg2.\n"); // feedback to the user
        return 0; // end execution, no enough parameters
    }
  
    printf("argc: %d\n", argc); // prints the name of the program

    printf("%s\n", argv[0]); // prints the name of the program
    printf("%s\n", argv[1]); // prints the first input
    printf("%s\n", argv[2]); // prints the second input
} 
