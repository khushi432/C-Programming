#include<stdio.h>
int main()
{
    // Break:The break in C is a loop control statement that breaks out of the loop when encountered.
   for (int i = 0; i < 10; i++) {
      if (i == 4) {
        break;
      }
      printf("%d\n", i);
    }
}