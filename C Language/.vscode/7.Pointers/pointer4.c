#include <stdio.h>

int main()
{

    int i = 8;
    int *j = &i; //this address store value of i .
    int **k = &j; // this address store address of i . 

    printf("The value of i is %d.\n", i);  
    printf("The value of i is %d.\n", *j);
    printf("The value of i is %d.\n", *(&i)); // means at i address what is the value.
    printf("The value of i is %d.\n", **(&j));

    return 0;
}