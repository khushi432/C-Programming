#include<stdio.h>
int main()
{
    // Variable declaration
    int side;

    // Input 
    printf("Enter side: ");
    scanf("%d", &side);

    // Area 
    int area = side*side;
    printf("Area of Square = %d",area);
}