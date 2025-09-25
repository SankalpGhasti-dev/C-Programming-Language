#include <stdio.h>

int main()
{

    int i = 0;
    while (2 < 11)
     // This condition is always true, leading to a an infinite loop or endless loop.
    {
        printf("the value of i is %d\n", i);
        i++;
    }
}
