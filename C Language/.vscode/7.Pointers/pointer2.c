#include <stdio.h>

int main()
{

    int i = 72;
    int *j = &i; 
    
    // j is a pointer pointing to i . 
    // j is an integer pointer.

    printf("The address of i is %p.\n", &i);
    printf("The address of i is %p.\n", j);

    printf("The value of address j is %d.\n", *j);
    printf("The value of address j is %d.\n", *(&i));

    // value at address of i .
    // *j == *(&i)
    // * tells value and & asks address.

    return 0;
}
