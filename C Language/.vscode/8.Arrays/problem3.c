#include <stdio.h>

int main()
{

    int arr[10];
    int Number;
    printf("Enter Number\t\n");
    scanf("%d",&Number);

    

    for (int i = 0; i < 10; i++)
    {
        arr[i] = Number * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {

        printf("The value of %d X %d = %d\n",Number, (i + 1), arr[i]);
    }

    return 0;
}
