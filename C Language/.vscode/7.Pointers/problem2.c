#include <stdio.h>

int address(int *j);

int address(int *j)
{
    printf("The value at ptr is %d.\n", *j);
    printf("The value of ptr is %d.\n", j);
    return 0;
}

int main()
{
    int i = 21;
    int *j = &i;

    printf("The address of i is %u.\n", &i);
    address(j);
    return 0;
    
}