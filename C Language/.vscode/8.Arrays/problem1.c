#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    // ptr means address and *ptr means value at that address.

    printf("The value at address %u is %d.\n", ptr + 2, *(ptr + 2));

    // ptr+3 means address of 4th element and *(ptr+3) means value at that address.
}
