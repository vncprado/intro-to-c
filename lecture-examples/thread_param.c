/*
    Program that creates NUM_OF_THREADS join them and quit
    gcc thread_param.c -pthread
*/

#include<stdio.h>
#include<pthread.h>

#define NUM_OF_THREADS 100

void * mythread(void *thread_param);

int main() {
    printf("Before Thread\n");
    
    pthread_t thread_id[NUM_OF_THREADS];
    int my_val = 10;
    
    // pthread_create(thread_id, thread parameter, function name, function parameters) 
    for (int i=0; i<NUM_OF_THREADS; i++)
        pthread_create(&thread_id[i], NULL, mythread, (void *) &my_val);
    
    for (int i=0; i<NUM_OF_THREADS; i++)
        pthread_join(thread_id[i], NULL);
    printf("After Thread\n");
}

void *mythread(void *thread_param) {
    *((int *) thread_param) += 1;
    int t_val = *((int *) thread_param);

    printf("Inside the thread: %d\n", t_val);
}
