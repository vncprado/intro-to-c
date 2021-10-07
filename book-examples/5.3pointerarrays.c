/* 
    Program that uses pointers to navigate arrays
*/

#include <stdio.h>

int main() {
    int arr[10];
    int *ap;
    
    ap = arr;

    for (int i=0; i < 10; i++)
        arr[i] = i;

    for (int i=0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    ap = ap + 9;
    for (int i=0; i < 10; ap--, i++)
        printf("%d ", *ap);
    printf("\n");
}
