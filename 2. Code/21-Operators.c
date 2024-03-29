// --	Decrement	Decreases the value of a variable by 1	--x/
# include <stdio.h>
int main()
{
   // post decrement
    int a = 15;
    printf("%d\n",a--);// This will print 15
    printf("%d\n",a); // this will print 14

    // pre decrement
    int b= 6;
    printf("%d\n",--b);//This will print 5
    printf("%d",b);

}