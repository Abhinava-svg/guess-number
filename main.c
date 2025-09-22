#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 100;
    int guessed_number;

    // print the random number
    // printf("Random number: %d\n", randomnumber);

    do
    {
        printf("guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>random_number){
            printf("lower number please!\n");
        }
        else if(guessed_number<random_number){
            printf("higher number please!\n");
        }
        else{
            printf("congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != random_number);

    printf("you guessed the number in %d guesses", no_of_guesses);

    return 0;
}
