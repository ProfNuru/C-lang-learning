#include <stdio.h>

int main(void){
    int secretNumber = 10, guess;

    do{
        printf("Guess the number: ");
        scanf(" %d", &guess);
    }while(guess != secretNumber);
    
    printf("You guessed correct");
}