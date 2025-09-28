#include <stdio.h>

int main()
{

    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);  
        
        // Storing multiplication table of 5 in array . i + 1 for make sure it starts from 1 not from 0.
    }

    for (int i = 0; i < 10; i++)
    {

        printf("The value of 5 X %d = %d.\n", (i + 1), arr[i]);

        // If you have to print multiple line then use for loop.
    }
    
    return 0;
}
