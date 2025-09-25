#include <stdio.h>

int main()
{

    //  Write a program to sum first ten natural numbers using while loop
    // Write a program to implement program 5 using  ‘for’ loop.

    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i; // it is equivalent to sum = sum + i ;
    }

    printf("Sum of first ten natural numbers is %d.\n", sum);
    
    return 0;
}