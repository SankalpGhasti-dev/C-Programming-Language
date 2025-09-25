#include <stdio.h>

int main()
{
    int i;
    for (int i = 5; i; i--) // condition i is an non-zero value, so it will run until i becomes 0 . A non-zero number simply means any number that is not equal to 0.
    {
        printf("%d\n", i);
    }
    return 0;
}