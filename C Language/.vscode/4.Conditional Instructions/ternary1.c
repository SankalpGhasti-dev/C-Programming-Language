#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Enter marks:");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {
        printf("grade = 'A'");
    }
    else if (marks <= 80 & marks >= 70)
    {
        printf("grade = 'B'");
    }
    else if (marks <= 70 && marks >= 60)
    {
        printf("grade = 'C'");
    }
    else if (marks <= 60 && marks >= 50)
    {
        printf("grade = 'D'");
    }
    else if (marks <= 50)
    {
        printf("grade = 'F'");
    }
}