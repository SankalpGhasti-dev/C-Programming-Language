#include <stdio.h>
/*
Write a program containing functions which counts the number of positive
integers in an array.

This program not use user definded input of numbers to count positive integers in an array.

*/

int count(int arr[], int n)
{
    int positive_no = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > 0)
        {
            // printf("The number %d is positive.\n", arr[i]);
            positive_no++;
        }
    }
    return positive_no;
}

int main()
{
    int arr[10] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    int total = count(arr, 10);
    printf("Positive numbers are %d.\n", total);
}
