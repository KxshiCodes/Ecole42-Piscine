#include <stdio.h>
#include <string.h>

int main(void){
  
  char fullName[100];
  int age;
  double height;

  // Read name
  printf("Enter your full name:  "); 
  fgets(fullName, sizeof(fullName), stdin);
  printf("Hello, %s", fullName); // Reads a whole line, including spaces.

  // Read age
  printf("Enter your age: "); 
  scanf("%d", &age); 
  printf("You are %d years old.\n", age);

  // Read height
  printf("How tall are you: ");
  scanf("%lf", &height);
  printf("You are %.2f meters tall.\n", height);

  return 0;
}