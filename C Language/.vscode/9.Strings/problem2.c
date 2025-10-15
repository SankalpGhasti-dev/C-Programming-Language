#include <stdio.h>

int strlen(char str[]);

int strlen(char str[])
{
    int i = 0;
    char c = str[i];

    while (c != '\0')
    {
        i++;
        c = str[i];
    }

    return i;
}

int main()
{
    char str[] = "Sankalp bhai";

    printf("%d\n", strlen(str));

    return 0;
}