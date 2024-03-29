/*
if (condition1) {  
   code to be executed if condition1 is true  
   if (condition2) {  
       code to be executed if condition2 is true 
   } else {  
       code to be executed if condition2 is false 
   }  
} else {  
    code to be executed if condition1 is false 
}
*/
#include<stdio.h>
int main()
{
  int age;
  printf("Bhai apna age enter kro: ");
  scanf("%d", &age);

  int ticketStatus;
  printf("Bhai ticket hai ? ");
  scanf("%d",&ticketStatus);

//   Check age
   if(age>18)
   {
      // check ticket
      if(ticketStatus==1)
      {
         printf("you are welcome");
      }
      else
      {
         printf("BUY THE TICKETS");
      }
   }
   else
   {
      printf(" you are under age");
   }

}
