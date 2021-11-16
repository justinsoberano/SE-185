#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int luckyNumber;
    int diceOne;
    int diceTwo;
    int diceTotalPlayer;
    int diceTotalComputer;
    time_t t;

    while(1) {

       printf("Enter a lucky number: ");
       scanf("%d", &luckyNumber); 
        if(luckyNumber == -99) {
            printf("\nEnding game\n");
            exit(0);
        }
       srand(luckyNumber);
       diceOne = (rand() % 5) + 1;
       diceTwo = (rand() % 5) + 1;
       diceTotal = diceOne + diceTwo;

       printf("\nPlayer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Player sum: %d\n", diceTotalPlayer);

       srand( (unsigned) time(&t) );
       diceOne = (rand() % 5) + 1;
       diceTwo = (rand() % 5) + 1;
       diceTotal = diceOne + diceTwo;

       printf("\n\nComputer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Computer sum: %d\n", diceTotalComputer);

       if (diceTotalComputer < diceTotalPlayer) {
           printf("You Win!");
       } else if (diceTotalComputer > diceTotalPlayer) {
           printf("You Lose!");
       } else if (diceTotalComputer == diceTotalPlayer) {
           printf("Tie!");
       } else {
           printf("ERROR");
           exit(0);
       }

    return 0;

    }






}