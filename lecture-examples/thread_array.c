/*
    Program that creates NUM_OF_THREADS join them and quit
*/

#include<stdio.h>
#include<pthread.h>

#define NUM_OF_THREADS 3
#define ARRAY_SIZE 5

void *my_thread(void *thread_param) {
    int * my_array = (int *) thread_param;
    // printf("Inside the thread: %d\n", (int) pthread_self());
    for (int i=0; i<ARRAY_SIZE; i++)
        printf("my_array[%d] inside the thread %d = %d\n", i, (int) pthread_self(), my_array[i]);
}

int main() {
    printf("Before Thread\n");
    int my_array[ARRAY_SIZE] = {123, 53, 13, 54, 99};
    
    pthread_t thread_id[NUM_OF_THREADS];
    
    // pthread_create(thread_id, thread parameter, function name, function parameters) 
    for (int i=0; i<NUM_OF_THREADS; i++)
        pthread_create(&thread_id[i], NULL, my_thread, (void *) my_array);
    
    for (int i=0; i<NUM_OF_THREADS; i++) {
        printf("Joining thread: %d\n", (int) thread_id[i]);
        pthread_join(thread_id[i], NULL);
    }
    printf("After Thread\n");
}

