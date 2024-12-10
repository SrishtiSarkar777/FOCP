int main() {
    int userChoice, computerChoice;
    srand(time(NULL));

    printf("Welcome to Rock, Paper, Scissors!\n");

    do {
        userChoice = getUserChoice();

        if (userChoice < 1 || userChoice > 3) {
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            continue;
        }

        computerChoice = getComputerChoice();

        printf("You chose: ");
        switch (userChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
        }

        printf("Computer chose: ");
        switch (computerChoice) {
            case 1:
                printf("Rock\n");
                break;
            case 2:
                printf("Paper\n");
                break;
            case 3:
                printf("Scissors\n");
                break;
        }

        determineWinner(userChoice, computerChoice);

        // Ask if the user wants to play again
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &userChoice);

    } while (userChoice == 1);

    printf("Thanks for playing Rock, Paper, Scissors!\n");

    return 0;
}
