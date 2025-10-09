#include <stdio.h>
#include <string.h>

int main()
{

    char st[] = "Company";

    char target[30];
    strcpy(target, st); // target now contains copy of st means "Company"
    
    printf("%s %s\n", st, target);

    return 0;
}