#include <stdio.h>

int change(int a); // Function Prototype 

int change(int a) // Function Declaration 
{
    a = 77; // Misnomer
    return 0;
}

int main()
{

    int b = 22;
    change(b); // The value of b remians 22
    printf("b is %d.\n", b);

    // This happens because a copy of b is passed to the change function.

    return 0;
}


/* If function decalre before main then prototype is not mandatory  and if function decalre after main then prototype is then prototype is mandatory */
