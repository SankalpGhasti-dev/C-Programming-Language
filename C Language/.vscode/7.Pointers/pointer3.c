#include <stdio.h>

int main()
{

    char i = 'A';
    char* j = &i; // j is a pointer pointing to i . ( j is a character pointer )

    float k = 89.00;
    float* k1 = &k; // &k == k1

    printf("The address of i is %p.\n", &i);
    printf("The address of i is %p.\n", j);
    printf("The address of k is %p.\n", &k);
    printf("The address of k is %p.\n", k1);

    printf("The value of address j is %d.\n", *j);
    printf("The value of address j is %d.\n", *(&i));
    printf("The value of address k is %d.\n", *k1);
    printf("The value of address k is %d.\n", *(&k1));

    return 0;
}