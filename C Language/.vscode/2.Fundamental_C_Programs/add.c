#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the number a\n");
    scanf("%d", &a);

    printf("Enter the number b\n");
    scanf("%d", &b);

    int c = a + b;
    printf("The Sum of a and b is: %d\n", c);

    return 0;
}