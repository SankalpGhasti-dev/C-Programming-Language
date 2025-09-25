#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < ((2 * i) + 1); j++)

        // 2*i + 1 this formula for if n=1 then print 3 stars, n=3 then print 5 stars

        {
            printf("*");
        }
       
        printf("\n");
    }

    return 0;
}
