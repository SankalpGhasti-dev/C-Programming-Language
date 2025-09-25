#include <stdio.h>

int main()
{

    // Write a program to calculate the factorial of a given number using a for loop.

    // n! = 1 X 2 X 3 X 4 X 5 X 6 .... X n
    // 0! = 1 ( by definition)

    int n;
    int product = 1;
    printf("Enter n: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)

    {
        product *= i; // product = product * i;
    }

    printf("Factorial of %d is %d.\n", n, product);

    return 0;
}
