#include <stdio.h>

// Write a program containing a function which reverses the array passed to it.

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)

    // n/2 because we have to swap only half of the array. If we swap the whole array then it will again reverse the array to its original form.

    {
        temp = arr[i];           // i means starting index 0 to 5
        arr[i] = arr[n - i - 1]; // n-i-1 means ending index 5 to 0
        arr[n - i - 1] = temp;   // n = 6;
    }
}

/*
consider we have i = 0 and n = 6 then above formula given computer an index of number to swap with another index number so that we can reverse the array.

i = 1; n-i-1 = 6-1-1 = 4; so it will swap index no. 1 with index no. 4.
*/

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverseArray(arr, 6);
    printArray(arr, 6);

    return 0;
}
