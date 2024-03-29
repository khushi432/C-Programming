/*
Arithmetic Operators
Arithmetic operators are used to perform mathematical operations such as addition, subtraction, etc. A few of the simple arithmetic operators are

Operator Description

1. + Addition
2. - Subtraction
3. * Multiplication
4. / Division
5. % Modulus
*/
#include <stdio.h>
int main()
{
    // 1. + Addition
    int no=12;
    int no2 = 13;
    printf("INT: %d\n",no+no2);

    float mo = 32.12347;
    float mo2 = 25.124325;
    printf("FLOAT: %f\n", mo+mo2);

    double hu=876.124325532;
    double hu2=867.12423525;
    printf("DOUBLE: %lf\n",hu+hu2);

    int num = 11;
    printf("num: %d\n",num);

    num = num + 1;
    printf("num+1: %d\n", num);

    num += 1; // num = num + 1;
    printf("num+1: %d\n", num);

    char ch= 'A';
    printf("%c\n",ch);// This will print A
    ch = ch+1; 
    printf("%c\n", ch); // This will print B
    ch += 1; // ch = ch+1;
    printf("%c\n",ch);// This will print C
    ch = ch+3;
    printf("%c\n", ch); // This Will Print F
    printf("%d\n", ch); // This Will Print 70 As per ASCII Valur table
    ch += 21;
    printf("%c\n", ch);

    char CH = 'A';
    int ASCIIOFCH = CH;
    printf("%d", ASCIIOFCH);
    


}