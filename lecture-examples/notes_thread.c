    #include <stdio.h>
    #include <stdlib.h>
    #include <pthread.h>
      
    // A normal C function that is executed as a thread 
    // when its name is specified in pthread_create()
    void *myThreadFun(void *thread_param) {

        // receiving parameter and casting it to integer
        int thread_val = *((int *) thread_param); 
        printf("We are in the thread!\n");
        printf("Thread val: %d\n", thread_val);

        return NULL;
    }

    int main() {
        
        printf("Before Thread\n");
        
        int my_val = 13;
        pthread_t thread_id;
        
        // pthread_create(thread_id, thread parameter, function name, function parameters) 
        pthread_create(&thread_id, NULL, myThreadFun, (void *) &my_val);
        
        pthread_join(thread_id, NULL);
        printf("After Thread\n");
    }
