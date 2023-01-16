/* 
    Modified version of book program that implements the pow function
*/

#include <stdio.h>

int power(int base, int expo);

int main() {
    
    int my_base = 2; // base
    int my_expo = 10; // exponent
    int result = power(my_base, my_expo);
    printf("%d^%d = %d\n", my_base, my_expo, result);

    return 0;
}

int power(int base, int expo) {
    int i, pow;
    
    pow = 1;
    for (i = 1; i<= expo; ++i) {
        pow = pow * base;
    }
    
    return pow;
}
