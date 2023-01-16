


#include <stdio.h>

int main(){
    //int arr[12] = {65,66,97,98,2,110,116,42,789,2,10,11};
    char arr[12] = "testtestte";

    arr[11] = 'a';
    for (int i=0; i < 12; i++) {
        printf("chr: %c\tint: %d\n", arr[i], arr[i]);
    }
}
