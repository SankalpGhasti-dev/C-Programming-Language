#include <stdio.h>

int main()
{

    int i = 72;
    printf("The address of i is %p.", &i);

    // &i gives the address of variable i (not it's value.)
    // & is the format specifier.
    // Format specifier for printing pointer address is ‘%p’. use %u for get value in integer.

    return 0;
}