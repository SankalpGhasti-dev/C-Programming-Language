#include <stdio.h>

int sum(int *, int *); // function prototype

// it should change the value of a ..

int sum(int *a, int *b) // function declaration
{
    *a = 8;
    return *a + *b;
}

int main()
{
    int x = 3, y = 4;

    printf("The sum of 3 and 4 is %d.\n", sum(&x, &y));
    printf("The value of x is %d.\n", x);

    return 0;
}