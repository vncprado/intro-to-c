/*
This is a simple exmple of opemmp
compile:
    gcc openmp.c -fopenmp

Export the number of threads:
    export OMP_NUM_THREADS=4

Run:
    ./a.out

Change the number of threads:
    export OMP_NUM_THREADS=8

Run again (no compilation required):
    ./a.out
*/

#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv){
    int n = 500;
    int i, j;    
    #pragma omp for
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++) {
            printf("Hello from process: %d\n", omp_get_thread_num());
        }
    }


    return 0;
}
