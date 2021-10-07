/* 
    Program that swap to lines in a array of pointers
*/

#include <stdio.h>

char *lineptr_p[2]; /* pointers to text lines */

void printlines(char *lineptr[], int nlines);
void swap(char *v[], int i, int j);

/* sort input lines */
int main() {
  int nlines = 2; /* number of input lines read */

  lineptr_p[0] = "teste";
  lineptr_p[1] = "teste1";

  printlines(lineptr_p, nlines);
  swap(lineptr_p, 0, 1);
  
  printlines(lineptr_p, nlines);
  return 0;
}

/* writelines: write output lines */
void printlines(char *lineptr[], int nlines) {
  int i;
  for (i = 0; i < nlines; i++) {
    printf("%s\n", lineptr[i]);
  }
}

/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j) {
  char *temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

