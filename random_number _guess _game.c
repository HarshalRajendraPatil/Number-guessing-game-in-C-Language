# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int random_number, player_guesses, number_of_guesses = 0, is_alive, play_again;
    srand(time(0));
    random_number = rand()%100 + 1; //Generates a random number between 1 to 100
    // printf("The random number is %d", random_number);
    is_alive = 1; 

    printf("Welcome to guess no. game\n");
    printf("Guess a number between 1 to 100\n");
    printf("You have 10 no. of guesses\n");

    while(is_alive){
        printf("Please enter between between 1 to 100:-\n");
        scanf("%d", & player_guesses);
        // printf("%d", player_guesses);

        if(player_guesses > random_number){
            printf("please enter a lower number.\n");
        }
        else if  (player_guesses < random_number) {
            printf("please enter a greater number.\n");
        }
        else{
            printf("Congrates, You won the game.\n");
            printf("It took you %d number of guesses\n", number_of_guesses);
            is_alive = 0;
            printf("do you want to play again. (2 for yes and 03for no)\n");
            scanf("%c", &play_again);
            if(play_again != 1){
                printf("Thank you for playing the game\n");
            }
            else{
                play_again = 1;
            }

        }
        number_of_guesses += 1;
    }
    

    return 0;
}