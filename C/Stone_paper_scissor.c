#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, cpu;
    char again = 'y';

    srand(time(NULL));

    do {
        printf("\nRock Paper Scissors\n");
        printf("0 = Rock, 1 = Paper, 2 = Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &player);

        cpu = rand() % 3;  // 0–2

        printf("You: %d  |  CPU: %d\n", player, cpu);

        if (player == cpu)
            printf("It's a tie!\n");
        else if ((player == 0 && cpu == 2) ||
                 (player == 1 && cpu == 0) ||
                 (player == 2 && cpu == 1))
            printf("You win!\n");
        else
            printf("CPU wins!\n");

        printf("Play again? (y/n): ");
        scanf(" %c", &again);   // space before %c removes leftover newline
    }
    while (again == 'y');       // loop repeats if user typed 'y'

    printf("Goodbye!\n");
    return 0;
}
