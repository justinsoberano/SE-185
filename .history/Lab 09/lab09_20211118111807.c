// Lab 09 DS4Talker Skeleton Code       

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#define WORDLENGTH 11
#define MAXWORDS 100
#define DEBUG 1   // Set this to 0 to disable debug output
#define PLYR '>'
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define NONE 4
#define TRUE 1
#define FALSE 0
#define WAIT_TIME 300
#define PRESS_WAIT_TIME 600

// Reads words from the file into WL and trims the whitespace off of the end
// DO NOT MODIFY THIS FUNCTION
int readWords(char* WL[MAXWORDS], char* file_name);

// modifies str to trim white space off the right side
// DO NOT MODIFY THIS FUNCTION
void trimws(char* str);
void draw_character(int x, int y, char use);
void undo(char arr[80], int num);
void clear(char *arr, int len);
void back (char arr[80]);


int main(int argc, char* argv[]) {
	char* wordlist[MAXWORDS];
	int wordcount;
	int i;

	wordCount = readWords(wordlist, argv[1]);

	if (DEBUG) {
		printf("Read %d words from %s \n", wordCount, argv[1]);
		for (i = 0; i < wordCount; i++) {
			printf("%s,", wordlist[i]);

		}
		printf("\n");
	}


    int b[6];
    int j[6];

    int t, prev_t, x, y, trace, ax, ay, az, move, first, place, pressed;
    ay = 0, ax = 0;

    char statement[80];
    clear(statement, 80);
    strcpy(statement, "");

    char currword[11];
    char tmp[15];
    clear(tmp, 15);

    clear(currword,11);
    initscr();
    refresh();
    first = TRUE;
    pressed = FALSE;

    int swtch = 1;
    char mods[100][80];
    int rev = 0;

    do {
        scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &t, &b[0], &b[1], &b[2], &b[3], &b[4], &b[5], &j[0], &j[1], &j[2], &j[3], &j[4], &j[5]);
        if (first == TRUE) {
            prev_t = t;
            first = FALSE;
        }
        if (t - prev_t >= WAIT_TIME) {
            move = TRUE;
            if (swtch == 1) {
                pressed = false;
                swtch = 0;
            }
            else if (swtch == 0) {
                swtch = 1;
            }
            prev_t = t;
        }
        else {
            move = false;
        }


        y = 0, x = 0, trace = 0;
        for (i = 0; i < wordCount; i++) {
            mvprintw(y, x, "%15s", wordlist[i]);
            x += 15;
            trace++;
            if (trace == 5) {
                y++;
                x = 0;
                trace = 0;
            }
        }

        mcprintw(ay, ax, "%c", PLYR);
        az = NONE;
        if (j[0] > 0) { 
            az = DOWN;
        } else if (j[1] > 0) { 
            az = UP;
        } else if (j[2] > 0) { 
            az = LEFT;
        } else if (j[3] > 0) { 
            az = RIGHT;
        } 

        clear(currword, 11);

        place ax / 15 + ay * 15;

        strcpy(currword, wordlist[place]);

        if (move == TRUE) {
            if (az == DOWN && ay < 15) {
                ay++;
            } else if (az == UP && ay > 0) {
                ay--;
            } if (az == LEFT && ax > 0) {
                if (ax - 15 > -1) {
                    ax -= 15;
                }
            }
            else if (az == RIGHT && ax < 80) {
                if (ax + 15 < 75) {
                    ax += 15;
                }
            }
        }

        if (pressed == FALSE) {
            if (b[1] > 0) {
                rev++;
                clear(tmp, 15);
                strcpy(tmp, " ");
                strcat(tmp, currword);
                strcpy(mods[rev], tmp);

                pressed = TRUE;
            } else if (b[0]) {
                strcpy(mods[rev], "");
                rev--;
                pressed = TRUE;
            } else if (b[2]) {
                rev++;
                clear(tmp,15);
                strcat(tmp, currword);
                strcpy(mods[rev], tmp);
                pressed = TRUE;
            }
        }
        int k;
        clear(statement,80);
        strcpy(statement, "");
        for (k = 0; k <= rev; k++) {
            strcat(statement, mods[k]);
        }
        mvprintw(16,0, "%s", statement);
        refresh();
    } while (1);

    refresh();
    endwin();
    return 0;
}
	// most of your code goes here. Do not forget to include the ncurses library 

// DO NOT MODIFY THIS FUNCTION!
void trimws(char* str) {
	int length = strlen(str);
	int x;
	if (length == 0) return;
	x = length - 1;
	while (isspace(str[x]) && (x >= 0)) {
		str[x] = '\0';
		x -= 1;
	}
}


// DO NOT MODIFY THIS FUNCTION!
int read_words(char* WL[MAXWORDS], char* file_name)
{
	int numread = 0;
	char line[WORDLENGTH];
	char *p;
	FILE* fp = fopen(file_name, "r");
	while (!feof(fp)) {
		p = fgets(line, WORDLENGTH, fp);
		if (p != NULL) 
		{
			trimws(line);
			WL[numread] = (char *)malloc(strlen(line) + 1);
			strcpy(WL[numread], line);
			numread++;
		}
	}
	fclose(fp);
	return numread;
}

void draw_character(int x, int y, char use) {
    mvaddch(y, x, use);
    refresh();
}

void clear(char *arr, int len) {
    int i;
    for(i = 0; i < len; i++) {
        arr[i] = 0;    
    }
    arr[0] = '/0';
}

void back (char arr[80]) {
    int i;
    size_t pos = strlen(arr);
    for (i = (int)pos; i >= 0; i--) {
        if (arr[i] == ' ') {
            arr[i] == '/0';
            break;
        }
    }
    for (i = i + 1; i < 80; i++) {
        arr[i] = 0;
    }
}

void undo(char arr[80], int num) {
    int i;
    size_t pos = strlen(arr);
    int start = (int)pos;
    for ( i = start; i >= 0; i--) {
        if ((start - 1) == num) {
            arr[i] = '/0';
            break;
        }
    }
    for (i = i + 1; i < 80; i++) {
        arr[i] = 0;
    }
}