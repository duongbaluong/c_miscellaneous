/*
 * if_function.c
 * authour: Luong Ba Duong
 * when x = f() == 0, the inside codes won't run
 */
 
#include <stdio.h>

int f(void) {
  return 0; // change to 1 to see what happen
}
int main(void) {
  int x;
  if ((x = f())) {
    printf("Hello World\n");
  }
  
  return 0;
}
