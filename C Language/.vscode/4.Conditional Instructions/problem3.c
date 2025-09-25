#include <stdio.h>

int main()
{
    int Income;
    float Tax;
    printf("Enter Income: ");
    scanf("%d", &Income);

    if (Income < 250000)
    {
    }
    else if (Income <= 500000 && Income >= 250000)
    {
        Tax = 0.05 * (Income - 250000);
    }
    else if (Income <= 1000000 && Income >= 500000)
    {
        Tax = 0.05 * (500000 - 250000) + 0.2 * (Income - 500000);
    }
    else if (Income > 1000000)
    {
        Tax = 0.3 * (500000 - 250000);
        +0.2 * (1000000 - 500000) + 0.3 * (Income - 1000000);
    }
    printf("The total tax you need to pay is %.2f\n", Tax);

    return 0;
}
