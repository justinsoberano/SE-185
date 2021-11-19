#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include<stdio.h>
#include<string.h>
int StringLength(char str[], int i) {
    if(str[i]=='\0') {
            return 0;
    } else { 
        return (1+StringLength(str,i+1));
    }
}
int main() {
    char str[30];
    printf("Enter your String:");
    scanf("%[^\n]",str);
    printf("Length of the String is: %d",StringLength(str,0));
}