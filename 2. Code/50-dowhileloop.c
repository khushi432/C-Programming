#include <stdio.h>
int main()
{
    int n;
    printf("ENTER NUMBER N HERE");
    scanf("%d",&n);

    int i=1;
    do{
        printf("%d\n",i*n);
        i++;
    }while (i <11);
    
}