/*
    Code extracted from Figure 3.21-3.22 Ordinary pipe in UNIX.
    Used in example of lecture 05 - Processes - Ch3 - p2
*/

#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 25
#define READ_END 0
#define WRITE_END 1

int main(int argc, char *argv[]) {

    char write_msg[BUFFER_SIZE] = "Greetings";
    char read_msg[BUFFER_SIZE];
    int fd[2];
    pid_t pid;

    /* create the pipe */
    if ( pipe (fd) == -1) {
        fprintf(stderr,"Pipe failed\n");
        return 1;
    }

    /* fork a child process */
    pid = fork();
    if (pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }

    if (pid > 0) { /* parent process */
        printf("I'm the parent\n");

        /* close the unused end of the pipe */
        close(fd[READ_END]);
        /* write to the pipe */
        printf("Parent writes %s\n",write_msg);
        write(fd[WRITE_END], write_msg, strlen(write_msg)+1);
        /* close the WRITE_END of the pipe */
        close(fd[WRITE_END]);
    }
    else { /* child process */
        printf("I'm the child\n");
        /* close the unused end of the pipe */
        close(fd[WRITE_END]);
        /* read from the pipe */
        read(fd[READ_END], read_msg, BUFFER_SIZE);
        printf("Child read %s\n",read_msg);
        /* close the READ_END of the pipe */
        close(fd[READ_END]);
    }
    return 0;
}