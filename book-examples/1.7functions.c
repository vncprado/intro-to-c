/* 
    Program that implements the pow function
*/

#include <stdio.h>

int power(int base, int n);

int main() {
    int i;
    
    for (i=0; i<=10; i++)
        printf("2^%d = %d\n", i, power(2,i));
        // printf("%d %d %d\n", i, power(2,i), power(-3, i));
    return 0;
}

int power(int base, int n) {
    int i, pow;
    
    pow = 1;
    for (i = 1; i<= n; ++i) {
        pow = pow * base;
    }
    
    return pow;
}
