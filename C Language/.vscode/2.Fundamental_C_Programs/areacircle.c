#include <stdio.h>

int main()
{
   int Radius;
   float area;

   printf("Enter the Radius\n");
   scanf("%d", &Radius);

   area = 3.14 * Radius * Radius;
   printf("The area of circle %d is %.2f", Radius, area);
   // Used two variables in printf(): one for radius (%d), and one for area (%.2f).
   // %.2f formats the area to 2 decimal places.

   return 0;
}
