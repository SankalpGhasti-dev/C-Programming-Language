#include <stdio.h>

// this program for swaping the numbers.

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter a: \n");
    scanf("%d", &a);

    printf("Enter b: \n");
    scanf("%d", &b);

    swap(&a, &b);
    printf("The value of a is %d and The value of b is %d.\n", a, b);
    return 0;
}
