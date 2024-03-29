/*
Output (Print Text)
To output values or print text in C, you can use the printf() function:
*/
// Example
#include <stdio.h>

int main() {
  printf("Hello World!");

  /*
  Double Quotes
  When you are working with text, it must be wrapped inside double quotations marks "".
  If you forget the double quotes, an error occurs:
  */
    //  Example
    printf("This sentence will work!");

/*
Many printf Functions
You can use as many printf() functions as you want. However, note that it does not insert a new line at the end of the output:

Example
*/
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");
  
  return 0;
}