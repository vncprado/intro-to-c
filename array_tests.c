#include <stdio.h>

int main(){
    int arr[10] = {0,1,2,110,116,42,789,2,10,11};
    // char arr[10] = "testtestte";

    for (int i=0; i < 10; i++) {
        printf("chr: %c\n", arr[i]);
        printf("int: %d\n", arr[i]);
    }
}
