/*
Factorial
1*2*3
*/
#include <stdio.h>
int main()
{
int sum = 1;
for(int i=1;i<4;i++){
    sum = sum * i;
}
printf("%d\n", sum);
}