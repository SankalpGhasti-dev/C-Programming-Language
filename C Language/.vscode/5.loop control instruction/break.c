#include <stdio.h>

int main()
{
   
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            break; // Exit the loop now !!
        }
        printf("%d\n", i);
    }
}