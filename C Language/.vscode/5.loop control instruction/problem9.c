#include <stdio.h>

int main()
{

    // Write a program to calculate the sum of the numbers (products)occurring in the
    //   multiplication table of 8. (consider 8 x 1 to 8 x 10).

    int n = 8;
    int product = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d X %d = %d\n", n, i, n * i);
        // This is optional for this problem...

        product += n * i;
        // This is equivalent to product = product + (n*i)
    }

    printf("Sum of the numbers in the multiplication table of 8 is %d.\n", product);

    return 0;
}