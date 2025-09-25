#include <stdio.h>  // printf() , scanf()
#include <stdlib.h> // rand() , srand()
#include <time.h>   // time() 

int main()
{

    srand(time(0)); // Seed the random number generator

    int randomNumber = (rand() % 100) + 1;
     // Generate random no. between 1 and 100 . rand() generates a number between 0 to infinte so we use modulo operator(%) to limit it to 100 and add 1 to ensure it's between 1 and 100.
    
     int no_of_guesses = 0;
     int guessed_number;

    // print the random number
    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Guess the number: \n");
        scanf("%d", &guessed_number);

        if (guessed_number > randomNumber)
        {
            printf("Lower Number Please.\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher Number Please.\n");
        }
        else
        {
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses.\n", no_of_guesses);

    return 0;
}
