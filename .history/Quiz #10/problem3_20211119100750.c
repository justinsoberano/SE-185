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

    if (string[100] == '\0')
        return 0;
    else
        return 1 + recLen(str + 1);
}
}