#include <stdio.h>

void variable(int *); // Function prototype

void variable(int *a) // Function declaration
{
    /*void function can not return value and if you want any return value then use what ever data type */

    *a = *a * 10;
}

int main()
{
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);

    printf("The value of a is %d.\n", a);

    variable(&a); // Function call with pointer.

    printf("The value of a is %d.\n", a);
    return 0;
}
