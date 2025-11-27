#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function prototypes */
void display_rules(void);
int generate_random_number(int min, int max);
int get_player_guess(void);
int check_guess(int secret_number, int guess);

void display_rules(void)
{
    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Your job is to guess it correctly.\n");
    printf("After each guess, you will be told if it's too high or too low.\n");
    printf("Good luck!\n\n");
}

int generate_random_number(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int get_player_guess(void)
{
    int guess;
    int valid;

    printf("Enter your guess: ");

    valid = scanf("%d", &guess);

    while (valid != 1)
    {
        printf("Invalid input! Please enter a number: ");
        while (getchar() != '\n') ; /* clear input buffer */
        valid = scanf("%d", &guess);
    }

    return guess;
}

int check_guess(int secret_number, int guess)
{
    if (guess < secret_number)
    {
        printf("Too low! Try again.\n");
        return 0;
    }
    else if (guess > secret_number)
    {
        printf("Too high! Try again.\n");
        return 0;
    }
    else
    {
        printf("Congratulations! You guessed the number!\n");
        return 1;
    }
}

int main(void)
{
    int secret_number;
    int guess;
    int attempts = 0;
    int correct = 0;

    srand(time(NULL)); /* seed random generator once */

    display_rules();

    secret_number = generate_random_number(1, 100);

    while (!correct)
    {
        guess = get_player_guess();
        attempts++;
        correct = check_guess(secret_number, guess);
    }

    printf("It took you %d attempts.\n", attempts);

    return 0;
}
