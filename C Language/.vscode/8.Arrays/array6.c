#include <stdio.h>

int main()
{

    int marks[] = {23, 43, 53, 67, 47};
    int *ptr = &marks[0];   //int* ptr = marks; both are same

    for (int i = 0; i < 4; i++)
    {

        // printf("The marks at index %d is %d\n", i, marks[i]);
        
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;   // ptr = ptr + 1; next integer address 
    }

    return 0;
}

