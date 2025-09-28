#include <stdio.h>

// In this program we have created a 2D array of 3 rows and 2 columns. We have taken input from the user to fill the array and then printed the values of the array.

int main()
{

    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // This two for loops are used to print the values of the 2D array.

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
    
    //and this two for loops are used to print the values of the 2D array.

    return 0;
}
