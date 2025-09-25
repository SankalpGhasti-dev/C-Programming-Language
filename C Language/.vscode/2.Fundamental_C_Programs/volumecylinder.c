#include <stdio.h>

int main()
{
   float Radius, Height, volume, area;
   // if you indicats all in float then while entering in terminal write like 3.0 not just 3 .
   printf("Enter the Radius\n");
   scanf("%f", &Radius);

   printf("Enter the Height\n");
   scanf("%f", &Height);

   volume = 3.14 * Radius * Radius * Height;

   area = 3.14 * Radius * Radius;
   printf("The area of circle with Radius %f is %.2f.\n", Radius, area);

   printf("The volume of cylinder with Radius %f and Height %f is %.2f.\n", Radius, Height, volume);

   return 0;
}
