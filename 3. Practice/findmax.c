#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    //compare which no is maaximum
    if (a >b){
        printf("%d",a);
    }
    if(b>a){ 
    printf("%d",b);
    }
    if( a==b){
        printf("equal");
    }
    
}