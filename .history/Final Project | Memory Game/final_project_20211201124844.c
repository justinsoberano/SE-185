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
	
	int timer;
	int numberSelected;


	initscr();
	raw();

	printw("                 |-----------------------|\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |                       |\n");
	printw("                 |-----------------------|\n");

	
	refresh();
	endwin();
	
	
	return 0;
}

///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////
