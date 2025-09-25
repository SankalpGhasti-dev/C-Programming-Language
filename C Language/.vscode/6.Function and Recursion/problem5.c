#include <stdio.h>

// 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 ... This is fibonacci series . It basically addition of two previous number of series .

int fibonacci(int); // Function Prototype

int fibonacci(int Number) // Function Declaration
{

    if (Number == 1 || Number == 2) // If Number=1 || Number=2 then return
    {
        {
            return Number - 1;
        }
    }
    else // remember to use it if use if .... 
    {

        return fibonacci(Number - 1) + fibonacci(Number - 2);
    }
}

int main()
{

    int Number;
    printf("Enter Number: \n");
    scanf("%d", &Number);

    printf("The value of fibonacci series at %d is %d.", Number, fibonacci(Number));
    return 0;
}
