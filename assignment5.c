#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6  // Number of incorrect tries before the game is over

void print_hangman(int tries) {
    // Display the hangman image based on the number of incorrect tries
    printf("\n");
    switch (tries) {
        case 0:
            printf("  -----\n  |   |\n      |\n      |\n      |\n      |\n--------\n");
            break;
        case 1:
            printf("  -----\n  |   |\n  O   |\n      |\n      |\n      |\n--------\n");
            break;
        case 2:
            printf("  -----\n  |   |\n  O   |\n  |   |\n      |\n      |\n--------\n");
            break;
        case 3:
            printf("  -----\n  |   |\n  O   |\n /|   |\n      |\n      |\n--------\n");
            break;
        case 4:
            printf("  -----\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n--------\n");
            break;
        case 5:
            printf("  -----\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n--------\n");
            break;
        case 6:
            printf("  -----\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n--------\n");
            break;
    }
}

int main() {
    char word[] = "programming";  // Word to guess (you can change it)
    int word_length = strlen(word);
    char guessed_word[word_length];
    int tries = 0;
    int correct_guesses = 0;
    int incorrect_guesses = 0;
    char guess;
    int game_over = 0;

    // Initialize guessed_word with underscores
    for (int i = 0; i < word_length; i++) {
        guessed_word[i] = '_';
    }

    // Start the game
    printf("Welcome to Hangman Game!\n");
    printf("The word to guess has %d letters.\n", word_length);

    // Main game loop
    while (!game_over) {
        printf("\nCurrent word: ");
        for (int i = 0; i < word_length; i++) {
            printf("%c ", guessed_word[i]);
        }

        printf("\nYou have %d incorrect guesses remaining.\n", MAX_TRIES - incorrect_guesses);
        print_hangman(incorrect_guesses);

        printf("Enter your guess (a letter): ");
        scanf(" %c", &guess);
        guess = tolower(guess);  // Convert to lowercase for consistency

        // Check if the guessed letter is in the word
        int letter_found = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess) {
                guessed_word[i] = guess;
                letter_found = 1;
                correct_guesses++;
            }
        }

        // If the guess was incorrect
        if (!letter_found) {
            incorrect_guesses++;
        }

        // Check if the player has won
        if (correct_guesses == word_length) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            game_over = 1;
        }

        // Check if the player has lost
        if (incorrect_guesses == MAX_TRIES) {
            printf("\nGame over! You've run out of tries. The word was: %s\n", word);
            game_over = 1;
        }
    }

    return 0;
}
