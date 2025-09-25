// https://www.geeksforgeeks.org/dsa/ascii-table/
// https://www.ascii-code.com/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, ch);

    if (ch >= 97 && ch <= 122) //  ASCII values for lowercase letters
    {
        printf("The character is a lowercase letter.\n");
    }
    else
    {
        printf("The character is not a lowercase letter.\n");
    }
    return 0;
}