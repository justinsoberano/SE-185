#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int luckyNumber;
    int diceOne;
    int diceTwo;
    int diceTotal;

    while(1) {

       printf("Enter a lucky number: ");
       scanf("%d", &luckyNumber); 
        if(luckyNumber == -99) {
            printf("\nEnding game\n");
            exit(0);
        }
       srand(luckyNumber);
       diceOne = rand() % 6;
       diceTwo = rand() % 6;
       diceTotal = diceOne + diceTwo;

       printf("\nPlayer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Player sum: %d\n", diceTotal);

       srand(time(NULL));
       diceOne = rand() % 6;
       diceTwo = rand() % 6;
       diceTotal = diceOne + diceTwo;

       printf("\n\nComputer Dice: %d - %d\n", diceOne, diceTwo);
       printf("Computer sum: %d\n", diceTotal);

    return 0;

    }






}