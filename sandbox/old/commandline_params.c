/*
Example of command line parameter usage
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    if (argc==1) {
        printf("We need at least one parameter\n"); // feedback to the user
        return 0; // end execution, no enough parameters
    }

    printf("%s\n", argv[0]); // prints the name of the program
    printf("%s\n", argv[1]); // prints the first input

    int myarg = atoi(argv[1]); // converting to integer
    printf("%d + 1 = %d\n", myarg, myarg+1);

}