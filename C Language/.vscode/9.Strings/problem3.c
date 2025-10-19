#include <stdio.h>

char *slice(char str[], int m, int n);

char *slice(char str[], int m, int n)  // m is starting index and n is ending index
{
    int i = 0;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;    // copying the string str to ptr1 from index m
    str[n] = '\0';
    return str;
}

int main()
{
    char str[] = "Sankalp bhai";
    // so this will return 12 as there are 12 characters in the string except '\0'.

    printf("%s\n", slice(str, 1, 5));  
    // slice means to extract a part of string from index m to n-1 . we are recalling the function slice here.

    return 0;
}