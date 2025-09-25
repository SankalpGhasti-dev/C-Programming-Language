#include <stdio.h>

int main()
{

    //  Write a program to sum first ten natural numbers using while loop
    // Write a program to implement program 5 using  ‘do-while’ loop.
    int i = 1; // initialization 
    int sum = 0;
    do
    {
        sum = sum + i; // it is equivalent to sum += i;
        i++; // increment
    } while (i <= 10); // condition 

    printf("Sum of first ten natural numbers is %d.\n", sum);

    return 0;
}
