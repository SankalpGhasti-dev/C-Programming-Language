#include <stdio.h>

int main()
{

    // Write a program to print multiplication table of 10 in reversed order.
    
    int n = 10;

    for (int i = 10; i >= 1; i--)
    {
        printf(" %d X %d = %d\n", n, i, n * i);
    }

    return 0;
}