#include <stdio.h>

int *sum(int, int);
float *avg(int, int);

int *sum(int a, int b)
{
    int sum = a + b;
    int *ptr = &sum;
    printf("The sum of a and b is %d.\n", sum);
    return &sum;
}

float *avg(int a, int b)
{
    float avg = (a + b) / 2;
    float *ptr = &avg;
    printf("The avg of a and b is %f.\n", avg);
    return &avg;
}

int main()
{

    int a, b;
    int ptr_sum01;
    float ptr_sum02;

    printf("Enter a:\t\n");
    scanf("%d", &a);

    printf("Enter b:\t\n");
    scanf("%d", &b);

    ptr_sum01 = sum_two_no(a, b);

    ptr_sum02 = avg_two_no(a, b);

    printf("The address of sum a and b is %p and avg of a and b is %p.\n", ptr_sum01, ptr_sum02);

    return 0;
}

// actually this code is not correct because we are returning the address of local variable which is destroyed after function call. So this code may give garbage value or may give segmentation fault. To avoid this we can use static variable or dynamic memory allocation.
