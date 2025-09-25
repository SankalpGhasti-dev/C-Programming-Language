#include <stdio.h>

int main()
{

    int a = 20;
    int *ptr1 = &a; // It stores the value of a 
    int **ptr2 = &ptr1; // It stores the address of ptr1

    printf("The address of a is %p\n", a);

    printf("The value of a is %d\n", *ptr1); 
    // It displays the value of a using single pointer 
    
    printf("The value of a is %d\n", **ptr2);
    // It displays the value of a using double pointer
    

    return 0;
}
