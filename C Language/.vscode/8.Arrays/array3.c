#include <stdio.h>

int main()
{
    int cgpa[3] = {9, 8, 7};
    // int cgpa[] = {9,8,7}; This also valid way to declare and initialize an array.

    for (int i = 0; i < 3; i++)
    {
         printf("The value of cgpa at index %d is %d.\n", i , cgpa[i]);
    }
   
    return 0;

}