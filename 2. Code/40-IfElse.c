
#include <stdio.h>
int main()
{
int age;
printf(" enter age: ");
scanf("%d",&age);
if( age<=12){
    printf("CHILD");
    
}
else if (age<18){
    printf("TEENAGE");


} else {
    printf("adult");
}

}