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

       printf("Computer Dice: %d - %d", diceOne, diceTwo);
       printf("Computer sum: %d", diceTotal);

       srand(time);
       diceOne = rand() % 6;
       diceTwo = rand() % 6;
       diceTotal = diceOne + diceTwo;

       printf("Computer Dice: %d - %d", diceOne, diceTwo);
       printf("Computer sum: %d", diceTotal);

    return 0;

    }






}