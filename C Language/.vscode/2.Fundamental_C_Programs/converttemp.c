#include <stdio.h>

int main()
{
    float celsius,  Fahrenheit;

    printf("Enter celsius\n");
    scanf("%f", &celsius);

     Fahrenheit = ((9.0 / 5.0) * celsius) + 32;

    // if you are dividing numbers then mention it like 9.0 not 9 .. if you not use it then it will take it as a integer and for accurate calculation use float ...

    printf("The value in farenheit is %.2f ",  Fahrenheit);

    return 0;
}
