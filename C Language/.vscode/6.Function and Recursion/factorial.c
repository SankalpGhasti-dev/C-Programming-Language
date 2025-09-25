#include <stdio.h>

int Factorial(int n); // Function Prototype 

// Factorial 5 = 1 X 2 X 3 X 4 X 5
// Factorial 4 = 1 X 2 X 3 X 4
// Factorial 3 = 1 X 2 X 3
// Factorial 2 = 1 X 2
// Factorial 1 = 1
// Factorial 0 = 1 *
// Factorial (n-1) = 1 x 2 x ........ x (n-1)
// Factorial (n) = 1 x 2 x ........ x (n-1) x (n)
// Factorail  n = Factorial (n-1) * (n)

int Factorial(int n) // Function Decalration 
{

    if (n == 0 || n == 1)  // Base Condition 
    {
        return 1;
    }

    return Factorial(n - 1) * n; // Factorail  n = Factorial (n-1) * (n)
}

int main()
{
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);

    printf("The Factorail of %d is %d.\n", a, Factorial(a));

    return 0;
}