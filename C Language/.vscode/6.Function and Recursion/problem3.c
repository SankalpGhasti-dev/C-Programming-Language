#include <stdio.h>

float C2F(float); // Function Prototype

float C2F(float celsius) {   // Function Declaration
    
    // Method 1 :

    // float f = ((9.0 / 5.0) * celsius) + 32;
    // To avoid the confuse between function and variable fahrenheit. Thats why i named variable f and function fahrenheit.
    // return f;

    // Method 2 :

    return ((9.0 / 5.0) * celsius) + 32;
}

int main()
{
    float celsius, Fahrenheit;
    printf("Enter celsius:  \n ");
    scanf("%f", &celsius);

    // f = Fahrenheit(celsius);

    printf("The value in farenheit is %.2f.\n", C2F(celsius));

    return 0;
}
