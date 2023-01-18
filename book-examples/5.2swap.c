/* 
    Program to explain scope and using outside to change variable outside a function
*/

#include <stdio.h>

int swap(int x, int y);
int pswap(int *px, int *py);

int main(){
    int x = 1, y = 3;
    int *px = &x, *py = &y;
    printf("Before swap\nx: %d, y:%d\n\n", x, y);
    swap(x, y);
    printf("After swap\nx: %d, y:%d\n\n", x, y);
    pswap(&x, &y);
    printf("Before pointer swap\nx: %d, y:%d\n\n", x, y);
    pswap(px, py);
    printf("After pointer swap\nx: %d, y:%d\n\n", x, y);

}

int swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int pswap(int *px, int *py) {
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}
