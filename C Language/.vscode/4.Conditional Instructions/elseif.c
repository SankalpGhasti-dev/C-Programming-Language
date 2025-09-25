#include <stdio.h>

int main()
{
    int age;
    printf("Enter yout age\n");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("you can drive and you are a senior citizen\n");
    }
    else if (age > 18)
    {
        printf("you can drive\n");
    }

    else
    {
        printf("you cannot drive\n");
    }
}