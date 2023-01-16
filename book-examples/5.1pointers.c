/* 
    Program to explain pointers
*/

#include <stdio.h>

int main () {
    int x = 1, y = 2;
    int *ip; // It reads "pointer to an integer"; the expression "*ip" is an int

    ip = &x; // ip is now equal to the address of x i.e. ip now points to x
    printf("ip is now equal to the address of x i.e. ip now points to x\n");
    printf("x: %d\ny: %d\n*ip: %d\nip: %p\n\n", x, y, *ip, ip);
    
    y = *ip; // copy the content of whatever ip points to y
    printf("copy the content of whatever ip points to y\n");
    printf("x: %d\n*ip: %d\ny: %d\n\n", x, *ip, y);
    
    
    y = y + 1; // y does not affect x or ip
    printf("y does not affect x or ip\n");
    printf("x: %d\n*ip: %d\ny: %d\n\n", x, *ip, y);
    
    *ip = *ip + 10; // *ip affects x
    printf("*ip affects x and do not affect y\n");
    printf("x: %d\n*ip: %d\ny: %d\n", x, *ip, y);
}
