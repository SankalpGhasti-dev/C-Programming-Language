#include <stdio.h>

// In this program we have to take name without spaces. If we give name with spaces then it will take only first part of the name.

//If we want to take full name with spaces then we have to use different functions. because this function can't store spaces.

int main()
{
    char Name[50];

    printf("Enter your name:\n");
    scanf("%s", &Name);                  // %s is used for string input 

    printf("Your name is %s.\n", Name);

    return 0;
}