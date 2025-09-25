#include <stdio.h>

int main()
{
   
    for (int i = 0; i < 10; i++)
    {
        if(i==5){
            continue;; // Skip this iteration now !!
        }
        printf("%d\n", i);
    }
}