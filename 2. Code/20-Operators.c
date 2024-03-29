// ++	Increment	Increases the value of a variable by 1	++x
#include<stdio.h>
int main()
{
    //  Post-Increment: a++
    int a = 5;
    printf("Line: 6 %d\n", a++); // This will print 5
    printf("Line: 7 %d\n", a); // This will print 6;
    printf("Line: 8 %d\n", a); // This will print 6;
    printf("Line: 9 %d\n", a++); // This will print 6;
    printf("line no 10: %d\n", a); // This will print 7

// Pre-Increment: ++b
    int b = 11;
    printf("Line-14:%d\n", ++b); // This will print 12
    printf("Line-15:%d\n", ++b); // This will print 13
    printf("Line-16:%d\n", b++); // This will print 13
    printf("Line-17:%d\n", b); // This will print 14
    




}