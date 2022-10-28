/*
Example of command line parameter that receives an array of numbers
*/

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {

    if (argc==1) {
        printf("We need at least one parameter\n"); // feedback to the user
        return 0; // end execution, no enough parameters
    }

    printf("%s\n", argv[0]); // prints the name of the program

    int num_items = argc-1;
    int *my_array = malloc(num_items * sizeof(int));
    
    for (int i=0; i<num_items; i++){
        int *tmp = (int *) malloc(sizeof(int));
        tmp = my_array + i;
        *tmp = atoi(argv[i+1]); // converting to integer
    }

    for (int i=0; i<num_items; i++)
        printf("%d ", my_array[i]);
    printf("\n");
}