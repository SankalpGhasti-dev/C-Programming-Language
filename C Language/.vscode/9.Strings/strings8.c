#include <stdio.h>
#include <string.h>

int main()
{

    int a = strcmp("deep", "joke");     // DJ is negative..
    
   /*According to ASCII values, d(100) < j(106) so it returns negative value.
   100 is ASCII value of d and 106 is ASCII value of j */ 

    printf("%d\n", a);

    return 0;
}