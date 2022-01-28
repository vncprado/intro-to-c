#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h> // POSIX operating system API
#include <stdio.h>

int main()
{
    pid_t pid;
    /* fork a child process */
    pid = fork();
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }
    else if (pid == 0) { /* child process */
        execlp("/bin/ls", "ls", NULL);
    }
    else { /* parent process */
        /* parent will wait for the child to complete */
        // return pid, param: status pointer, here = null
        pid = wait(NULL);
        printf("Child Complete\n");
    }
    return 0;
}
