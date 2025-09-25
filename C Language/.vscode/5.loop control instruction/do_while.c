#include <stdio.h>

int main()
{
    int i = 0;   // intialization 
    do
    {
        printf("The value of i is %d\n", i);
        i++;   // increment 
    
    } while (i < 4);  // condition 
    
    // it will print the value of i at least once even if the condition is false initially.

    return 0;
}