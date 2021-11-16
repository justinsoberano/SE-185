#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int luckyNumber;
    int diceOne;
    int diceTwo;
    int diceTotalPlayer;
    int diceTotalComputer;
    long long int timeNumber;

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
       diceTotalPlayer = diceOne + diceTwo;

       printf("\nPlayer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Player sum: %d\n", diceTotalPlayer);

       srand(time(NULL));
       diceOne = (rand() % 5) + 1;
       diceTwo = (rand() % 5) + 1;
       diceTotalComputer = diceOne + diceTwo;

       printf("\n\nComputer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Computer sum: %d\n", diceTotalComputer);

       if (diceTotalComputer < diceTotalPlayer) {
           printf("\nYou Win!\n");
       } else if (diceTotalComputer > diceTotalPlayer) {
           printf("\nYou Lose!\n");
       } else if (diceTotalComputer == diceTotalPlayer) {
           printf("\nTie!\n");
       } else {
           printf("ERROR");
           exit(0);
       }

    return 0;

    }






}