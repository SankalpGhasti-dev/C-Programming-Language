#include <stdio.h>

/*
If you use pointer like (*a) then use & in function call like (&a) and If you use normal variable (a) then use just variable name (a)
*/

int *sum(int, int);

int *sum(int a, int b)
{
    int s = (a + b);
    int *ptr_01 = &s;
    printf("The sum of a and b is %d.\n", s);
    return ptr_01;
}

float *avg(int, int);

float *avg(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr_02 = &avg;
    printf("The avg of a and b is %.2f.\n", avg);
    return ptr_02;
}

int main()
{

    int a, b;
    int ptr_01;
    float ptr_02;

    printf("Enter a:\t\n");
    scanf("%d", &a);

    printf("Enter b:\t\n");
    scanf("%d", &b);

    // when calling function in main we must use different function names.

    ptr_01 = sum(a, b);
    ptr_02 = avg(a, b);

    printf("The address of sum is &d and of avg is %u.\n", ptr_01, ptr_02);

    return 0;
}

// actually this code is not correct because we are returning the address of local variable which is destroyed after function call. So this code may give garbage value or may give segmentation fault. To avoid this we can use static variable or dynamic memory allocation.