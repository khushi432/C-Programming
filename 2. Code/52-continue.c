#include<stdio.h>
int main()
{
    // continue:The continue statement is used to skip the current iteration of any loop and bring the control to the beginning of the iteration. 
    for (int i = 0; i < 10; i++) {
      if (i == 4) {
        continue;
      }
      printf("%d\n", i);
    }
}