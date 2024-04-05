#include<stdio.h>

int add(int a, int b){
    return a+b+10;
}

float add1(float a, float b){
    return a+b+1;
}

int main(){
    //  printf("%d",add(2,3));
    float a,b;
    printf("Enter a & b: ");
    scanf("%f %f", &a, &b);
    // printf("%d", add(a,b));
    printf("%f", add1(a,b));

}