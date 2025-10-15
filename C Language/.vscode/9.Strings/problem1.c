#include <stdio.h>
#include <string.h>

int main()
{
    char name[8];   // 7 chars from index no. 0 to 7 + '\0' at index no. 8

    // scanf("%s", &name);

    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &name[i]);
        fflush(stdin);
        // to clear the buffer menas to remove the \n from the buffer.
    }

    name[7] = '\0';  // at index no. 8 we have to put '\0' to terminate the string.

    printf("%s\n", name);

    return 0;
}
