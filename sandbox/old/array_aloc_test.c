#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int arr_size = atoi(argv[argc-1]);
    
    printf("size: %d\n", arr_size);
    int *arr = malloc (sizeof (int) * arr_size); /* n is the length of the array */
    int i;

    for (i=0; i<arr_size; i++) {
      arr[i] = 0;
    }
    
    for (i=0; i<arr_size; i++) {
      printf("%d,", arr[i]);
    }
    printf("\n");
}
