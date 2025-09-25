#include <stdio.h>

int main()
{

    int a = 4;
    int *b = &a;
    printf("The address of a is %u.\n", &a); // It is address of a .
    printf("The value of a is %d.\n", *b);   // It is value on address b.

    return 0;
}
