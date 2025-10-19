#include <stdio.h>
#include <string.h>

int mystrlen(char str[])
{

    int i = 0;
    char c = str[i];

    while (c != '\0')
    {

        c = str[i];
        i++;
    }

    return i;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char source[] = "Sankalp";
    char target[30];
    strcpy(target, source);
    printf("%s %s\n", source, target);

    return 0;
}