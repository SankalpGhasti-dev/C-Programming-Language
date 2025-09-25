#include <stdio.h>

int main( )
{
   int Length , Breathe ; 
  
   printf("Enter the Length\n");
   scanf("%d" , &Length); 

   printf("Enter the Breathe\n");
   scanf("%d" , &Breathe); 
   // here we are using user data input .. so that we have to use scanf functions ....

   printf("The area of rectangle is %d" , Length*Breathe);


   return 0;
}
