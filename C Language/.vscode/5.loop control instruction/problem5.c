#include <stdio.h>

int main()
{

    // Write a program to sum first ten natural numbers using while loop

    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum + i; // it is equivalent to sum += i;
        i++;
    }
    printf("Sum of first ten natural numbers is %d.\n", sum);

    return 0;
}