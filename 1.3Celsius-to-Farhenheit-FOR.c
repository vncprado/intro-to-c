/* 
    Program that converts a range of values in Celcius to Farhenheit
*/

#include <stdio.h>

#define name replacement text
#define LOWER  0
#define UPPER  100
#define STEP   5

int main() {
  int celsius;

  printf("Celsius-Fahrenheit table\n");
  /* for (<initialisation>; <expression>; <expression>) */
  for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
    printf("%3.0f %6.1f\n", (float)celsius, (celsius * 9.0 / 5.0) + 32.0);
  }
}
