#include <stdio.h>

int main()
{
    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/

    int a, b, c; // Declare variables for marks in three subjects
    printf("Enter a:\n");
    scanf("%d", &a);

    printf("Enter b:\n");
    scanf("%d", &b);

    printf("Enter c:\n");
    scanf("%d", &c);

    printf("The marks are %d,%d and %d \n", a, b, c);

    if (a < 33 || b < 33 || c < 33)
    {
        printf("You are failed due to less marks in individual subject\n");
    }
    else if ((a + b + c) / 3 < 40)
    {
        printf("YOu are failed due to less percentage \n");
    }
    else
    {
        printf("You are passed \n");
    }

    return 0;
}