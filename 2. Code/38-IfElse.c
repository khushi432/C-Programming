#include<stdio.h>
int main()
{
    int age ;
    printf("Enter age:");
    scanf("%d",&age);

    if(age>=1 && age<5 ){
        printf("todler");
     
    }
    else if(age>=5 && age<13)
    {
        printf ("kids");

    }
    else if( age>=13&& age<19){
        printf(" teen");

    }
    else if (age>=19&& age <45){
        printf(" ADULTHOOD");
    }
    else if ( age>=45&& age < 60){
        printf("MID ADULT");
    }
else{ 

    printf(" later adult");
}

}
