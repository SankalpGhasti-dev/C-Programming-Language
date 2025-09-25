#include <stdio.h>

float average(int a, int b, int c); // Function Prototype


float average(int a, int b, int c) // Function Declaration
{
    float average = (a + b + c) / 3.0; // Formula for average

    return average; // average ==  float average=( a + b + c ) / 3
}


int main()
{
    int a = 3, b = 5, c = 7;

    printf("The average of a,b & c is %.2f.\n", average(a, b, c));

    return 0;
}
