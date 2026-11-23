#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guessing_game(int random_number, int user_number, int count) {

    while (count < 5) {

        printf("\nEnter your num (0-19): ");
        if (scanf("%d", &user_number) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        if (random_number > user_number) {
            printf("TOO SMALL!\n");
            count++;
        }
        else if (random_number < user_number) {
            printf("TOO BIG!!\n");
            count++;
        }
        else {
            printf("YOU WON!\n");
            return 0;
        }
    }

    printf("\nGAME OVER! The number was %d\n", random_number);
    return 0;
}

int main(void) {

    srand(time(NULL));

    int random_number = rand() % 20;
    int user_number = 0;
    int count = 0;

    guessing_game(random_number, user_number, count);

    return 0;
}