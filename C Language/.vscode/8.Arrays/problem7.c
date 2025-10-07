#include <stdio.h>

int main()
{

    int arr[3][10];
    int mul[] = {2, 7, 9};
    
    // index no. 0 = 2 , index no. 1 = 7, index no. 2 = 9.

    for (int i = 0; i < 3; i++)
   
    // i < 3 because we have 3 rows and also have 3 multiplication table to store in array.

    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);   // j+1 for make sure it starts from 1 not from 0.
        }
    }
    
    // example if arr[0][1] = 2 * (1 + 1) = 4.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d.\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}