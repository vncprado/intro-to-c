/*
    Program that creates NUM_OF_THREADS join them and quit
*/

#include<stdio.h>
#include<pthread.h>

#define NUM_OF_THREADS 3

void *mythread(void *thread_param) {
    printf("Inside the thread: %d\n", (int) pthread_self());
}

int main() {
    printf("Before Thread\n");
    
    pthread_t thread_id[NUM_OF_THREADS];
    
    // pthread_create(thread_id, thread parameter, function name, function parameters) 
    for (int i=0; i<NUM_OF_THREADS; i++)
        pthread_create(&thread_id[i], NULL, mythread, NULL);
    
    for (int i=0; i<NUM_OF_THREADS; i++) {
        printf("Joining thread: %d\n", (int) thread_id[i]);
        pthread_join(thread_id[i], NULL);
    }
    printf("After Thread\n");
}

