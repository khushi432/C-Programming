#include<stdio.h>

void sum(int a, int b){
    printf("Sum is: %d\n", a+b);
}

void diff(int a, int b){
    printf("Diff is: %d\n", a-b);
}

void mul(int a, int b){
    printf("mul is: %d\n",a*b);
}
void div(int a, int b){
    printf("div is :%d\n",a/b);
}

void printNum(int num){
   for(int i = 2; i<=num; i++){
    printf("%d\n", i);
   }
}

int main()
{
    //write aprogram to add two number
    // int a;
    // int b;
    // printf("Enter a number: ");
    // scanf("%d %d",&a,&b);
    // printf("Sum of a & b is:- %d",a+b);
    sum(11,1);
    diff(11,1);
    mul(4,3);
    div(4,2);  

    int agep1 = 12;
    int agep2 = 13;
    sum(agep1 , agep2);
    printNum(100);

}