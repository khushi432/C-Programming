#include<stdio.h>

// int  mul(int a, int b){
//     return a*b; 
int mul(int a, int b){
     return a*b;
}

int main(){
    int  a, b;
    printf("Enter number: ");
    scanf("%d %d", &a,&b);

    int num = mul(a,b);
    int k = 100;
    printf("%d", k+num);
}



