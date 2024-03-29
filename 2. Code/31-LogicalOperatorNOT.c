/*
Operator	Name	Example	Description
    !	Logical not	!(x < 5 && x < 10)	Reverse the result, returns 0 if the result is 1
*/
#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  // Returns false (0) because ! (not) is used to reverse the result
  printf("%d", !(x>3 && y<10));
  
}