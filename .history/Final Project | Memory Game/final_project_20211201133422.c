#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ncurses.h>


//////////////////////
//Struct Definition//
////////////////////


/////////////////////////////////////
//User Defined Functions Prototype //
//List prototypes here and define  //
//them below the main function     //
/////////////////////////////////////

int main(){
	
	int timerMAX = 1000;
	int timer = 0;
	char startGame;
	srand(time(NULL));
	int numberSelected = rand() % 4 + 1;
	printf("Welcome to the Memory game.\n");
	printf("To start the game press 'g'.\n");
	printf("In the game various shapes will appear with a square around it\n");
	printf("You must remember the shapes that are circledand repeat the order.\n");
	printf("W - UP\n
			A - LEFT\n
			S - DOWN\n
			D - RIGHT\n");
	
	printf("HIGH SCORE TABLE GOES HERE NEED TO FINISH\n\n\n\n\n\n");

	printf("What would yoou like to do?");
	scanf("%c", &startGame);




	if (startGame == 'g') {
		while (1) {
			if (numberSelected == 1)
			
			timer += 1;
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
			if (timer > timerMAX) {
				clear();
			}
		}
	}


	
	initscr();
	raw();


	/*
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
