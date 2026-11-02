#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int main(void) {
    int secret, guess = 0, attempts = 0;
    int c;

    /* Seed the random generator so the number is different every run */
    srand((unsigned int)time(NULL));
    secret = rand() % MAX_NUMBER + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I am thinking of a number between 1 and %d. Can you guess it?\n\n", MAX_NUMBER);

    do {
        printf("Your guess: ");

        /* If the user types something that is not a number, ask again */
        if (scanf("%d", &guess) != 1) {
            while ((c = getchar()) != '\n' && c != EOF) {
                /* clear the bad input */
            }
            if (c == EOF) {
                return 1;
            }
            printf("Please enter a valid number.\n");
            continue;
        }

        attempts++;

        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("\nCorrect! You guessed it in %d attempt(s).\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
