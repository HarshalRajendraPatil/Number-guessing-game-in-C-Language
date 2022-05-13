# include<stdio.h>
# include<time.h>
# include<stdlib.h>

int main(){
    // Declearing the variables and their values.
    int correct_number, guess_number, isAlive = 1, chances = 10;

    // Greetings and Precision.
    printf("\nWelcome to guess the number game.\n");
    printf("You have to enter any number between 1 to 100.\n");
    printf("Remember you have only 10 number of chances.\n\n");
    printf("===============X===============X===============X===============X===============");

    // Generates a random number.
    srand(time(0));
    correct_number = (rand() % 100) + 1;

    while(isAlive != 0){
        
        // Getting an user input.
        printf("\n\nPlease enter any guess number between 1 to 100:\n");
        scanf("%d", &guess_number);

        // printf("%d", guess_number);
        if(chances > 1){
                if(guess_number > correct_number){
                    chances--;
                    printf("Please enter a smaller number\n");
                    printf("You have %d number of chances left\n", chances);
                    printf("Your previous input was %d\n", guess_number);
                }
                else if(guess_number < correct_number){
                    chances--;
                    printf("Please enter a larger number\n");
                    printf("You have %d number of chances left\n", chances);
                    printf("Your previous input was %d\n", guess_number);
                }
                else{
                    printf("Congratulations!! \nIt took you %d number of chances to win.\n", 10 - chances + 1);
                    printf("===============X===============X===============X===============X===============\n");
                    chances = 10;
                    printf("Do you want to play again.\nIf yes press '1' else press '0'.");
                    scanf("%d", &isAlive);
                    switch(isAlive){
                        case 1:
                            srand(time(0));
                            correct_number = (rand() % 100) + 1;
                            break;

                        case 0:
                            printf("\nThanks for playing.");
                            exit(0);

                        default:
                            printf("\nInvalid option.");
                            printf("\nThe game has been closed successfully.");
                    }
                }
        }
        else{
            printf("You lost.\nThe correct number was %d\n", correct_number);
            printf("===============X===============X===============X===============X===============\n");
            chances = 10;
            printf("Do you want to play again.\nIf yes press '1' else press '0'.");
            scanf("%d", &isAlive);
            switch(isAlive){
                case 1:
                    srand(time(0));
                    correct_number = (rand() % 100) + 1;
                    break;

                case 0:
                    printf("\nThanks for playing.");
                    exit(0);

                default:
                    printf("\nInvalid option.");
                    printf("\nThe game has been closed successfully.");
            }
        }

    }

    
    return 0;
}
