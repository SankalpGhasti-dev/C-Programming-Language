#include <stdio.h>

/* Array allow to store muliple values in a single variable .*/

int main()
{   
    int marks[90]; // we can go all the way to marks 90.

    marks[1] = 45;   // 1 in 90 out off stored value 45
    marks[2] = 23;   // 2 in 90 out off stored value 23

    printf("Mark 1 and Mark 2 is %d, %d.\n", marks[1], marks[2]);

    return 0;
}