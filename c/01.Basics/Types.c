#include <stdio.h> // Header file
#include <stdbool.h> // for booleans

int main (void){

  // String
  char text[] = "Learning C"; 

  // Integer
  int wholeNum = 25;

  // Double
  double decimalNum = 5.5;

  // Boolean
  bool trueOrFalse = false;

  // Print values
  printf("String: %s\n",  text);
  printf("Integer: %d\n",  wholeNum);
  printf("Double: %.2f\n",  decimalNum);
  printf("Boolean: %d\n",  trueOrFalse);

  return 0;
}