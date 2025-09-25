#include <stdio.h>

int main()
{
    float P, R, T, SI;

    printf(" Enter P\n "); // Principal
    scanf("%f", &P);

    printf("Enter R\n "); // Rate of Interest
    scanf("%f", &R);

    printf("Enter T\n "); // Time
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    // NOTE: Using float for P, R, and T because rates and time can be in decimals.
    // This avoids integer division and gives more accurate results in decimals (float) for real-life calculations.

    printf("The SI is %f", SI); // Simple Interest

    return 0;
}
