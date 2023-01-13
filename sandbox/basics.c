/*
asdas
asdsa
*/

#include<stdio.h>

int main(){
    int number=5;

    if (number < 10) {
        printf("Smaller %d\n", number);
    } else {
        printf("bigger %d\n", number);
    }
    
    while (number <= 10) {
        printf("still smaller %d\n", number);
        number++;
    }

    for (int i=0; i < 10; i++) {
        printf("i= %d\n", i);
    }
}