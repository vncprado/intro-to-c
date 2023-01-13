/* 
    Modified versiong of the book program that uses an array to save the number of
    digits, white spaces, others in the stdin
*/

#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i<10; ++i)
        ndigit[i] = 0; // ndigit = [0,0,0,0,0,0,0,0,0,0] 


   while ((c = getchar()) != EOF) // Command line ctrl+D sends EOF
        if (c >= '0' && c <= '9') {
            int index = c-'0';
            printf("Digit %d identified\n", index);
            ndigit[index] = ndigit[index] + 1;
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            printf("White space identified.\n");
            nwhite++;
        }
        else {
            printf("Other char identified.\n");
            nother++;
        }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);   
}
