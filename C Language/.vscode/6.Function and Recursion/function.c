#include <stdio.h>

int sum(int, int); // Function Prototype

int sum(int a, int b) // Function Defination

{
    printf("The sum is %d.\n", a + b);
    return a + b;
}

int main()
{

    int a = 3;
    int b = 6;

    sum(a, b); // Function Call. 

    sum(5, 8); // If you saved an logic ( set function ). Then you don't need to declare the int value.

    return 0;
}