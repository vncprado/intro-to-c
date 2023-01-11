#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum)
{

    // Return type of the handler function should be void
    printf("\nInside handler function\n");
    printf("\nReceived signal: %d\n", signum);
    sleep(1); // Delay for 1 second
}

int main()
{
    signal(SIGINT, sig_handler); // Register signal handler

    for (int i = 1;; i++)
    { // Infinite loop
        printf("%d : Inside main function\n", i);
        sleep(1); // Delay for 1 second
    }
    return 0;
}