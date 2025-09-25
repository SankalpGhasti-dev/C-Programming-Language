#include <stdio.h>

int main()
{

    // Write a program to check whether a given number is prime or not using do while loop.

    int i = 2; // intialization 
    int n;
    int not_prime = 0; // flag variable to check if n is not prime . 0 means prime, 1 means not prime .

    printf("Enter n: \n");
    scanf("%d", &n);

    if (n == 0 || n == 1) // 0 & 1 are not prime numbers.
    {
        not_prime = 1;
    }
    else
    {

        do
        {
            if (n % i == 0 && n != 2)
            {

                not_prime = 1;
                break; // exit if the divisor is found
            }
            
            i++; // increment 

        } while (i < n); // condition 
    }

    if (not_prime) // it is short of if (not_prime == 1)
    {
        printf("%d is not prime.\n", n);
    }
    else // it is equivalent to else if (not_prime == 0)
    {
        printf("%d is a prime.\n", n);
    }

    return 0;
}