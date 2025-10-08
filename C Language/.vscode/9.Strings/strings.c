#include <stdio.h>

// strings is an collection of characters terminated by a null character '\0'.

int main()
{

    // char st[]={'a', 'b', 'c', 'd','\0'};

    char st[] = "abcd"; // This is the same as above line.
    
    for (int i = 0; i < 4; i++)
    {
        printf("Character is %c.\n", st[i]);
    }

    return 0;
}
