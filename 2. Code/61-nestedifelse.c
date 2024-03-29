#include <stdio.h>
int main()
{
    int  gender;
    printf (" ENTER YOUR GENDER :");
    scanf("%d",&gender);

    int age;
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);

    if(gender == 1)
    {
        // Condition for male
    if(age>21){
        printf("you are eligible ");
    }else{
        printf("you are not eligible");
    }
    }
    else if(gender == 0)
    {
        // condition for female
        if(age>18)
        {
            printf(" you are eligible");
        }
        else
        {
            printf(" you are not eligible");
        }
    }
    else
    {
        // other 
        printf("enter valid gender");
    }
    
    

}