#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int secret_num = rand() % 10 + 1;
    int guess;
    int num_guesses = 0;

    printf("Hello,\nCan you guess the secret number between 1 and 10 that I'm thinking of?\n");

    do{
        printf("\nWhat's the secret number? ");
        scanf("%d", &guess);
        if(guess < secret_num){
            printf("The secret number is more than %d\n", guess);
        } else{
            printf("The secret number is less than %d\n", guess);
        }
        num_guesses+=1;
    } while(guess != secret_num);
    printf("Yes! The secret number is %d\n", secret_num);
    printf("It took you %d guesses\n", num_guesses);
}