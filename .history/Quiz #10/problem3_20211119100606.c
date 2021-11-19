#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char string[100];
    int stringSize;

    printf("Enter a string: ");
    scanf("%s", &string[100]);

    stringSize = sizeOfString(string[100]);

    printf("The size of the string is: %d", stringSize);
}

int sizeOfString (char string[100]) {

    int i;

    if (i == 1) {
        return 1;
    } else {
        return sizeOfString
    }
}