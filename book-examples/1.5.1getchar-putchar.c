/* 
    Program that reads from the stdin ant prints to the stdout
*/

#include <stdio.h>

int main()
{
	int c;

	c = getchar();
	while (c != EOF) {
	    //printf("%d\n", c);
	    putchar(c);
	    c = getchar();
	}
}
