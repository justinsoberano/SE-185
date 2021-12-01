#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ncurses.h>

int main(){
	
	int timerMAX = 1000;
	int timer = 0;
	char ch;
	char str[25];
	int numberOfRounds = 0;
	char strPlayer[25];

	char upper = 'w';
	char lefter = 'a';
	char downer = 's';
	char righter = 'd';

	printf("\n\nWelcome to the Memory game.\n");
	printf("To start the game press 'g'.\n");
	printf("In the game various shapes will appear with a square around it\n");
	printf("You must remember the shapes that are in a square and repeat the order.\n");
	printf("W - UP\nA - LEFT\nS - DOWN\nD - RIGHT\n");
	
	printf("HIGH SCORE TABLE GOES HERE NEED TO FINISH\n\n\n\n\n\n");

	printf("What would you like to do? ");
	scanf(" %c", &ch); // waiting for user input

	if (ch == 'g') { // if user input is g, run the game.
		for (int i = 0; i <= numberOfRounds; i++) {

			numberOfRounds++;
			srand(time(NULL)); // seeds random
			int numberSelected = rand() % 4 + 1; // randomly generates a number between 1 - 4

			initscr(); // initiates ncurses library
			raw(); // idk what this does

			if (numberSelected == 1) { // if number selected is 1 run the triangle
			
			timer += 1; // increase timer by 1 for ever tick

	        printw("                 -----------------------\n");
	        printw("                 |          ^          |\n");
	        printw("                 |         ^ ^         |\n");
	        printw("                 |        ^ ^ ^        |\n");
	        printw("                 |       ^ ^ ^ ^       |\n");
	        printw("                 |      ^ ^ ^ ^ ^      |\n");
	        printw("                 |     ^ ^ ^ ^ ^ ^     |\n");
	        printw("                 |    ^ ^ ^ ^ ^ ^ ^    |\n");
	        printw("                 |   ^ ^ ^ ^ ^ ^ ^ ^   |\n");
	        printw("                 -----------------------\n");
	        printw("\n");
	        printw("\n");
	        printw("   HHHHHHHHHHHHHHHHH                        ooo          \n");
	        printw("   HHHHHHHHHHHHHHHHH                     oo     oo       \n");
	        printw("   HH             HH                   oo         oo     \n");
	        printw("   HH             HH                  oo           oo    \n");
	        printw("   HH             HH                  oo           oo    \n");
	        printw("   HH             HH                   oo         oo     \n");
	        printw("   HHHHHHHHHHHHHHHHH                     oo     oo       \n");
	        printw("   HHHHHHHHHHHHHHHHH                        ooo          \n");
	        printw("\n");
	        printw("\n");
	        printw("\n");
	        printw("                         X      X       \n");
	        printw("                          X    X        \n");
	        printw("                           X  X         \n");
	        printw("                            XX          \n");
	        printw("                            XX          \n");
	        printw("                           X  X         \n");
	        printw("                          X    X        \n");
	        printw("                         X      X       \n");
	        printw("\n");
		}

			if (timer > timerMAX) { //once the timer reaches the max it will clear screen and reset timer to 0
				clear();
				timer = 0;
			}
			if (numberSelected == 2) { 
			
			timer += 1;

	        printw("\n");
	        printw("                            ^           \n");
	        printw("                           ^ ^          \n");
	        printw("                          ^ ^ ^         \n");
	        printw("                         ^ ^ ^ ^        \n");
	        printw("                        ^ ^ ^ ^ ^       \n");
	        printw("                       ^ ^ ^ ^ ^ ^      \n");
	        printw("                      ^ ^ ^ ^ ^ ^ ^     \n");
	        printw("                     ^ ^ ^ ^ ^ ^ ^ ^    \n");
			printw("\n");
	        printw("\n");
	        printw("\n");
	        printw("-----------------------\n");
	        printw("|  HHHHHHHHHHHHHHHHH  |                     ooo          \n");
	        printw("|  HHHHHHHHHHHHHHHHH  |                  oo     oo       \n");
	        printw("|  HH             HH  |                oo         oo     \n");
	        printw("|  HH             HH  |               oo           oo    \n");
	        printw("|  HH             HH  |               oo           oo    \n");
	        printw("|  HH             HH  |                oo         oo     \n");
	        printw("|  HHHHHHHHHHHHHHHHH  |                  oo     oo       \n");
	        printw("|  HHHHHHHHHHHHHHHHH  |                     ooo          \n");
	        printw("-----------------------\n");
	        printw("\n");
	        printw("\n");
	        printw("                         X      X       \n");
	        printw("                          X    X        \n");
	        printw("                           X  X         \n");
	        printw("                            XX          \n");
	        printw("                            XX          \n");
	        printw("                           X  X         \n");
	        printw("                          X    X        \n");
	        printw("                         X      X       \n");
	        printw("\n");
			}
			if (timer > timerMAX) {
				clear();

				timer = 0;
			}
			if (numberSelected == 3) {
			
			timer += 1;
			initscr();
			raw();

			printw("\n");
	        printw("                            ^           \n");
	        printw("                           ^ ^          \n");
	        printw("                          ^ ^ ^         \n");
	        printw("                         ^ ^ ^ ^        \n");
	        printw("                        ^ ^ ^ ^ ^       \n");
	        printw("                       ^ ^ ^ ^ ^ ^      \n");
	        printw("                      ^ ^ ^ ^ ^ ^ ^     \n");
	        printw("                     ^ ^ ^ ^ ^ ^ ^ ^    \n");
			printw("\n");
	        printw("\n");
	        printw("\n");
	        printw("   HHHHHHHHHHHHHHHHH                        ooo          \n");
	        printw("   HHHHHHHHHHHHHHHHH                     oo     oo       \n");
	        printw("   HH             HH                   oo         oo     \n");
	        printw("   HH             HH                  oo           oo    \n");
	        printw("   HH             HH                  oo           oo    \n");
	        printw("   HH             HH                   oo         oo     \n");
	        printw("   HHHHHHHHHHHHHHHHH                     oo     oo       \n");
	        printw("   HHHHHHHHHHHHHHHHH                        ooo          \n");
	        printw("\n");
	        printw("\n");
	        printw("\n");
			printw("                 |---------------------|\n");
			printw("                 |       X      X      |\n");
			printw("                 |        X    X       |\n");
			printw("                 |         X  X        |\n");
			printw("                 |          XX         |\n");
			printw("                 |          XX         |\n");
			printw("                 |         X  X        |\n");
			printw("                 |        X    X       |\n");
			printw("                 |       X      X      |\n");
			printw("                 |---------------------|\n");
	        printw("\n");
			}
			if (timer > timerMAX) {
				clear();

				timer = 0;
			}
			if (numberSelected == 4) {
			
			timer += 1;
			initscr();
			raw();

	        printw("\n");
	        printw("                            ^           \n");
	        printw("                           ^ ^          \n");
	        printw("                          ^ ^ ^         \n");
	        printw("                         ^ ^ ^ ^        \n");
	        printw("                        ^ ^ ^ ^ ^       \n");
	        printw("                       ^ ^ ^ ^ ^ ^      \n");
	        printw("                      ^ ^ ^ ^ ^ ^ ^     \n");
	        printw("                     ^ ^ ^ ^ ^ ^ ^ ^    \n");
			printw("\n");
	        printw("\n");
	        printw("                                  -----------------------\n");
	    	printw("   HHHHHHHHHHHHHHHHH              |         ooo         |\n");
			printw("   HHHHHHHHHHHHHHHHH              |      oo     oo      |\n");
			printw("   HH             HH              |    oo         oo    |\n");
			printw("   HH             HH              |   oo           oo   |\n");
			printw("   HH             HH              |   oo           oo   |\n");
			printw("   HH             HH              |    oo         oo    |\n");
			printw("   HHHHHHHHHHHHHHHHH              |      oo     oo      |\n");
			printw("   HHHHHHHHHHHHHHHHH              |         ooo         |\n");
			printw("                                  -----------------------\n");
	        printw("\n");
	        printw("\n");
 			printw("                         X      X       \n");
	        printw("                          X    X        \n");
	        printw("                           X  X         \n");
	        printw("                            XX          \n");
	        printw("                            XX          \n");
	        printw("                           X  X         \n");
	        printw("                          X    X        \n");
	        printw("                         X      X       \n");
	        printw("\n");
			}

			if (timer > timerMAX) {
				clear();

				timer = 0;
			}

			if (i == numberOfRounds) { // if the number of rounds equals to i, pause the game for user input
				endwin(); // ends ncurses 
				printf("What was the order? \n");
				scanf("%s", strPlayer);
				int correct = strcmp(str, strPlayer);
					if (correct == 1 ) { // compares the player string to the generated string
						printf("You passed round %d.\n", i);
						printf("Get ready for the next round.\n");
						timer += 1;
						if(timer == timerMAX) {
							continue;
						}
					}
			}
		}
			
		}
		return 0;
	}


	/*
	initscr();
	raw();


	
	printw("                 -----------------------\n");
	printw("                 |          ^          |\n");
	printw("                 |         ^ ^         |\n");
	printw("                 |        ^ ^ ^        |\n");
	printw("                 |       ^ ^ ^ ^       |\n");
	printw("                 |      ^ ^ ^ ^ ^      |\n");
	printw("                 |     ^ ^ ^ ^ ^ ^     |\n");
	printw("                 |    ^ ^ ^ ^ ^ ^ ^    |\n");
	printw("                 |   ^ ^ ^ ^ ^ ^ ^ ^   |\n");
	printw("                 -----------------------\n");
	printw("\n");
	printw("-----------------------           -----------------------\n");
	printw("|  HHHHHHHHHHHHHHHHH  |           |         ooo         |\n");
	printw("|  HHHHHHHHHHHHHHHHH  |           |      oo     oo      |\n");
	printw("|  HH             HH  |           |    oo         oo    |\n");
	printw("|  HH             HH  |           |   oo           oo   |\n");
	printw("|  HH             HH  |           |   oo           oo   |\n");
	printw("|  HH             HH  |           |    oo         oo    |\n");
	printw("|  HHHHHHHHHHHHHHHHH  |           |      oo     oo      |\n");
	printw("|  HHHHHHHHHHHHHHHHH  |           |         ooo         |\n");
	printw("-----------------------           -----------------------\n");
	printw("\n");
	printw("                 |---------------------|\n");
	printw("                 |       X      X      |\n");
	printw("                 |        X    X       |\n");
	printw("                 |         X  X        |\n");
	printw("                 |          XX         |\n");
	printw("                 |          XX         |\n");
	printw("                 |         X  X        |\n");
	printw("                 |        X    X       |\n");
	printw("                 |       X      X      |\n");
	printw("                 |---------------------|\n");

	getch();
	endwin();
	*/
	
///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////
