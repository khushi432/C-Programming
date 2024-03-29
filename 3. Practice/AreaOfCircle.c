#include<stdio.h>
int main()
{
    float radius;

    printf("Enter radius: ");
    scanf("%f",&radius);

    // Area
    float areaOfCircle = 3.14*(radius*radius);
    printf("Area of Circle: %.3f", areaOfCircle);
    

}