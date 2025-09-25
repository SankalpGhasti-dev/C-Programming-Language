#include <stdio.h>

int sum(int, int); // function prototype

int sum(int a, int b) // function declaration
{
    return a + b;
}

int main()
{
    int x = 3, y = 4;
    
    printf("The sum of 3 and 4 is %d\n", sum(x, y));

    return 0;
}