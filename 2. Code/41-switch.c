#include<stdio.h>
int main()
{
    int day;
    printf("Enter day: ");
    scanf("%d", &day);

    switch(day){
        case 1: printf("Monday \n");
                break;
        case 2: printf("TUESDAY \n");
        break;
        case 3:printf("WEDNESDAY \n");
        break;
        case 4:printf("thursday \n");
        break;
        case 5: printf ("friday \n");
        break;
        case 6:printf("saturday \n");
        break;
        case 7:printf("sunday \n");
        break;
        default: printf("tamiz se likh");
    }

}