#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Company";
    char s1[50] = "pvt";
    char s2[50] = "Limited";

    char target[30];
    strcpy(target, st);
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains both strings as "pvtLimited"
    printf(" %s %s", s1, s2);

    return 0;
}