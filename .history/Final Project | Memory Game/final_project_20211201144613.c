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
	scanf(" %c", &ch);

	if (ch == 'g') {
		for (int i = 0; i <= numberOfRounds; i++) {

			numberOfRounds++;
			srand(time(NULL));
			int numberSelected = rand() % 4 + 1;

			initscr();
			raw();

			if (numberSelected == 1) {
			
			timer += 1;

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

			if (timer > timerMAX) {
				clear();
				strcat(str[25], upper);
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

			if (i == numberOfRounds) {
				endwin(); // ends ncurses 
				printf("What was the order? \n");
				scanf(%s, strPlayer[25]);
				int correct = strcmp(str[25], strPlayer[25]);
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
	
	return 0;
}

///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////
