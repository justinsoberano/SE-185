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
        if(luckyNumber = -99) {
            printf("\nEnding game\n");
            exit();
        }
       srand(luckyNumber);
       diceOne = rand() % 6;
       diceTwo = rand() % 6;
       diceTotal = diceOne + diceTwo;

       printf("Player Dice: %d - %d", diceOne, diceTwo);
       printf("PLayer sum: %d", diceTotal);


       printf("Enter a lucky number: ");
       scanf("%d", &luckyNumber); 
       srand(luckyNumber);
       diceOne = rand() % 6;
       diceTwo = rand() % 6;
       diceTotal = diceOne + diceTwo;

       printf("Player Dice: %d - %d", diceOne, diceTwo);
       printf("PLayer sum: %d", diceTotal);



    }






}