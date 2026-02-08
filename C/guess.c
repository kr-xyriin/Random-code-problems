/* guess_simple.c - Minimal Number Guessing Game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    int target, guess, tries;
    char again = 'y';

    while (again == 'y') {
        target = rand() % 100 + 1;
        tries = 0;
        puts("I picked a number between 1 and 100. Guess it!");

        do {
            printf("Your guess: ");
            if (scanf("%d", &guess) != 1) return 0; /* simple: exit on bad input */
            tries++;
            if (guess < target) puts("Higher");
            else if (guess > target) puts("Lower");
            else printf("Correct! You took %d tries.\n", tries);
        } while (guess != target);

        printf("Play again? (y/n): ");
        scanf(" %c", &again); /* leading space skips leftover newline */
    }

    puts("Goodbye!");
    return 0;
}