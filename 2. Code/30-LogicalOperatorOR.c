/*
Operator	Name	Example	Description
    || 	Logical or	x < 5 || x < 4	Returns 1 if one of the statements is true
*/

#include <stdio.h>

int main() {
  int a = 1;
  int b = 9;
     
  // Returns 1 (true) because one of the conditions are true (5 is greater than 3, 
//   but 5 is not less than 4)
  printf("%d", a>3 || b<10); 
}