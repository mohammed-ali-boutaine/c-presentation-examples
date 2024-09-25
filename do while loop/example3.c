#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int randomNumber, guess;
    // randomNumber=10;



    // Seed the random number generator
    srand(time(0));
    randomNumber = rand() % 100 + 1;  // Random number between 1 and 100


    printf("Guess the number between 1 and 100!\n");


    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Too low! Try again.\n");
        }

    }while( guess !=randomNumber);

    printf("Congratulations! You guessed the number.\n");


    return 0;
}
























// #include <stdlib.h>
// #include <time.h>

    // Seed the random number generator
    // srand(time(0));
    // randomNumber = rand() % 100 + 1;  // Random number between 1 and 100