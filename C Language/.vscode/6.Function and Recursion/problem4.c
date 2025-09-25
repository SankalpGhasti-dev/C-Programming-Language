#include <stdio.h>

float Force(float);

float Force(float Mass)
{

    // name that you give to your function =! name of variable .

    // float F = M * 9.8;

    return (Mass * 9.8);
}

int main()
{

    float force, Mass;
    printf("Enter Mass:  \n");
    scanf("%f", &Mass);

    // F = M * 9.8;

    printf("The Force of attraction on body of mass %.2f is %.2f\n", Mass, Force(Mass));
    // write the funtion you have used for it not the formula .

    return 0;
}