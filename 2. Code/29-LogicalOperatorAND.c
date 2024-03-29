/*
Operator	Name	Example	Description
    && 	Logical and	x < 5 &&  x < 10	Returns 1 if both statements are true
*/
#include <stdio.h>

int main() {
  int a = 5;
  int b = 3;
  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d", a>3 && b<10); 
}