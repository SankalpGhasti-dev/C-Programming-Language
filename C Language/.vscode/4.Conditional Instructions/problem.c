#include <stdio.h>

int main()
{

    int a = 10;
    if (a = 11)

        // in C, a single '=' is an assignment, not a comparison ... in simple words, if you want to check if a is equal to 11, you should use '==' instead of '='

        printf("I am 11");
    else
        printf("I am not 11");
}
