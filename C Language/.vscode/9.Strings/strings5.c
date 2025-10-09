#include <stdio.h>
#include <string.h> // for strlen()

int main()
{

    char str[] = "Happy";

    printf("%d", strlen(str));
    
    // Prints length of string excluding null character.

    return 0;
}
