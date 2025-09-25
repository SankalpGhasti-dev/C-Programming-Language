#include <stdio.h>

int sum_natural(int); // function Prototype

int sum_natural(int n) // function Declaration
{
    if (n == 1)
    {
        return 1;
    }

    // sum_natural(n) = 1 + 2 + 3 + 4 + 5 ..... + n-1 + n ;
    // sum_natural(n) = sum_natural (n-1) + n

    return sum_natural(n - 1) + n;
}

int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);

    printf("The sum of First %d Numbers is %d.\n", n, sum_natural(n));
    return 0;
}
