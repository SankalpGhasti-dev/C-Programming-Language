#include <stdio.h>

int main()
{
    // Write a program to print first ‘n’ natural number using do-while loop.

    int n, i = 1;
    printf("Enter number: \n");
    scanf("%d", &n);
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}